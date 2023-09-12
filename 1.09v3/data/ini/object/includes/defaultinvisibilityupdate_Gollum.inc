	Behavior = InvisibilityUpdate ModuleTag_StealthForEscape
		InvisibilityNugget
			InvisibilityType			= CAMOUFLAGE
			ForbiddenConditions			= FIRING_ANY
			BecomeStealthedFX       	= FX_ElvenCloakOn
			ExitStealthFX           	= FX_ElvenCloakOff
			DetectionRange				= 120
			HintDetectableConditions    = IS_FIRING_WEAPON
		End
		StartsActive					= Yes
		UpdatePeriod					= 2000
	End