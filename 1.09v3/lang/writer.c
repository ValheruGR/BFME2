#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


// gcc writer.c -o str_to_bigs.exe


#pragma pack(push, 1)

typedef struct {
	char     magic[4];       // "BIGF"
	uint32_t archive_size;
	uint32_t num_files;
	uint32_t header_size;
} BIGHeader;

typedef struct {
	uint32_t offset;
	uint32_t size;
	char     name[]; // flexible array member
} BIGDirectoryEntry;

#pragma pack(pop)

// Write a .big file with a single file inside
int create_big_with_file(const char *str_path, const char *big_output_path, const char *internal_path) {
	// don't be a nigger and match ur parameters with the fucking struct. 
	
	// Open .str file
	FILE *f_str = fopen(str_path, "rb");
	if (!f_str) {
		perror("Failed to open .str file");
		return 1;
	}

	// Get file size
	fseek(f_str, 0, SEEK_END);
	long str_size = ftell(f_str);
	fseek(f_str, 0, SEEK_SET);

	// Read file content
	uint8_t *str_data = malloc(str_size);
	if (!str_data) return 2;
	fread(str_data, 1, str_size, f_str);
	fclose(f_str);

	// Create .big file
	FILE *f_big = fopen(big_output_path, "wb");
	if (!f_big) {
		perror("Failed to open output .big");
		return 3;
	}

	uint32_t file_offset = sizeof(BIGHeader); // after header
	file_offset += 4 + strlen(internal_path); // dir entry: 4+4+len+1

	uint32_t archive_size = file_offset + str_size;

	// Write BIGHeader
	BIGHeader header;
	memcpy(header.magic, "BIGF", 4);
	header.archive_size = archive_size;
	header.num_files = 1;
	header.header_size = file_offset;

	fwrite(&header, sizeof(header), 1, f_big);

	// Write directory entry
	uint32_t offset = file_offset;
	uint32_t size = (uint32_t)str_size;
	fwrite(&offset, sizeof(uint32_t), 1, f_big);
	fwrite(&size, sizeof(uint32_t), 1, f_big);
	fwrite(internal_path, strlen(internal_path) + 1, 1, f_big);  // null-terminated

	// Write file content
	fwrite(str_data, str_size, 1, f_big);

	fclose(f_big);
	free(str_data);

	printf("✅ Created: %s with %s inside as \"%s\"\n", big_output_path, str_path, internal_path);
	return 0;
}

int main() {
	struct {
		const char *str_path;
		const char *big_output_path;
	} entries[] = {
		{"lotr_DUT.str", "dutchpatch109v3.big"},
		{"lotr_ENG.str", "englishpatch109v3.big"},
		{"lotr_ESP.str", "spanishpatch109v3.big"},
		{"lotr_FRA.str", "frenchpatch109v3.big"},
		{"lotr_GER.str", "germanpatch109v3.big"},
		{"lotr_ITA.str", "italianpatch109v3.big"},
		{"lotr_NOR.str", "norwegianpatch109v3.big"},
		{"lotr_POL.str", "polishpatch109v3.big"},  // duplicated intentionally
		{"lotr_SWE.str", "swedishpatch109v3.big"}
	};

	const int num = sizeof(entries) / sizeof(entries[0]);
	for (int i = 0; i < num; ++i) {
		create_big_with_file(
			entries[i].str_path, 
			entries[i].big_output_path, 
			"data\\lotr.str"
		);
	}

	return 0;
}
