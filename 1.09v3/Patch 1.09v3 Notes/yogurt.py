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
		return f"Beta: {self.beta}\n\tFaction: {self.faction}\n\tObjectType: {self.objects} \n\tPredicado: {self.predicado}\n\tObjectLen: {self.__length}"
		
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
			
			
		filtered = [entry for entry in fromlist 
					if (not beta or entry.beta == beta) 
					and (not faction or entry.faction == faction) 
				]
		if not objectquery or objectquery == "*":
			return filtered
		else:
			# return [entry for entry in filtered if entry.objects[objectquery[0]] == objectquery[1]]
			return [entry for entry in filtered if len(entry.objects) > objectquery[0] and entry.objects[objectquery[0]] == objectquery[1]]


					
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
		entries = self.where(beta=beta, faction=faction)
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

		contador = 0

		log_content = f"{html_center(file_title, hn=1)}\n"
		titulos = sorted(list({entry.faction for entry in entries}))
		# print(len(titulos))
		print(contador,titulos)
		for subtitulo in titulos:
			log_content += f"\n{html_center(subtitulo, hn=2)}\n"

			entries_faction = self.where(entries, faction=subtitulo)
			titulos = self.get_object_names(entries_faction, 0)
			# print(len(entries_faction))
			print(contador,titulos,len(entries_faction))
			for subtitulo in titulos:
				# if True:  # 
				if subtitulo is not None:
					log_content += f"\n{html_center(subtitulo, hn=3)}\n"

				entries_object = self.where(entries_faction, objectquery=(0, subtitulo))
				titulos = self.get_object_names(entries_object, 1)
				# print(len(entries_object))
				print("for-01", contador,titulos,len(entries_object))
				for subtitulo in titulos:
					# if True:  # 
					if subtitulo is not None:
						log_content += f"\n{html_center(subtitulo, hn=4)}\n"

					entries_object_2 = self.where(entries_object, objectquery=(1, subtitulo))
					next_titulo = self.get_object_names(entries_object_2, 2)
					titulos = next_titulo if next_titulo else titulos
					# print(len(entries_object))
					print("for-02", contador,titulos,len(entries_object))
					for subtitulo in titulos:
						# if True:  # 
						if subtitulo is not None:
							log_content += f"\n{html_center(subtitulo, hn=5)}\n"

						entries_object_3 = self.where(entries_object_2, objectquery=(2, subtitulo))
						next_titulo = self.get_object_names(entries_object_3, 3)
						titulos = next_titulo if next_titulo else titulos
						# print(len(entries_object_3))
						print("for-03", contador,titulos,len(entries_object_3))
						for subtitulo in titulos:
							# if True:  # 
							if subtitulo is not None:
								log_content += f"\n{html_center(subtitulo, hn=6)}\n"

							entries_object_4 = self.where(entries_object_3, objectquery=(3, subtitulo))
							next_titulo = self.get_object_names(entries_object_4, 4)
							titulos = next_titulo if next_titulo else titulos
							# print(len(entries_object_4))
							print("for-04", contador,titulos,len(entries_object_4))
							for subtitulo in titulos:
								# if True:  
								if subtitulo is not None:
									log_content += f"\n{html_center(subtitulo, hn=7)}\n"

	
								entries_beta = self.where(entries_object_4, objectquery=(4, subtitulo))
								next_titulo = sorted(list({entry.beta for entry in entries_beta}))
								titulos = next_titulo if next_titulo else titulos
								# print(len(entries_beta))
								print("for-05", contador,titulos,len(entries_beta))
								for subtitulo in titulos:
									# if True:  # 
									if subtitulo is not None:
										log_content += f"\n{html_center(subtitulo, hn=8)}\n"

									entries_final = self.where(entries_beta, beta=subtitulo)
									# print(len(entries_final))
									print("for-06", contador,titulos,len(entries_final),"MIERDA")
									for entry in entries_final:
										# predicado = entry.predicado.capitalize()
										predicado = entry.predicado
										contador += 1
										log_content += f"\n-{contador}: {predicado}\n"
										# print(contador, predicado)

		print(contador)

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

# for a in log.where(objectquery=(0, "Units")):
# for a in log.where(objectquery=(1, "FireDrake")):
# for a in log.where(objectquery=(2, "AntiWallStuff")):
# for a in log.where(objectquery=(3, "FarmArmorStandarization")):
# for a in log.instances:
	# if len(a.objects) == 4:
		# print(a)
	# print(a)


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


# for num in range(9):
	# print(num, len(log.get_object_names(log.instances, num)))
