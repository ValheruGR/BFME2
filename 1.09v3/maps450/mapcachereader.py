from dataclasses import dataclass, field
from typing import Optional, List
import re
from pathlib import Path
from functools import wraps, cached_property

@dataclass
class MapCache:
	key: str
	displayName: Optional[str] = None
	description: Optional[str] = None
	player_starts: dict = field(default_factory=dict)
	raw_lines: List[str] = field(default_factory=list)  # Opcional: por si querés guardar el bloque crudo

	def __str__(self):
		# return f"{self.key} - {self.displayName} ({len(self.player_starts)} players)"
		# return self.displayNamePretty()
		return f"{self.path}: Exists: {self.path.exists()}"

	@cached_property
	def path(self):
		return Path(self.key.replace("_00","").replace("_24","").replace("3A"," ").replace("_5C","\\").replace("_20"," ").replace("_2E",".").replace("_5F","_"))
		

	def displayNamePretty(self):
		return self.displayName.replace("_00","").replace("_24"," ").replace("3A"," ")

def parse_mapcache_ini(path: str) -> List[MapCache]:
	result = []
	with open(path, "r", encoding="utf-8") as f:
		lines = f.readlines()

	i = 0
	while i < len(lines):
		line = lines[i].strip()
		if line.lower().startswith("mapcache"):
			# Comenzamos un nuevo bloque
			_, key = line.split(maxsplit=1)
			cache = MapCache(key=key)

			i += 1
			while i < len(lines):
				line = lines[i].strip()
				cache.raw_lines.append(line)

				if line.lower() == "end":
					break

				if "=" in line:
					field_name, value = map(str.strip, line.split("=", 1))

					if field_name.startswith("Player_") and field_name.endswith("_Start"):
						cache.player_starts[field_name] = value
					elif field_name == "displayName":
						cache.displayName = value
					elif field_name == "description":
						cache.description = value

				i += 1

			result.append(cache)
		i += 1

	return result


if __name__ == "__main__":
	mapcachesList: list[MapCache] = parse_mapcache_ini("maps/MapCache.ini")
	print(f"Se leyeron {len(mapcachesList)} mapas.")
	# print(files)
	for mc in mapcachesList:
		if not mc.path.exists():
			print(f"\tProblema. Real map doesn't exist for {mc.path}")
			
			
	LEGAL_MAPS = {map.path.name.lower() for map in mapcachesList}
	# print(LEGAL_MAPS)
	for mapfolder in Path("maps").iterdir():
		if mapfolder.is_dir():
			try:
				mapfile = next(mapfolder.rglob("*.map"))
				if mapfile.name.lower() not in LEGAL_MAPS:
					print(f"\t{mapfile.name} can be deleted")
			except StopIteration:
				print(f"\tNo .map file found in {mapfolder}")
	print(f"Success: all maps are properly cached")