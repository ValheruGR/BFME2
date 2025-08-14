import subprocess
from pathlib import Path
import shutil
from icecream import ic
import ctypes
from pyBIG import Archive, LargeArchive

	
class ToMoveFile:
	SRC: Path
	DST: Path
	def __init__(self, raw:str):
		self.raw = raw
		self.src = ToMoveFile.SRC / raw
		self.dst = ToMoveFile.SRC / raw.replace("1.09v3/", "1.09v301/")
		# if "1.09v3/lang/" in raw:
			# self.dst = ToMoveFile.SRC / raw.replace("1.09v3/", "1.09v301/").replace("patch109v3.big", "patch109v301.big")
		# else:
			# self.dst = ToMoveFile.SRC / raw.replace("1.09v3/", "1.09v301/")

	@staticmethod
	def filter_condition(x: str) -> bool:
		if x.startswith("1.09v3/lang") and x.endswith("patch109v3.big"):
			return True
		
		# for to_include in {"1.09v3/maps450/", "1.09v3/maps560/", "1.09v3/art/", "1.09v3/data/"}:
		for to_include in {"1.09v3/maps450/", "1.09v3/maps560/", "1.09v3/art/", "1.09v3/data/"}:
			if x.startswith(to_include):
				return True
				
		return False
		
	def apply(self):
		self.dst.parent.mkdir(parents=True, exist_ok=True)
		if self.src.exists():
			shutil.copy2(self.src, self.dst)
		# else:
			# raise Exception(f"{self.src} is missing") #it's expected to be
		print(f"Successfully built {self.dst.relative_to(ToMoveFile.SRC)}")
		
	def __repr__(self):
		return f"|Src: {self.src}|Dst: {self.dst}"




def build_large_big():
	root = Path(__file__).parent
	folders = ['art', 'maps']
	out_name = "###__BT2DC-v1.09v3.01.big"
	out_file = root / out_name

	# Initialize an empty or existing big archive
	archive = LargeArchive(str(out_file)) if out_file.exists() else LargeArchive(None)

	for folder in folders:
		base = root / folder
		if not base.exists():
			print(f"⚠️ Missing folder: {folder}, skipping...")
			continue

		for file in base.rglob('*'):
			if not file.is_file():
				continue
			rel = file.relative_to(root).as_posix()  # e.g. 'art/model/foo.msh'
			with file.open('rb') as f:
				data = f.read()
			archive.add_file(rel, data)
			print(f"Added: {rel} ({file.stat().st_size} bytes)")

	print("Repacking archive... (may take a while)")
	archive.repack()
	archive.save(str(out_file))
	print(f"✅ Saved BIG: {out_file}")





		
class MyStuff:
	@staticmethod
	def create_readonly_empty_file(path: Path):
		def set_readonly_windows(path: Path):
			FILE_ATTRIBUTE_READONLY = 0x01
			ctypes.windll.kernel32.SetFileAttributesW(str(path), FILE_ATTRIBUTE_READONLY)
		try:
			path.write_bytes(b'')
			set_readonly_windows(path)
		except:
			pass
		
	@staticmethod
	def clean_empty_dirs(path: Path) -> bool:
		if not path.is_dir():
			return False

		for subdir in path.iterdir():
			if subdir.is_dir():
				MyStuff.clean_empty_dirs(subdir)

		if not any(path.iterdir()):
			MyStuff.delete_folder(path)
			return True

		return False
			
	@staticmethod
	def delete_folder(folder):
		if folder.exists() and folder.is_dir():
			for item in folder.iterdir():
				if item.is_dir():
					MyStuff.delete_folder(item)
				else:
					item.unlink()
			folder.rmdir()
		
		
	@staticmethod
	def clean_cwd():
		# if MyStuff.get_boolean("Limpiar lang y maps?")
		# input("good?")
		MyStuff.create_readonly_empty_file(Path("###__BT2DC-v1.09v3.01.big"))
		for path in Path.cwd().iterdir():
			if path.is_dir() and path.name in {"lang", "maps", "maps450", "maps560", "data"}:
				MyStuff.delete_folder(path)

	@staticmethod
	def get_boolean(self,msg: str, letra1: str = "Y", letra2: str = "N", indent: int = 0) -> bool:
		while True:
			ingreso = input(f"{'\t'*indent}{msg} Ingrese {letra1}/{letra2}: ").upper()
			if ingreso == letra1:
				return True
			elif ingreso == letra2:
				return False
				
	@staticmethod
	def flatten_maps_folder():
		"""ASSUMES DESTINE IS ALREADTY DELETED"""
		destine = Path(r"D:\_\1.09v301\maps")
		destine.mkdir()
		# MyStuff.delete_folder(destine)
		base_dir = Path(r"D:\_\1.09v301\maps450")
		nested_maps = base_dir / "maps"
			

		if not nested_maps.exists() or not nested_maps.is_dir():
			print(f"No nested 'maps' folder found inside {base_dir}")
			return

		for item in nested_maps.iterdir():
			target_path = destine / item.name
			if target_path.exists():
				raise Exception(f"Warning: {target_path} already exists")
			# if not item.exists():
				# raise Exception(f"{item} is missing") #it's expected to be
			
			shutil.move(item, target_path)

		MyStuff.delete_folder(base_dir)
	
				
if __name__ == "__main__":
	# input("continuar?")
	ToMoveFile.SRC = Path(r"D:\_")
	ToMoveFile.DST = Path(r"D:\_\1.09v301")
	
	result = subprocess.run(
		["git", "-C", str(ToMoveFile.SRC), "diff", "--name-only", "master"],
		capture_output=True,
		text=True
	)

	if result.returncode != 0:
		input("Error running git command:", result.stderr)
		exit(1)
	else:
		files = [ToMoveFile(file) for file in result.stdout.splitlines() if ToMoveFile.filter_condition(file)]
		MyStuff.clean_cwd()
		for file in files:
			file.apply()
		MyStuff.clean_empty_dirs(Path(r"D:\_\1.09v301\maps560"))
		MyStuff.flatten_maps_folder()
		# build_large_big()
