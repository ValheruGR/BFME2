	Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_ZephyrStrikeWeaponFireUpdate   
		SpecialPowerTemplate		= SpecialAbilityZephyrStrike
		WhichSpecialWeapon			= 1
		SkipContinue				= Yes

		UnpackTime					= 1700 
		PackTime					= 1		
		FreezeAfterTriggerDuration	= 2500 ; Hold AI for this long after we fire.
		
		AwardXPForTriggering		= 0		
		StartAbilityRange			= 80.0
		
		MustFinishAbility		= Yes
		SpecialWeapon				= ZephyrStrikeWeapon
	End