	Behavior = InvisibilityUpdate ModuleTag_InnateCamouflage
		InvisibilityNugget
			InvisibilityType	= CAMOUFLAGE
			DetectionRange		= CAMOUFLAGE_RADIUS
			ForbiddenConditions	= AWAY_FROM_TREES FIRING_ANY ; ; MOVING
		End
		UpdatePeriod			= 2000
		StartsActive			= Yes
	End