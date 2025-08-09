from dataclasses import dataclass, field
from typing import Optional, List
import re
from pathlib import Path
from functools import wraps, cached_property

@dataclass
class MapCache:
	_REPLACEMENTS = {
		"_00": "",
		"_24": " ",
		"_3A": " ",
		"_5C": "\\",
		"_20": " ",
		"_2E": ".",
		"_5F": "_",
	}


	key: str
	displayName: Optional[str] = None
	description: Optional[str] = None
	player_starts: dict = field(default_factory=dict)
	raw_lines: List[str] = field(default_factory=list)  # Opcional: por si querés guardar el bloque crudo

	def __str__(self):
		return f"{self.path}: Exists: {self.path.exists()}"

	@staticmethod
	def _decode_string(s: str) -> str:
		for old, new in MapCache._REPLACEMENTS.items():
			s = s.replace(old, new)
		return s

	@cached_property
	def path(self) -> Path:
		return Path(MapCache._decode_string(self.key))

	def displayNamePretty(self) -> str:
		return MapCache._decode_string(self.displayName)

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



def real_path(path: Path):
	if path.absolute().exists():
		# print("Se encontro la version de v3")
		return path
		
	v2version = Path(str(path.absolute()).replace("1.09v3", "1.09v2"))
	if v2version.exists():
		# print("Se encontro la version de v2")
		return v2version
		
	v1version = Path(str(path.absolute()).replace("1.09v3", "1.09v1"))
	if v1version.exists():
		# print("Se encontro la version de v1")
		return v1version
		
	v106version = Path(str(path.absolute()).replace("1.09v3", "1.06").replace("maps450","maps300"))
	if v106version.exists():
		# print("Se encontro la version de 106")
		return v1version
		
	print(f"No se encontro este mapa: {path}")
	

if __name__ == "__main__":
	mapcachesList: list[MapCache] = parse_mapcache_ini("maps/MapCache.ini")
	print(f"Se leyeron {len(mapcachesList)} mapas.")
	for mc in mapcachesList:
		realpath = real_path(mc.path)
			
			
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