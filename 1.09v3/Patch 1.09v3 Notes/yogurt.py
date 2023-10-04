from pathlib import Path
from pprint import pprint


class LogEntry:
	FACTIONS = {"MenOfTheWest", "Elves", "Dwarves", "Isengard", "Mordor", "Goblins", "Global", "Neutral", "Creeps"}
	OBJECT_TYPE = {"Structures", "Heroes", "Upgrades", "Units", "Ships", "SpellBook", "Maps", "Misc", "ForMappers", "Artillery", "Monsters"}
	
	def __init__(self, line):
		self.segments = list(map(lambda s: s.strip(), line.split(":")))
		
		self.__length = len(self.segments)
		self.__validate_length()
		
		
		self.beta = self.segments[0].replace("-", "")
		self.faction = self.segments[1]
		self.objects = list(map(lambda s: s.strip(), self.segments[2].split(".")))
		self.predicado = self.segments[3]
		
		
		self.__validate_faction()
		
		
	def __repr__(self):
		return f"|LogEntry|{self.beta}|{self.faction}|{self.objects}|"
		
	def __str__(self):
		return f"Beta: {self.beta}\n\tFaction: {self.faction}\n\tObjectType: {self.objects.full} \n\tPredicado: {self.predicado}\n\tObjectLen: {self.__length}"
		
	def __validate_length(self):
		if self.__length != 4:
			raise Exception(f"Parser error: The following segments are not 4: \n {self.segments}")
			
	def __validate_faction(self):
		if self.faction not in LogEntry.FACTIONS:
			raise Exception(f"This faction is not defined: {self.faction}")



