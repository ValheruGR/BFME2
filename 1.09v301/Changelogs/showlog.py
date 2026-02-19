from pathlib import Path

file = Path.cwd() / "Patch 1.09v301_Changes.ini"

search_filter = input("Ingrese Beta log a buscar: ")
search_filter = f"- ß{search_filter}"
LOG = f"## Changelog of 1.09 v3.01 {search_filter}\n"
## Mordor:

diccionario = {
	"### MenOfTheWest:\n": "",
	"### Elves:\n": "",
	"### Dwarves:\n": "",
	"### Isengard:\n": "",
	"### Mordor:\n": "",
	"### Goblins:\n": "",
	"### Global:\n": "",
}
LLAVES = diccionario.keys()

with open(file, encoding="utf-8") as fp:
    for line in fp:  # No need to call `read()`, you can iterate directly
        if search_filter in line or line in LLAVES:
            LOG += line.replace(search_filter, "")



print(LOG)
