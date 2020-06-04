	Behavior = SpecialPowerModule ModuleTag_FireExtinguisher
		SpecialPowerTemplate		= SpecialAbilityPorterExtinguishFire
		UpdateModuleStartsAttack	= Yes
		StartsPaused				= No
	End

	Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_FireExtinguisherUpdate
		SpecialPowerTemplate		= SpecialAbilityPorterExtinguishFire
		UnpackTime					= 2500
		StartAbilityRange			= PORTER_FIRE_EXTINGUISHER_ABILITY_START_RANGE
		SpecialWeapon				= PorterFireExtinguisher
		UnpackingVariation			= 1
		;TriggerSound				= MenBuilderFireExtinguish		;too much delay
	End

