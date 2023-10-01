from pathlib import Path
from pprint import pprint


#Estructura: 
	# {self.beta} {self.faction} {self.objects(N)} {self.predicado}
	# -Beta01: Global: SpellBook.SummonedDragon: SummonedDragon summoning damage max/min damage now 1000/400, from 600/360 respectively.

class ObjectClass:
	OBJECT_TYPE = {"Structures", "Heroes", "Upgrades", "Units", "Ships", "SpellBook", "Maps", "Misc", "ForMappers", "Artillery", "Monsters"}
	
	def __init__(self, master, text):
		self.master = master
		self.full = {}
		subtitles_list = list(map(lambda s: s.strip(), text.split(".")))
		for index, subtitle in enumerate(subtitles_list):
			self.full[index] = subtitle
		self.type = self.full[0]
		self.__validate()
			
	def __validate(self):
		if self.type not in ObjectClass.OBJECT_TYPE:
			raise Exception(f"This type of this object is not defined: {self.type}")
			
	def __str__(self):
		return self.type
	def __eq__(self, compare):
		return self.type == compare

class LogEntry:
	FACTIONS = {"MenOfTheWest", "Elves", "Dwarves", "Isengard", "Mordor", "Goblins", "Global", "Neutral", "Creeps"}
	
	def __init__(self, line):
		self.segments = list(map(lambda s: s.strip(), line.split(":")))
		
		self.__length = len(self.segments)
		self.__validate_length()
		
		self.beta = self.segments[0].replace("-", "")
		self.faction = self.segments[1]
		self.predicado = self.segments[3]
		self.objects = ObjectClass(self, self.segments[2])
		
		self.__validate_faction()
		
		
	def __repr__(self):
		return f"|LogEntry|{self.beta}|{self.faction}|{self.objects.type}|"
		
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
		self.types = sorted({a.objects.type for a in self.instances})
		# self.subtype1 = sorted({a.objects.full.get(1) for a in self.instances})
		# self.subtype2 = sorted({a.objects.full.get(2) for a in self.instances})
		# self.subtype3 = sorted({a.objects.full.get(3) for a in self.instances})
		# self.subtype4 = sorted({a.objects.full.get(4) for a in self.instances})
		# self.subtype5 = sorted({a.objects.full.get(5) for a in self.instances})
		# self.subtype6 = sorted({a.objects.full.get(6) for a in self.instances})
		# self.subtype7 = sorted({a.objects.full.get(7) for a in self.instances})
			
	def get_subtype(self, fromlist, index):
		return {a.objects.full.get(index) for a in fromlist}
		
	
		
	def filter(self, fromlist=False, beta=False, faction=False, objects=None, ):
		if not fromlist:
			fromlist = self.instances
		if beta == "*":
			beta = False
		if faction == "*":
			faction = False
		if objects == "*":
			objects = False
			
			
		return [entry for entry in fromlist 
					if (not beta or entry.beta == beta) 
					and (not faction or entry.faction == faction) 
				]
				
	def filter_subtype(self, object_index, query, fromlist=False):
		if query == "None":
			query = None
		if object_index == "*" or query == "*":
			return fromlist
			
		return [entry for entry in fromlist 
					if (entry.objects.full.get(object_index) == query) 
				]

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
			
	def get_beta_log_new(self, beta=False, faction=False, write=False):
		filtered_entries = self.filter(beta=beta, faction=faction)
		if beta == "*":
			beta = "AllBetas"
		if faction == "*":
			faction = "AllFaction"
			
		filename = f"{beta} {faction}.md"
		beta_entries = {}
		for entry in filtered_entries:
			print(entry)
			
			
			
			
		# log_content = f"# {beta}"



		# if write:
			# self.__write_log(filename, log_content)
			# print(f"{filename} was successfully written")
		# else:
			# print(log_content)
			
			
			
	def get_beta_log(self, beta=False, faction=False, write=False):
			
		filtered_entries = self.filter(beta=beta, faction=faction)
		if beta == "*":
			beta = "AllBetas"
		if faction == "*":
			faction = "AllFaction"
			
		filename = f"{beta} {faction}.md"
		beta_entries = {}
		for entry in filtered_entries:
			if entry.faction not in beta_entries:
				beta_entries[entry.faction] = {}
			if entry.objects.type not in beta_entries[entry.faction]:
				beta_entries[entry.faction][entry.objects.type] = {}
			full_tuple = tuple(entry.objects.full)
			if full_tuple not in beta_entries[entry.faction][entry.objects.type]:
				beta_entries[entry.faction][entry.objects.type][full_tuple] = []
			beta_entries[entry.faction][entry.objects.type][full_tuple].append(entry)

		log_content = f"# {beta}"

		for faction, faction_entries in beta_entries.items():
			log_content += f"\n\n## {faction}"
			for obj_type, obj_entries in faction_entries.items():
				log_content += f"\n\n### {obj_type}"
				for full_tuple, entries in obj_entries.items():
					log_content += f"\n\n#### {' > '.join(full_tuple)}"
					for entry in entries:
						log_content += f"\n\n- {entry.predicado}"

		if write:
			self.__write_log(filename, log_content)
			print(f"{filename} was successfully written")
		else:
			print(log_content)


	def initiate_log_gui(self):
		print(f"\n\n--------------01 FULL-------------------")
		filtered_entries = self.instances
		print(f"Nothing was choices. But u have u got {len(filtered_entries)} items")
		
		
		
		print(f"\n\n---------------02 PATCHES------------------")
		query = ""
		print(f"Ingrese el nombre de uno de estos parches. O Escriba '*' para ver todos los parches. \n\tListado de parches: \n\t\t{self.patches}")
		while query not in self.patches:
			query = input("Ingrese que parches desea ver: ")
			if query == "*":
				break
		filtered_entries = self.filter(beta=query, fromlist=filtered_entries)
		print(f"You choiced {query} and u got {len(filtered_entries)} items")
		
		
		
		print(f"\n\n-----------------03 FACTION----------------")
		query = ""
		print(f"Ingrese el nombre de uno de estas facciones. O Escriba '*' para ver todas las facciones. \n\tListado de facciones: \n\t\t{self.factions}")
		while query not in self.factions:
			query = input("Ingrese que parches desea ver: ")
			if query == "*":
				break
		filtered_entries = self.filter(faction=query, fromlist=filtered_entries)
		print(f"You choiced {query} and u got {len(filtered_entries)} items")
		
		
		
		
		print(f"\n\n-----------------04 subitmes----------------")
		IDNEX = 0
		while True:
			query = ""
			subtype = log.get_subtype(filtered_entries, IDNEX)
			if len(subtype) <= 1:
				break
			
			print(f"Ingrese el nombre de uno de estos query. O Escriba '*' para ver todas los query. \n\tListado de query: \n\t\t{subtype}")
			while query not in subtype:
				query = input("Ingrese que subitmes desea ver: ")
				if query == "*" or query == "None":
					break
			filtered_entries = self.filter_subtype(fromlist=filtered_entries, object_index=IDNEX, query=query)
			
			print(f"You choiced {query} and u got {len(filtered_entries)} items")
			IDNEX += 1
			
		
		
		for item in filtered_entries:
			print(item)
		
		##we need to ask the same based in the length of ObjectClass.full 
		
		
		
changelog_path = Path.cwd() / "Patch 1.09v3_Changes from 1.09v2.ini"
log = Changelog(changelog_path)
log.initiate_log_gui()



# log.print_all_logs(write=True)

# log.get_beta_log("Beta60.3",write=False)
# log.get_beta_log("Beta60.3",write=True)
# log.get_beta_log(
				# beta="*",
				# faction="MenOfTheWest",
				# write=True,
				# )
# log.get_beta_log_new(
				# beta="*",
				# faction="MenOfTheWest",
				# write=True,
				# )
	
	
# for item in log.instances:
	# print(item)
	# print(item.objects.full)
	# break
	# self.beta
	# self.faction
	# self.predicado
	# self.objects
	# self.objects.type
	# self.objects.full
# pprint(CONTADOR)


