
	Behavior = SpecialAbilityUpdate ModuleTag_ChargeUpdate
		SpecialPowerTemplate		= SpecialAbilityDwarvenCharge
		StartAbilityRange			= 150.0 ;Negative distances will cause the unit to overshoot the destination.
		AbilityAbortRange			= 50.0 ;
		PreparationTime				= 0 ;;=;; don't change this.
		PackTime					= 3000; without this pack time, the charge would not complete
		TriggerSound				= DwarfBullRushMS		;GondorSoldierVoiceEnterStateAttackCharge
		TriggerAttributeModifier	= DwarvenChargeBonus
		AttributeModifierDuration	= 10000
		ChargeAttackSpeedBoost		= Yes
		IgnoreFacingCheck			= Yes
		UnpackingVariation 			= 500 ;;=;; 
	End
