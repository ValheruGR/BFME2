from pathlib import Path
from pprint import pprint

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
		
	def filter(self, beta=False, faction=False, query=False):
		if not query:
			query = self.instances
		return [entry for entry in query if (not beta or entry.beta == beta) and (not faction or entry.faction == faction)]

	def __len__(self):
		return len(self.instances)
		
	def __write_log(self, log_name, log_content):
		log_name = f"{log_name}.md"
		with open(log_name, 'w') as pretty_log:
			pretty_log.write(log_content)
	
	def __write_faction_logs(self, faction, query):
		faction_logs = f"\n\n## {faction}"
		for entry in query:
			faction_logs += f"\n\n### {entry.objects.full}"
			faction_logs += f"\n\n- {entry.predicado}"
		return faction_logs
	
	def get_beta_log(self, beta_n, write=False):
		filtered_entries = self.filter(beta=beta_n)
		log_content = f"# {beta_n}"
		for entry in filtered_entries:
			log_content += self.__write_faction_logs(entry.faction, filtered_entries)

		if write:
			self.__write_log(beta_n, log_content)
			print(f"{beta_n}.md was successfully written")
		else:
			print(log_content)
			
	def get_beta_log(self, beta_n, write=False):
		log_name = beta_n
		
		# Create a dictionary to group entries by faction within each beta
		beta_entries = {}
		
		# Filter entries for the specified beta
		filtered_entries = self.filter(beta=beta_n)
		
		# Group entries by faction within the specified beta
		for entry in filtered_entries:
			if entry.faction not in beta_entries:
				beta_entries[entry.faction] = []
			beta_entries[entry.faction].append(entry)
		
		log_content = f"# {log_name}"
		
		# Iterate through betas and factions to generate the log content
		for faction, faction_entries in beta_entries.items():
			log_content += f"\n\n## {faction}"
			
			for entry in faction_entries:
				log_content += f"\n\n### {entry.objects.full}"
				log_content += f"\n\n- {entry.predicado}"
		
		if write:
			self.__write_log(log_name, log_content)
			print(f"{log_name}.md was successfully written")
		else:
			print(log_content)

		
changelog_path = Path.cwd() / "Patch 1.09v3_Changes from 1.09v2.ini"
log = Changelog(changelog_path)

log.get_beta_log("Beta60",write=True)

	
# for a in log.instances:
	# self.beta
	# self.faction
	# self.predicado
	# self.objects
	# self.objects.type
	# self.objects.full
