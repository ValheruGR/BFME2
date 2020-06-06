

    ; Must come BEFORE the CreateObjectDie; when the CreateObjectDie processes the death,
    ; it will remove our ring upgrade which will remove the ONE_RING model condition which will
    ; confuse the FXList into thinking this was not the fortress with the one ring...
	Behavior = FXListDie ModuleTag_AnnounceWeLostTheRing
		DeathFX = AnnounceFortressDeathLostRingFX  ; FXList checks for ONE_RING model condition internally
	End
	

	; Spawn a dropped ring object if we have the ring hero upgrade
	Behavior = CreateObjectDie ModuleTag_DropTheRing
		CreationList	= OCL_TheOneRing
		
		; Needs both the player and object versions to create a ring when destroyed.
		UpgradeRequired	= Upgrade_RingHero Upgrade_FortressRingHero
	End

	Behavior = ModelConditionUpgrade ModuleTag_ForFX
		TriggeredBy			= Upgrade_RingHero Upgrade_FortressRingHero
		RequiresAllTriggers	= Yes
		AddConditionFlags	= ONE_RING
	End
	
	; Special draw module just for rendering the ring model over the fortress to indicate ownership.
	Draw = W3DScriptedModelDraw ModuleTag_RingFX
    	DefaultModelConditionState
      		Model = None
    	End
		
		; Higher version for tall towers.
		ModelConditionState = ONE_RING BUILD_VARIATION_TWO
			Model = EXOneRing_CR
		End

		ModelConditionState = ONE_RING
			Model = EXOneRing
		End
		
	End