from dataclasses import dataclass
import subprocess
from pathlib import Path
import shutil
from icecream import ic
import ctypes
import struct
import pyBIG
import re

@dataclass(frozen=True)
class StringSTR:
	key: str
	value: str
	hotkey: str | None

def parse_str_file(file_path: Path) -> list[StringSTR]:
	entries = []
	key, value, hotkey = None, None, None

	# with file_path.open("r", encoding="utf-8") as f:
	with file_path.open("r") as f:
		for line in f:
			line = line.strip()
			if not line or line.startswith("//"):
				continue  # skip empty lines & comments

			if key is None and ":" in line:
				key = line.split(":", 1)[1].strip()
			elif line.startswith('"') and line.endswith('"'):
				value = line.strip('"')
				# find hotkey after '&' if present
				m = re.search(r"&(\S)", value)
				hotkey = m.group(1) if m else None
			elif line.upper() == "END":
				if key is not None and value is not None:
					entries.append(StringSTR(key=key, value=value, hotkey=hotkey))
				key, value, hotkey = None, None, None  # reset for next entry

	return entries

# usage
file_path = Path(r"D:\_\1.09v3\lang\lotr_ENG.str")
parsed = parse_str_file(file_path)
for e in parsed[:55]:  # show first 5 entries
	print(e.key)
	print(e.hotkey)
