import subprocess
from pathlib import Path
import shutil
from icecream import ic





# Define paths
repoPath = Path(r"D:\_")
# input(repoPath.exists())

destPath = Path(r"D:\_\1.09v301")
# input(destPath.exists())
# refresh = destPath / "###__BT2DC-v1.09v3.01.big"
# refresh.open('w').close()

# Ensure the destination directory exists
destPath.mkdir(parents=True, exist_ok=True)

# Get list of modified files in the 1.09v3\ directory compared to master
result = subprocess.run(
	["git", "-C", str(repoPath), "diff", "--name-only", "master"],
	capture_output=True,
	text=True
)

# Check for errors in the git command
if result.returncode != 0:
	input("Error running git command:", result.stderr)
	exit(1)
	
# ic(result.stdout.splitlines())

# Filter files that contain '1.09v3' in their path
modified_files = [line for line in result.stdout.splitlines() if ("1.09v3/data" in line) or ("1.09v3/maps450" in line) or ("1.09v3/art" in line)]
# ic(modified_files)
# input("all gud")
# Copy modified files to the destination path
for file in modified_files:
	sourceFile = repoPath / file
	
	print(f"{sourceFile=} exists: {sourceFile.exists()}")
	
	# input("wait")
	# ic(sourceFilesourceFile.exists(), )
	# ic(sourceFile)
	targetFile = destPath / (file.replace("1.09v3/",""))
	# ic(sourceFile, targetFile)
	# Create target directory if it doesn't exist
	targetFile.parent.mkdir(parents=True, exist_ok=True)

	# Copy file
	shutil.copy2(sourceFile, targetFile)

print(f"Files copied successfully to {destPath}")
# input("done")