class Changelog:
	
	def __init__(self, changelog_path):
		self.instances = []
		
		with open(changelog_path, 'r') as raw_log:
			for line in raw_log:
				line = line.strip()
				if line.startswith("-Beta"):
					entry = LogEntry(line)
					self.instances.append(entry)
		print(f"Changelog parsered: {len(self)} log entries were created ")
		self.patches = sorted({a.beta for a in self.instances})
		self.factions = sorted({a.faction for a in self.instances})

	def __len__(self):
		return len(self.instances)
		
	def __write_log(self, filename, log_content):
		filepath = Path.cwd() / "patches" / filename
		with open(filepath, 'w') as pretty_log:
			pretty_log.write(log_content)
			
	def print_all_logs(self, write=False):		
		for patch in log.patches:
			log.get_beta_log(
							beta=patch,
							faction="*",
							write=write,
							)
	def where(self, fromlist=False, beta=False, faction=False, objectquery=None):
		if not fromlist:
			fromlist = self.instances
		if beta == "*":
			beta = False
		if faction == "*":
			faction = False
		if objectquery == "*":
			objectquery = False
			
			
		filtered = [entry for entry in fromlist 
					if (not beta or entry.beta == beta) 
					and (not faction or entry.faction == faction) 
				]
		if not objectquery:
			return filtered
		else:
			return [entry for entry in filtered if objectquery in entry.objects]


					
	def get_object_names(self, fromlist, index):
		# if of_beta or of_faction:
			# fromlist = self.where(fromlist=fromlist, beta=of_beta, faction=of_faction)
		
		# return {a.objects[index] if index < len(a.objects) else None for a in fromlist}
		return list({a.objects[index] if index < len(a.objects) else None for a in fromlist})
		
	def get_faction_names(self, fromlist, sorted=True):
		if sorted:
			return sorted(list({entry.faction for entry in fromlist}))
		else:
			return {entry.faction for entry in fromlist}
			
		
	def get_beta_log(self, beta=False, faction=False, write=False):
		fromlist = self.where(beta=beta, faction=faction)
		if beta == "*":
			beta = "AllBetas"
		if faction == "*":
			faction = "AllFaction"
		file_title = f"{beta} {faction}"
		filename_ext = f"{beta} {faction}.md"
		

		
		def html_center(string, hn=1):
			if hn > 3:
				alignation = 'left'
			else:
				alignation = 'center'
			return f"<div align={alignation}> <h{hn}>{string}</h{hn}> </div>"		
		
		
		
		log_content = f"{html_center(file_title, hn=1)}\n"
		titulos = sorted(list({entry.faction for entry in fromlist}))
		for subtitulo in titulos:
			log_content += f"\n{html_center(subtitulo, hn=2)}\n"
			
			faction_entries = self.where(fromlist, faction=subtitulo)
			titulos = self.get_object_names(faction_entries, 0)
			for subtitulo in titulos:
				if True: #if subtitulo is not None:
					log_content += f"\n{html_center(subtitulo, hn=3)}\n"
				
				
				subobject1_entries = self.where(faction_entries, objectquery=subtitulo)
				titulos = self.get_object_names(subobject1_entries, 1)
				for subtitulo in titulos:
					if True: #if subtitulo is not None:
						log_content += f"\n{html_center(subtitulo, hn=4)}\n"
					
					subobject2_entries = self.where(subobject1_entries, objectquery=subtitulo)
					titulos = self.get_object_names(subobject2_entries, 2)
					for subtitulo in titulos:
						if True: #if subtitulo is not None:
							log_content += f"\n{html_center(subtitulo, hn=5)}\n"
						
						
						subobject3_entries = self.where(subobject2_entries, objectquery=subtitulo)
						titulos = sorted(list({entry.beta for entry in subobject3_entries}))
						for subtitulo in titulos:
							if True: #if subtitulo is not None:
								log_content += f"\n{html_center(subtitulo, hn=6)}\n"
								
							subobject4_entries = self.where(subobject3_entries, beta=subtitulo)
							for entry in subobject4_entries:
								predicado = entry.predicado.capitalize()
								log_content += f"\n-{predicado}\n"
				

	

		if write:
			self.__write_log(filename_ext, log_content)
			print(f"{filename_ext} was successfully written")
		else:
			print(log_content)



	def initiate_log_gui(self):
		print(f"\n\n--------------01 FULL-------------------")
		fromlist = self.instances
		print(f"Nothing was choices. But u have u got {len(fromlist)} items")
		
		
		
		print(f"\n\n---------------02 PATCHES------------------")
		query = ""
		print(f"Ingrese el nombre de uno de estos parches. O Escriba '*' para ver todos los parches. \n\tListado de parches: \n\t\t{self.patches}")
		while query not in self.patches:
			query = input("Ingrese que parches desea ver: ")
			if query == "*":
				break
		fromlist = self.where(beta=query, fromlist=fromlist)
		print(f"You choiced {query} and u got {len(fromlist)} items")
		
		
		
		print(f"\n\n-----------------03 FACTION----------------")
		query = ""
		print(f"Ingrese el nombre de uno de estas facciones. O Escriba '*' para ver todas las facciones. \n\tListado de facciones: \n\t\t{self.factions}")
		while query not in self.factions:
			query = input("Ingrese que parches desea ver: ")
			if query == "*":
				break
		fromlist = self.where(faction=query, fromlist=fromlist)
		print(f"You choiced {query} and u got {len(fromlist)} items")
		
		
		
		
		print(f"\n\n-----------------04 subitmes----------------")
		IDNEX = 0
		while True:
			query = ""
			subtype = log.get_object_names(fromlist, IDNEX)
			if len(subtype) <= 1:
				break
			
			print(f"Ingrese el nombre de uno de estos query. O Escriba '*' para ver todas los query. \n\tListado de query: \n\t\t{subtype}")
			while query not in subtype:
				query = input("Ingrese que subitmes desea ver: ")
				if query == "*" or query == "None":
					break
			fromlist = self.where(fromlist=fromlist, objectquery=query)
			
			print(f"You choiced {query} and u got {len(fromlist)} items")
			IDNEX += 1
			
		
		
		for item in fromlist:
			print(item)
		
		
		
		
changelog_path = Path.cwd() / "Patch 1.09v3_Changes from 1.09v2.ini"
log = Changelog(changelog_path)




# log.initiate_log_gui()

# instances = log.where(beta="*", faction="Elves", objectquery = "Arwen")
# for instance in instances:
	# print("- ", instance.predicado)


# log.print_all_logs(write=True)

# log.get_beta_log("Beta60.3",write=False)
# log.get_beta_log("Beta60.3",write=True)
log.get_beta_log(
				beta="*",
				faction="*",
				write=True,
				)
# log.get_beta_log_new(
				# beta="*",
				# faction="MenOfTheWest",
				# write=True,
				# )
	
	
# for item in log.instances:
	# print(item)
	# break
	# self.beta
	# self.faction
	# self.predicado
	# self.objects
# pprint(CONTADOR)


for num in range(9):
	print(num, len(log.get_object_names(log.instances, num)))
