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
	name_of_the_file.parent.mkdir(parents=True, exist_ok=True)
	
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



class Patch:
	def __init__(self: "Patch", from_branch: str, to_branch: str, output_to: Path, output_big_name:str):
		self.from_branch = from_branch
		self.to_branch = to_branch
		self.output_to = output_to
		self.output_big = output_to / output_big_name 
	def compile(self: "Patch"):
		result = subprocess.run(
			[
				"git",
				"-C", r"D:\_",               # repo location
				"diff",
				"--diff-filter=AM",          # only added/modified
				"--name-only",
				self.from_branch,
				self.to_branch,                  # explicit comparison
				"--", "1.09v3/"              # folder filter
			],
			capture_output=True,
			text=True
		)
		if result.returncode != 0:
			print("Error running git command:", result.stderr)
			exit(1)
			
		lang_list: list[Path] = []
		iniList: list[IniToBigFile] = []
		datList: list[str] = []
		
		for file_str in result.stdout.splitlines():
			if file_str.startswith(r"1.09v3/lang") and (file_str.endswith(".str") or file_str.endswith(".csf")):
				lang_list.append(REPOSITORY_ROOT / file_str)
				
			elif file_str.startswith(r"1.09v3/maps450") and (REPOSITORY_ROOT/file_str).suffix in {".ini", ".map", ".tga", ".str"}: ##Note it's intentionally ignoring 560 folder
				iniList.append(IniToBigFile(
					source = REPOSITORY_ROOT/file_str,
					destino = file_str.replace("1.09v3/maps450/","").replace("/","\\")
				))
				
			elif file_str.startswith(r"1.09v3/data") or file_str.startswith(r"1.09v3/art") or file_str.startswith(r"1.09v3/art"):
				iniList.append(IniToBigFile(
					source = REPOSITORY_ROOT/file_str,
					destino = file_str.replace("1.09v3/", "").replace("/","\\")
				))
					
			elif file_str.endswith(".dat") or file_str.endswith("plash.jpg"):
				datList.append(file_str)
			
			else:
				print(f"{file_str} skipped")
			
		self.process_iniList(iniList)
		self.process_datList(datList)
		self.process_langList(lang_list)
	
	def process_iniList(self: "Patch", iniList: list[IniToBigFile]):
		archive = createBigFile(self.output_big)
		for file in iniList:
			if not file.source.exists():
				print(f"Error: {file.source} doesn't exist")
			else:
				if file.source.suffix in (".ini", ".map", ".tga", ".inc", ".str", ".dds", ".jpg"): #Just one extra safety filter!
					archive.add_file(file.destino, file.source.read_bytes())
				else:
					print(f"Skipped {file.source}")
			if file.source.name in APPENDTHISONESTOLAND:
				APPENDTHISONESTOLAND[file.source.name] = file.source
					
		archive.repack()
		archive.save(str(self.output_big))
		print(f"Success building {self.output_big}")

	def process_datList(self: "Patch", datList:str ):
		for item in datList:
			source = REPOSITORY_ROOT / item
			destino = self.output_to / (item.replace("1.09v3/",""))
			destino.parent.mkdir(parents=True, exist_ok=True)
			if source.exists():
				shutil.copy2(source, destino)
			else:
				print(f"ERROR: {source} doesn't exist")
				
	def process_to_big(self: "Patch", path: Path) -> str:
		relative_to = "art"
		s = str(path)
		idx = s.lower().find(relative_to.lower())  # case-insensitive search
		if idx == -1:
			raise ValueError(f"'{relative_to}' not found in {path}")
		subpath = s[idx:]
		return subpath.replace("/", "\\")
		
	def process_langList(self: "Patch", lang_list: list[Path]):
		str_dict = {
			"lotr_DUT.str": "dutchpatch109v301.big",
			"lotr_ENG.str": "englishpatch109v301.big",
			"lotr_ESP.str": "spanishpatch109v301.big",
			"lotr_FRA.str": "frenchpatch109v301.big",
			"lotr_GER.str": "germanpatch109v301.big",
			"lotr_ITA.str": "italianpatch109v301.big",
			"lotr_NOR.str": "norwegianpatch109v301.big",
			"lotr_POL.str": "polishpatch109v301.big",
			"lotr_SWE.str": "swedishpatch109v301.big",
			# "lotr_TUR.str": "turkishpatch109v301.big",
			"lotr_RUS.csf": "russianpatch109v301.big",
		}
		langfolder = self.output_to / "lang"
		langfolder.mkdir(parents=True, exist_ok=True)
		
		
		for lang_file in lang_list:
			if strbig := str_dict.get(lang_file.name):
				patchlangage09v01big = langfolder/strbig
				langfile = createBigFile(patchlangage09v01big)
				if lang_file.suffix == ".csf":
					langfile.add_file(r"lotr.csf", lang_file.read_bytes())
					langfile.add_file(r"data\lotr.str", b"")
				else:
					langfile.add_file(r"data\lotr.str", lang_file.read_bytes())
					
					
				for name, source in APPENDTHISONESTOLAND.items():
					langfile.add_file(
						self.process_to_big(source), 
						source.read_bytes()
					)
				langfile.repack()
				langfile.save(str(patchlangage09v01big))
				




if __name__ == "__main__":
	REPOSITORY_ROOT = Path(r"D:\_")
	
	# patch_v301 = Patch(
		# from_branch = "1.09v3.0",
		# to_branch = "1.09v3.1release",
		# output_to = Path(r"C:\Program Files (x86)\BFME2 Ecth's Patch Switcher\109v301\ßdev"),
		# output_big_name = "###__BT2DC-v1.09v3.01.big",
	# ).compile()
	# patch_v301_01= Patch(
		# from_branch = "1.09v3.1release",
		# to_branch = "master",
		# output_to = Path(r"C:\Program Files (x86)\BFME2 Ecth's Patch Switcher\109v301\ßdev"),
		# output_big_name = "###__!BT2DC-v1.09v3.01_Addon.big", #"###__!bt2dc-v1.09v3.01_arenamapsfix.big"
	# ).compile()





	patch_v301 = Patch(
		from_branch = "1.09v3.0",
		to_branch = "master",
		output_to = Path(r"C:\Program Files (x86)\BFME2 Ecth's Patch Switcher\109v301\ßdev"),
		output_big_name = "###__BT2DC-v1.09v3.01.big",
	).compile()