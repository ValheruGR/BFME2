#test.py


"""

  MinVolume = #MULTIPLY( 0.85 REPLACEME ) ;;.;;
	
"""



def reduce_and_calc_min(audio, cuanto):
	MULTIPLIER = (100 + cuanto) / 100
	# from 9 to 0.91
	
	print(f"Original: [{audio}]")
	song = audio * MULTIPLIER
	print(f"Max Volumen: [{song}]")
	print(f"Min Volumen: [{song * 0.85}]")
	
	
reduce_and_calc_min(75, +3 )