from pathlib import Path


changelog_path = Path.cwd() / "Patch 1.09v3_Changes from 1.09v2.ini"

class LogEntry:
	def __init__(self, line):
		colon_splited_line = line.split(":")
		self.length = len(colon_splited_line)
		
		self.beta = colon_splited_line[0].strip().replace("-", "")
		self.faction = colon_splited_line[1].strip()
		self.object_type = None
		self.change_type = None
		self.type3 = None
		self.type4 = None
		if self.length >3:
			self.object_type = colon_splited_line[2].strip()
		if self.length >4:
			self.change_type = colon_splited_line[3].strip()
		if self.length >5:
			self.type3 = colon_splited_line[4].strip()
		if self.length >6:
			self.type4 = colon_splited_line[5].strip()
			
		self.remains = colon_splited_line[-1].strip()
		# self.remains = ".".join(colon_splited_line[2:]).strip()
		
		
	
	def __str__(self):
		return f"Beta: {self.beta}\n\tFaction: {self.faction}\n\tType: {self.object_type} \n\tType2: {self.change_type} \n\tType3: {self.type3}\n\tType4: {self.type4}\n\tRemains: {self.remains}\n\tObjectLen: {self.length}"
		
lista = []

FACTIONS = {"MenOfTheWest", "Elves", "Dwarves", "Isengard", "Mordor", "Goblins", "Global", "Neutral", "Creeps"}
OBJECT_TYPES = {"Structures", "Structures.Walls", "Structures.Wells", "Heroes", "Upgrades", "Units", "SpellBook", "Maps", "Misc", "ForMappers", "Artillery", "Monsters"}

with open(changelog_path, 'r') as changelog:
	for line in changelog:
		line = line.strip()
		if line.startswith("-Beta"):
			entry = LogEntry(line)
			lista.append(entry)
			# print(line)
			
			
			
			
			
		
def verificar_lengths():
	for entry_length in range(7):
		contador = 0
		for logentry in lista:
			if logentry.length == entry_length:
				contador += 1
		print("entry_length", entry_length, contador)	
			
def check_mymum(entry_length):
	contador = 0
	for logentry in lista:
		# if logentry.faction == "Elves":
		# pass
			 
		if logentry.length == entry_length:
			contador += 1
			print(logentry)
		# if True:
		# if logentry.change_type not in CHANGE_TYPE and logentry.change_type is not None:
			# if True:
			# if logentry.change_type is not None and logentry.change_type not in CHANGE_TYPE:
				# print(logentry.change_type)
				# print("\t\t", logentry.remains)
				# pass
				# print(logentry.faction)
				# print(logentry.object_type)
			# if True:
				# print(logentry)
				# print("\n\n\n\n")
				# if logentry.length > 3:
	print("entry_length", entry_length, contador)	
	# print(len(list(filter(lambda x: x.length==7, lista))))		
	
verificar_lengths()
# check_mymum(5)
# entry_length 0 0
# entry_length 1 0
# entry_length 2 0
# entry_length 3 0
# entry_length 4 1160
# entry_length 5 110
# entry_length 6 0
# entry_length 6 0
			


	# for count, logentry in enumerate(lista, start=1):
		# if logentry.faction == "Elves":
			# print(count, logentry)





