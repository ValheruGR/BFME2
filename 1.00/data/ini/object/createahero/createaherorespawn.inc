

	Body = RespawnBody ModuleTag_RespawnBody
		CheerRadius 				= EMOTION_CHEER_RADIUS
		MaxHealth         			= FARAMIR_HEALTH			//BALANCE CreateAHero Health
		PermanentlyKilledByFilter	= NONE						//Who kills me permanently?
   		DodgePercent      			= HERO_DODGE_PERCENT
	End
	Behavior = RespawnUpdate ModuleTag_RespawnUpdate
		DeathAnim					= DYING						//Model condition to play when killed-to-respawn
		DeathFX						= FX_HeroDieToRespawn		//FXList to play when killed-to-respawn
		DeathAnimationTime			= 5000						//How long DeathAnim will take.
		InitialSpawnFX				= FX_HeroInitialSpawn
		RespawnAnim					= LEVELED					//Animation to play when respawning.
		RespawnFX					= FX_HeroRespawn			//FXList to play when respawning.
		RespawnAnimationTime		= 2000						//Time it takes for respawn to play.
		AutoRespawnAtObjectFilter	= NONE +CASTLE_KEEP			//Respawn at this location -- and at it's exit production point if possible.
		ButtonImage					= HIFaramir
		
		//RespawnEntries determine the ruleset for how a character can be revived. Some units may automatically respawn, others
		//may require a specific revive action performed on him. You can specify different values for each level... or use Level:Any
		RespawnRules =	AutoSpawn:No		Cost:1500		Time:60000		Health:100%		//DEFAULT VALUES
	
	End
