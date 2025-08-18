from dataclasses import dataclass
import subprocess
from pathlib import Path
import shutil
from icecream import ic
import ctypes
import struct
import pyBIG
	
@dataclass(frozen=True)
class IniToBigFile:
	source: Path
	destino: str

def createBigFile(name_of_the_file: Path) -> "pyBIG.Archive":
	# Build header:
	magic = b'BIGF'                          # 4 bytes: 'BIGF'
	archive_size = struct.pack('<I', 16)     # 4 bytes: total size of file
	num_files = struct.pack('<I', 0)         # 4 bytes: number of files
	header_size = struct.pack('<I', 16)      # 4 bytes: offset to first file / dir

	# Combine everything
	header = magic + archive_size + num_files + header_size

	# Save to file
	name_of_the_file.write_bytes(header)

	# read as pyBigArchive and return it
	with open(name_of_the_file, "rb") as f:
		return pyBIG.Archive(f.read())

APPENDTHISONESTOLAND = {
	"titlescreenuserinterface.jpg": None,
	"load_w_ea.jpg": None,
}

def process_to_big(path: Path) -> str:
	relative_to = "art"
	s = str(path)
	idx = s.lower().find(relative_to.lower())  # case-insensitive search
	if idx == -1:
		raise ValueError(f"'{relative_to}' not found in {path}")
	subpath = s[idx:]
	return subpath.replace("/", "\\")
	
def process_langList(langList: list[Path], destino_root):
	# ic(langList)
	# input()
	lang_dict = {
		"lotr_DUT.str": "dutchpatch109v301.big",
		"lotr_ENG.str": "englishpatch109v301.big",
		"lotr_ESP.str": "spanishpatch109v301.big",
		"lotr_FRA.str": "frenchpatch109v301.big",
		"lotr_GER.str": "germanpatch109v301.big",
		"lotr_ITA.str": "italianpatch109v301.big",
		"lotr_NOR.str": "norwegianpatch109v301.big",
		"lotr_POL.str": "polishpatch109v301.big",
		"lotr_SWE.str": "swedishpatch109v301.big",
		# "lotr_RUS.csf": "russianpatch109v301.big",
	}
	langfolder = destino_root / "lang"
	langfolder.mkdir(parents=True, exist_ok=True)
	
	
	
	
	for fileSTR in langList:
		if langbig := lang_dict.get(fileSTR.name):
			languageBig = langfolder/langbig
			langfile = createBigFile(languageBig)
			langfile.add_file(r"data\lotr.str", fileSTR.read_bytes())
			for name, source in APPENDTHISONESTOLAND.items():
				langfile.add_file(
					process_to_big(source), 
					source.read_bytes()
				)
			langfile.repack()
			langfile.save(str(languageBig))



def process_iniList(iniList: list[IniToBigFile], destino_root):
	# ic(iniList)
	# input()
	out_file = destino_root / "###__BT2DC-v1.09v3.01.big"
	archive = createBigFile(out_file)
	for file in iniList:
		if not file.source.exists():
			print(f"Error: {file.source} doesn't exist")
		else:
			if file.source.suffix in (".ini", ".map", ".tga", ".inc", ".str", ".dds", ".jpg"): #Just one extra safety filter!
				archive.add_file(file.destino, file.source.read_bytes())
				# print(f"Success adding {file.source}")
			else:
				print(f"Skipped {file.source}")
		if file.source.name in APPENDTHISONESTOLAND:
			APPENDTHISONESTOLAND[file.source.name] = file.source
	archive.repack()
	archive.save(str(out_file))
	print(f"Success building {out_file}")



def process_datList(datList, reporoot, destino_root):
	# ic(datList)
	# input()
	for item in datList:
		source = reporoot / item
		destino = destino_root / (item.replace("1.09v3/",""))
		destino.parent.mkdir(parents=True, exist_ok=True)
		shutil.copy2(source, destino)


if __name__ == "__main__":
	result = subprocess.run(
		[
			"git",
			"-C", r"D:\_",                # repo location
			"diff",
			"--diff-filter=AM",                  # only added/modified
			"--name-only",
			"master",
			"--", "1.09v3/"                      # folder filter
		],
		capture_output=True,
		text=True
	)
	if result.returncode != 0:
		print("Error running git command:", result.stderr)
		exit(1)
		
	langList: list[Path] = []
	iniList: list[IniToBigFile] = []
	datList: list[str] = []


	REPOROOT = Path.cwd().parent
	DESTINO_ROOT = Path(r"C:\Program Files (x86)\BFME2 Ecth's Patch Switcher\109v301\ßdev") ## Path.cwd() / "ßdev"
	
	for file_str in result.stdout.splitlines():
		if file_str.startswith(r"1.09v3/lang") and file_str.endswith(".str"):
			langList.append(REPOROOT / file_str)
			
		elif file_str.startswith(r"1.09v3/maps450") and (REPOROOT/file_str).suffix in {".ini", ".map", ".tga", ".str"}: ##Note it's intentionally ignoring 560 folder
			iniList.append(IniToBigFile(
				source = REPOROOT/file_str,
				destino = file_str.replace("1.09v3/maps450/","").replace("/","\\")
			))
			
		elif file_str.startswith(r"1.09v3/data") or file_str.startswith(r"1.09v3/art") or file_str.startswith(r"1.09v3/art"):
			iniList.append(IniToBigFile(
				source = REPOROOT/file_str,
				destino = file_str.replace("1.09v3/", "").replace("/","\\")
			))
				
		elif file_str.endswith(".dat") or file_str.endswith(".jpg"):
			datList.append(file_str)
		
		else:
			print(f"{file_str} skipped")
		
	process_iniList(iniList, DESTINO_ROOT)
	process_datList(datList, REPOROOT, DESTINO_ROOT)
	process_langList(langList, DESTINO_ROOT)
	
	
	
		
	# MyStuff.clean_cwd()
	# MyStuff.clean_empty_dirs(Path(r"D:\_\1.09v301\maps560"))
	# MyStuff.flatten_maps_folder()

