from pathlib import Path


changelog_path = Path.cwd() / "Patch 1.09v3_Changes from 1.09v2.ini"

with open(changelog_path, 'r') as changelog:
	for line in changelog:
		line = line.strip()
		if line.startswith("-Beta01"):
			print(line)
