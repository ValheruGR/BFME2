from pathlib import Path
from pprint import pprint

CONTADOR = set()


MAX_OBJECT_LENGTH = 0 


class LogEntry:
	FACTIONS = {"MenOfTheWest", "Elves", "Dwarves", "Isengard", "Mordor", "Goblins", "Global", "Neutral", "Creeps"}
	
	def __init__(self, line):
		self.segments = list(map(lambda s: s.strip(), line.split(":")))
		
		self.__length = len(self.segments)
		self.__validate_length()
		
		self.beta = self.segments[0].replace("-", "")
		self.faction = self.segments[1]
		self.predicado = self.segments[3]
		self.objects = LogEntry.ObjectClass(self, self.segments[2])
		
		
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


	class ObjectClass:
		OBJECT_TYPE = {"Structures", "Heroes", "Units", "Ships", "SpellBook", "Maps", "Misc", "ForMappers", "Artillery", "Monsters"}
		
		def __init__(self, master, text):
			self.master = master
			self.full = list(map(lambda s: s.strip(), text.split(".")))
			self.type = self.full[0]
			self.__validate()
			# self.__validate_length()
			
		def __validate_length(self):
			# for subtype in self.full:
				# CONTADOR.add(subtype)
			my_length = len(self.full)
			global MAX_OBJECT_LENGTH
			if my_length > MAX_OBJECT_LENGTH:
				MAX_OBJECT_LENGTH = my_length
				# raise Exception(f"Parser error: The following segments are not 2: \n {self.master.segments}")
			# CONTADOR.add(len(self.full))				
		def __validate(self):
			if self.type not in LogEntry.ObjectClass.OBJECT_TYPE:
				raise Exception(f"This type of this object is not defined: {self.type}")
				
		def __str__(self):
			return self.type
		def __eq__(self, compare):
			return self.type == compare



class Changelog:
	
	def __init__(self, path):
		self.instances = []
		self.read(path)
		self.fix_shits()
		print(f"Changelog parsered: {len(self)} log entries were created ")
		self.factions = sorted({a.faction for a in self.instances})
		self.patches = sorted({a.beta for a in self.instances})
		self.types = sorted({a.objects.full[0] for a in self.instances})
		self.types_2 = sorted({a.objects.full[1] for a in self.instances})

	def fix_shits(self):
		global MAX_OBJECT_LENGTH
		for instance in self.instances:
			print(len(instance.objects.full))
			while len(instance.objects.full) < MAX_OBJECT_LENGTH:
				instance.objects.full.append(None)
			print(len(instance.objects.full))
			
	def read(self, path):
		with open(path, 'r') as raw_log:
			for line in raw_log:
				line = line.strip()
				if line.startswith("-Beta"):
					entry = LogEntry(line)
					self.instances.append(entry)
		
	def filter(self, beta=False, faction=False, query=False):
		if not query:
			query = self.instances
		if beta == "*":
			beta = False
		if faction == "*":
			faction = False
		return [entry for entry in query if (not beta or entry.beta == beta) and (not faction or entry.faction == faction)]

	def __len__(self):
		return len(self.instances)
		
	def __write_log(self, log_name, log_content):
		log_name = Path.cwd() / "patches" / f"{log_name}.md"
		with open(log_name, 'w') as pretty_log:
			pretty_log.write(log_content)
			
	def print_all_logs(self, write=False):		
		for patch in log.patches:
			log.get_beta_log(
							beta=patch,
							faction="*",
							write=write,
							)
							
	def get_full_log(self, write=False):
		self.get_beta_log(
						beta="*",
						faction="*",
						write=write,
						)
			
	def get_beta_log(self, beta=False, faction=False, write=False):
			
		filtered_entries = self.filter(beta=beta, faction=faction)
		if beta == "*":
			beta = "AllBetas"
		if faction == "*":
			faction = "AllFaction"
			
		log_name = beta
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

		log_content = f"# {log_name}"

		for faction, faction_entries in beta_entries.items():
			log_content += f"\n\n## {faction}"
			for obj_type, obj_entries in faction_entries.items():
				log_content += f"\n\n### {obj_type}"
				for full_tuple, entries in obj_entries.items():
					log_content += f"\n\n#### {' > '.join(full_tuple)}"
					for entry in entries:
						log_content += f"\n\n- {entry.predicado}"

		if write:
			self.__write_log(log_name, log_content)
			print(f"{log_name}.md was successfully written")
		else:
			print(log_content)



		
changelog_path = Path.cwd() / "Patch 1.09v3_Changes from 1.09v2.ini"
log = Changelog(changelog_path)


log.get_beta_log(
				beta="*",
				faction="*",
				write=write,
				)
# for count, a in enumerate(log.factions, start=1):
	# print(count, a)
# for count, a in enumerate(log.types_2, start=1):
	# print(count, a)
	
	
# log.print_all_logs(write=True)

# log.get_beta_log("Beta60.3",write=False)
# log.get_beta_log("Beta60.3",write=True)

# log.get_full_log(write=True)
	
	
	
# for a in log.instances:
	# self.beta
	# self.faction
	# self.predicado
	# self.objects
	# self.objects.type
	# self.objects.full
# pprint(CONTADOR)