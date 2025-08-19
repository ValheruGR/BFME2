import pyBIG
from pathlib import Path
import struct
		
def createBigFile(name_of_the_file: str) -> "pyBIG.Archive":
	# Build header:
	magic = b'BIGF'                          # 4 bytes: 'BIGF'
	archive_size = struct.pack('<I', 16)     # 4 bytes: total size of file
	num_files = struct.pack('<I', 0)         # 4 bytes: number of files
	header_size = struct.pack('<I', 16)      # 4 bytes: offset to first file / dir

	# Combine everything
	header = magic + archive_size + num_files + header_size

	# Save to file
	Path(name_of_the_file).write_bytes(header)

	# read as pyBigArchive and return it
	with open(name_of_the_file, "rb") as f:
		return pyBIG.Archive(f.read())


def convert_thingy_to_thing(key:str, value:str, with_name:str):
	with open(key, "rb") as f:
		key_content = f.read()

	archive = createBigFile(value)
	archive.add_file(with_name, key_content)
	archive.repack()
	archive.save(value)

if __name__ == "__main__":
	dict = {
		"lotr_DUT.str": "dutchpatch109v3.big",
		"lotr_ENG.str": "englishpatch109v3.big",
		"lotr_ESP.str": "spanishpatch109v3.big",
		"lotr_FRA.str": "frenchpatch109v3.big",
		"lotr_GER.str": "germanpatch109v3.big",
		"lotr_ITA.str": "italianpatch109v3.big",
		"lotr_NOR.str": "norwegianpatch109v3.big",
		"lotr_POL.str": "spanishpatch109v3.big",
		"lotr_SWE.str": "swedishpatch109v3.big",
	}
	for key, value in dict.items():
		convert_thingy_to_thing(key, value, with_name="data\\lotr.str")
