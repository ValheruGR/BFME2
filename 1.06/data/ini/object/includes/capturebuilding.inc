
	Behavior = SpecialPowerModule ModuleTag_CaptureBuilding
		SpecialPowerTemplate		= SpecialAbilityCaptureBuilding
		UpdateModuleStartsAttack	= Yes
		StartsPaused				= No
	End
	Behavior = SpecialAbilityUpdate ModuleTag_CaptureBuildingUpdate
		SpecialPowerTemplate		= SpecialAbilityCaptureBuilding
		StartAbilityRange			= 15.0
		UnpackTime					= 1
		PreparationTime				= 15000
		PackTime					= 1
		DoCaptureFX					= Yes
	End
