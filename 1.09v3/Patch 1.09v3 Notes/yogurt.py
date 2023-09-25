from pathlib import Path



class LogEntry:
	FACTIONS = {"MenOfTheWest", "Elves", "Dwarves", "Isengard", "Mordor", "Goblins", "Global", "Neutral", "Creeps"}
	
	def __init__(self, line):
		self.segments = list(map(lambda s: s.strip(), line.split(":")))
		
		self.__length = len(self.segments)
		self.beta = self.segments[0].replace("-", "")
		self.faction = self.segments[1]
		self.predicado = self.segments[3]
		self.objects = LogEntry.ObjectClass(self.segments[2])
		
		self.__validate_length()
		self.__validate_faction()
		
	def __str__(self):
		return f"Beta: {self.beta}\n\tFaction: {self.faction}\n\tObjectType: {self.objects.full} \n\tPredicado: {self.predicado}\n\tObjectLen: {self.__length}"
		
	def __validate_length(self):
		if self.__length != 4:
			raise Exception(f"Parser error: The following segments are not 4: \n {self.segments}")
			
	def __validate_faction(self):
		if self.faction not in LogEntry.FACTIONS:
			raise Exception(f"This faction is not defined: {self.faction}")
	
	
	class ObjectClass:
		OBJECT_TYPE = {"Structures", "Heroes", "Upgrades", "Units", "Ships", "SpellBook", "Maps", "Misc", "ForMappers", "Artillery", "Monsters"}
		
		def __init__(self, text):
			self.full = list(map(lambda s: s.strip(), text.split(".")))
			self.type = self.full[0]
			self.__validate()
				
		def __validate(self):
			if self.type not in LogEntry.ObjectClass.OBJECT_TYPE:
				raise Exception(f"This type of this object is not defined: {self.type}")
				
		def __str__(self):
			return self.type
		def __eq__(self, compare):
			return self.type == compare

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
					
		
	def __len__(self):
		return len(self.instances)
		
	def filter(beta=None, faction=None, objects=None):
		# print(Beta)
		pass
		
	def __write_log(self, log_name, log_content):
		log_name = f"{log_name}.md"
		with open(log_name, 'w') as pretty_log:
			pretty_log.write(log_content)
	
	def get_beta_log(self, beta_n, write=False):
		log_name = f"Beta{beta_n}"
		log_content = f"# {log_name}"
		for query in self.instances:
			if query.beta == log_name:
				log_content += f"\n\n## {query.faction}"
				log_content += f"\n\n### {query.objects.full}"
				log_content += f"\n\n- {query.predicado}"
		print(log_content)
		if write:
			self.__write_log(log_name, log_content)
			
		
changelog_path = Path.cwd() / "Patch 1.09v3_Changes from 1.09v2.ini"
log = Changelog(changelog_path)

log.get_beta_log("60",write=True)
	
# for a in log.instances:
	# self.beta
	# self.faction
	# self.predicado
	# self.objects
	# self.objects.type
	# self.objects.full
		
		
	# if a.faction in "Elves" and a.objects == "SpellBook":
	# if a.faction in "Elves" and a.objects == "SpellBook":
	# if a.beta == "Beta40":
		# print(a)
		# print(a.objects.title)

 