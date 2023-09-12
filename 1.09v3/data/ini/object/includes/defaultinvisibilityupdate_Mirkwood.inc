	Behavior = InvisibilityUpdate ModuleTag_ElvenCamouflage
		InvisibilityNugget
			InvisibilityType	= CAMOUFLAGE
			DetectionRange		= CAMOUFLAGE_RADIUS
			ForbiddenConditions	= MOVING FIRING_ANY ; AWAY_FROM_TREES
			Options				= ALLOW_NEAR_TREES ;
		End
		UpdatePeriod			= 2000
		StartsActive			= Yes
		; This is the only way to get different move-to-trees voices on different units with this being
		; in an include file.
		UnitSpecificSoundNameToUseAsVoiceMoveToStealthyArea = VoiceMoveToTrees
		UnitSpecificSoundNameToUseAsVoiceEnterStateMoveToStealthyArea = VoiceEnterStateMoveToTrees
	End
