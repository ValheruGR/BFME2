from pathlib import Path

picked_items = []

MAPS_FOLDER = Path.cwd()  / "maps"

for mapdir in MAPS_FOLDER.iterdir():
	if mapdir.is_dir():
		for file in mapdir.iterdir():
			if file.suffix == ".csv" or file.suffix == ".tga" and not(file.stem.endswith("_art") or file.stem.endswith("_pic")):
				picked_items.append(file)
				
if input(f"Picked items: \n{[file.name for file in picked_items]}\n\n Proceed to delete? (<y> to accept): ").lower() == "y":
	for item in picked_items:
		try:
			item.unlink()
		except PermissionError:
			print(f"PermissionError: {item} could not be deleted.")
			continue