import subprocess
from pathlib import Path
import shutil
from icecream import ic

class ToMoveFile:
	SRC: Path
	DST: Path
	def __init__(self, raw:str):
		self.raw = raw
		self.src = ToMoveFile.SRC / raw
		if "1.09v3/lang/" in raw:
			self.dst = ToMoveFile.SRC / raw.replace("1.09v3/", "1.09v301/").replace("patch109v3.big", "patch109v301.big")
		else:
			self.dst = ToMoveFile.SRC / raw.replace("1.09v3/", "1.09v301/")

	@staticmethod
	def filter_condition(x: str) -> bool:
		if x.startswith("1.09v3/lang") and x.endswith("patch109v3.big"):
			return True
		
		for to_include in {"1.09v3/maps450/", "1.09v3/maps560/", "1.09v3/art/", "1.09v3/data/"}:
			if x.startswith(to_include):
				return True
	
	def apply(self):
		self.dst.parent.mkdir(parents=True, exist_ok=True)
		shutil.copy2(self.src, self.dst)
		print(f"Successfully built {self.dst.relative_to(ToMoveFile.SRC)}")
		
	def __repr__(self):
		return f"|Src: {self.src}|Dst: {self.dst}"
		
if __name__ == "__main__":
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
		for file in files:
			file.apply()
