//********************************************************************************************
// CREATE A HEREO INHERENT ABILITIES
//********************************************************************************************


//	Behavior = AttributeModifierUpgrade ModuleTag_WizardMagicResistance
//		TriggeredBy		  =	Upgrade_CreateAHero_ClassIstariWizard
//		AttributeModifier =	FearlessForever
//	End


//********************************************************************************************
// CREATE A HEREO Special Powers
//********************************************************************************************

Behavior = AttributeModifierAuraUpdate ModuleTag_CreateAHeroLeaderShip
	StartsActive = No // If no, requires upgrade to turn on.
	BonusName	 = GenericHeroLeadership
	TriggeredBy	 = Upgrade_CreateAHeroLeadership
	RefreshDelay = 2000
	Range		 = 200
	AntiCategory = BUFF
	ObjectFilter = ANY +INFANTRY +CAVALRY -STRUCTURE -BASE_FOUNDATION -HERO	-DOZER -HORDE
End

Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroLeaderShip_Enabler
	SpecialPowerTemplate = SpecialAbilityFakeLeadership
	TriggeredBy			 = Upgrade_CreateAHeroLeadership
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroLeadershipUpdate   
	SpecialPowerTemplate	 = SpecialAbilityFakeLeadership
	UpdateModuleStartsAttack = No
	StartsPaused			 = Yes
End	


//--------------------------------------------------------------------------	
// TRAIN ALLIES SPECIAL POWER (All Classes)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_TrainAlliesEnabler_Level_1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroTrainAllies_Level_1
	TriggeredBy			 = Upgrade_CreateAHeroCreateAHeroTrainAllies_Level_1
End

Behavior = SpecialPowerModule ModuleTag_TrainAlliesSpecialPowerModule_Level_1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroTrainAllies_Level_1	
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	;InitiateSound			 = LegolasTrainVoice	 //this plays when he targets, not when he fires
	TriggerFX				   = FX_CaHTrainAllies
End

Behavior = LevelGrantSpecialPower ModuleTag_TrainAllies_Level_1
	SpecialPowerTemplate	   = SpecialAbilityCreateAHeroTrainAllies_Level_1
	StartAbilityRange		   = 100.0
	Experience				   = 40
	RadiusEffect			   = 100
	AcceptanceFilter		   = ANY +CAVALRY +INFANTRY +MordorMountainTroll +GoblinCaveTroll +MordorDrummerTroll +MordorAttackTroll +MordorMumakil -STRUCTURE -CASTLE_KEEP -BASE_FOUNDATION -HERO -MOVE_ONLY
	UnpackTime				   = 1000
	PackTime				   = 2000
	UnpackingVariation		   = 2
	FreezeAfterTriggerDuration = 500 //	Hold AI	for	this long after	we fire.	   
	LevelFX					   = FX_LevelUp
End

//-----------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_TrainAlliesEnabler_Level_2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroTrainAllies_Level_2
	TriggeredBy			 = Upgrade_CreateAHeroCreateAHeroTrainAllies_Level_2
End

Behavior = SpecialPowerModule ModuleTag_TrainAlliesSpecialPowerModule_Level_2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroTrainAllies_Level_2	
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	;InitiateSound			 = LegolasTrainVoice	 //this plays when he targets, not when he fires
	TriggerFX				   = FX_CaHTrainAllies
End

Behavior = LevelGrantSpecialPower ModuleTag_TrainAllies_Level_2
	SpecialPowerTemplate	   = SpecialAbilityCreateAHeroTrainAllies_Level_2
	StartAbilityRange		   = 100.0
	Experience				   = 80
	RadiusEffect			   = 125
	AcceptanceFilter		   = ANY +CAVALRY +INFANTRY +MordorMountainTroll +GoblinCaveTroll +MordorDrummerTroll +MordorAttackTroll +MordorMumakil -STRUCTURE -CASTLE_KEEP -BASE_FOUNDATION -HERO -MOVE_ONLY
	UnpackTime				   = 1000
	PackTime				   = 2000
	UnpackingVariation		   = 2
	FreezeAfterTriggerDuration = 500 //	Hold AI	for	this long after	we fire.	   
	LevelFX					   = FX_LevelUp
End

//-----------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_TrainAlliesEnabler_Level_3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroTrainAllies_Level_3
	TriggeredBy			 = Upgrade_CreateAHeroCreateAHeroTrainAllies_Level_3
End

Behavior = SpecialPowerModule ModuleTag_TrainAlliesSpecialPowerModule_Level_3
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroTrainAllies_Level_3	
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	;InitiateSound			 = LegolasTrainVoice	 //this plays when he targets, not when he fires
	TriggerFX				   = FX_CaHTrainAllies
End

Behavior = LevelGrantSpecialPower ModuleTag_TrainAllies_Level_3
	SpecialPowerTemplate	   = SpecialAbilityCreateAHeroTrainAllies_Level_3
	StartAbilityRange		   = 100.0
	Experience				   = 120
	RadiusEffect			   = 150
	AcceptanceFilter		   = ANY +CAVALRY +INFANTRY +MordorMountainTroll +GoblinCaveTroll +MordorDrummerTroll +MordorAttackTroll +MordorMumakil -STRUCTURE -CASTLE_KEEP -BASE_FOUNDATION -HERO -MOVE_ONLY
	UnpackTime				   = 1000
	PackTime				   = 2000
	UnpackingVariation		   = 2
	FreezeAfterTriggerDuration = 500 //	Hold AI	for	this long after	we fire.	   
	LevelFX					   = FX_LevelUp
End

//--------------------------------------------------------------------------	
// TOGGLE MOUNTED SPECIAL POWER (Men of the West)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_ToggleMountedEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroToggleMounted
	TriggeredBy			 = Upgrade_CreateAHeroToggleMounted
End

Behavior = SpecialPowerModule ModuleTag_ToggleMountedStarter 
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroToggleMounted
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End

Behavior = ToggleMountedSpecialAbilityUpdate ModuleTag_ToggleMounted
	SpecialPowerTemplate = SpecialAbilityCreateAHeroToggleMounted
	UnpackTime			 = 2000
	PreparationTime		 = 1  
	PersistentPrepTime	 = 250
	PackTime			 = 2000
	OpacityTarget		 = .3	   // How see-thru to be at peak of change.
	AwardXPForTriggering = 0
End

LocomotorSet // Used by this special power
	Locomotor = HeroHorseLocomotor
	Condition = SET_MOUNTED 
	Speed     = 90
End

//--------------------------------------------------------------------------	
// ===== STARLIGHT SPECIAL POWER
//--------------------------------------------------------------------------	

Behavior = UnpauseSpecialPowerUpgrade ModuleTag_GlorfindelStarlightEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroStarlight
	TriggeredBy			 = Upgrade_CreateAHeroStarlight
End
Behavior = OCLSpecialPower ModuleTag_GlorfindelStarlight
	StartsPaused		 = Yes
	SpecialPowerTemplate = SpecialAbilityCreateAHeroStarlight
	OCL					 = OCL_CaHStarlightObject ;;-;; OCL_GlorfindelStarlightObject
	CreateLocation		 = CREATE_AT_LOCATION
	StartsPaused		 = Yes
	//TriggerFX			 = GlorfindelStarlight
End
Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroGlorfindelStarlightPowerUpdate
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroStarlight
	UnpackTime             = 1  ;// (changing this will scale anim speed)
	PreparationTime        = 1 ;// time to complete hack once prepared (changing this will scale anim speed)
	PackTime               = 2000  ;// (changing this will scale anim speed)
	UnpackingVariation	   = 5
End

//--------------------------------------------------------------------------	
//	CRIPPLE STRIKE (RANGED) SPECIAL POWERS
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCrippleStrikeRangedEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level1
	TriggeredBy			 = Upgrade_CreateAHeroCrippleStrikeRanged_Level1
End 

Behavior = SpecialPowerModule ModuleTag_CreateAHeroCrippleStrikeRangedStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//		InitiateSound			 = LurtzVoiceAttackCripplingStrike
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroCrippleStrikeRangedUpdate_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level1
	SkipContinue		 = Yes

	UnpackTime			 = 1100	//Pull out arrow
	PreparationTime		 = 1	//Quick	shot
	PersistentPrepTime	 = 500	//looping the quick	shot
	PackTime			 = 500	//back to idle
	MustFinishAbility	 = Yes
	
	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 325.0
	
	SpecialWeapon		 = CreateAHeroCrippleStrikeRanged_Level1
	WhichSpecialWeapon	 = 4
//	RejectedConditions	 = WEAPON_TOGGLE
End

//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCrippleStrikeRangedEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level2
	TriggeredBy			 = Upgrade_CreateAHeroCrippleStrikeRanged_Level2
End 

Behavior = SpecialPowerModule ModuleTag_CreateAHeroCrippleStrikeRangedStarter_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//		InitiateSound			 = LurtzVoiceAttackCripplingStrike
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroCrippleStrikeRangedUpdate_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level2
	SkipContinue		 = Yes

	UnpackTime			 = 1100	//Pull out arrow
	PreparationTime		 = 1	//Quick	shot
	PersistentPrepTime	 = 500	//looping the quick	shot
	PackTime			 = 500	//back to idle
	MustFinishAbility	 = Yes
	
	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 325.0
	
	SpecialWeapon		 = CreateAHeroCrippleStrikeRanged_Level2
	WhichSpecialWeapon	 = 4
//	RejectedConditions	 = WEAPON_TOGGLE
End

//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCrippleStrikeRangedEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level3
	TriggeredBy			 = Upgrade_CreateAHeroCrippleStrikeRanged_Level3
End 

Behavior = SpecialPowerModule ModuleTag_CreateAHeroCrippleStrikeRangedStarter_Level3
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level3
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//		InitiateSound			 = LurtzVoiceAttackCripplingStrike
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroCrippleStrikeRangedUpdate_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level3
	SkipContinue		 = Yes

	UnpackTime			 = 1100	//Pull out arrow
	PreparationTime		 = 1	//Quick	shot
	PersistentPrepTime	 = 500	//looping the quick	shot
	PackTime			 = 500	//back to idle
	MustFinishAbility	 = Yes
	
	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 325.0
	
	SpecialWeapon		 = CreateAHeroCrippleStrikeRanged_Level3
	WhichSpecialWeapon	 = 4
//	RejectedConditions	 = WEAPON_TOGGLE
End

//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCrippleStrikeRangedEnabler_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level4
	TriggeredBy			 = Upgrade_CreateAHeroCrippleStrikeRanged_Level4
End 

Behavior = SpecialPowerModule ModuleTag_CreateAHeroCrippleStrikeRangedStarter_Level4
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level4
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//		InitiateSound			 = LurtzVoiceAttackCripplingStrike
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroCrippleStrikeRangedUpdate_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCrippleStrikeRanged_Level4
	SkipContinue		 = Yes

	UnpackTime			 = 1100	//Pull out arrow
	PreparationTime		 = 1	//Quick	shot
	PersistentPrepTime	 = 500	//looping the quick	shot
	PackTime			 = 500	//back to idle
	MustFinishAbility	 = Yes
	
	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 325.0
	
	SpecialWeapon		 = CreateAHeroCrippleStrikeRanged_Level4
	WhichSpecialWeapon	 = 4
//	RejectedConditions	 = WEAPON_TOGGLE
End



//--------------------------------------------------------------------------	
//	CRIPPLE STRIKE (MELEE) SPECIAL POWERS
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHotWCrippleStrikeMeleeEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHotWCrippleStrikeMelee_Level1
	TriggeredBy			 = Upgrade_CreateAHeroCrippleStrikeMelee_Level1
End 

Behavior = SpecialPowerModule ModuleTag_CreateAHeroHotWCrippleStrikeMeleeStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroHotWCrippleStrikeMelee_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//		InitiateSound			 = LurtzVoiceAttackCripplingStrike
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroHotWCrippleStrikeMeleeUpdate_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHotWCrippleStrikeMelee_Level1
	SkipContinue		 = Yes

	UnpackTime			 = 1100	//Pull out arrow
	PreparationTime		 = 1	//Quick	shot
	PersistentPrepTime	 = 500	//looping the quick	shot
	PackTime			 = 500	//back to idle
	MustFinishAbility	 = Yes
	
	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 30.0
	
	SpecialWeapon		 = CreateAHeroCrippleStrikeMelee_Level1
	WhichSpecialWeapon	 = 1
//	RejectedConditions	 = WEAPON_TOGGLE
End

//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHotWCrippleStrikeMeleeEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHotWCrippleStrikeMelee_Level2
	TriggeredBy			 = Upgrade_CreateAHeroCrippleStrikeMelee_Level2
End 

Behavior = SpecialPowerModule ModuleTag_CreateAHeroHotWCrippleStrikeMeleeStarter_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroHotWCrippleStrikeMelee_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//		InitiateSound			 = LurtzVoiceAttackCripplingStrike
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroHotWCrippleStrikeMeleeUpdate_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHotWCrippleStrikeMelee_Level2
	SkipContinue		 = Yes

	UnpackTime			 = 1100	//Pull out arrow
	PreparationTime		 = 1	//Quick	shot
	PersistentPrepTime	 = 500	//looping the quick	shot
	PackTime			 = 500	//back to idle
	MustFinishAbility	 = Yes
	
	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 30.0
	
	SpecialWeapon		 = CreateAHeroCrippleStrikeMelee_Level2
	WhichSpecialWeapon	 = 1
//	RejectedConditions	 = WEAPON_TOGGLE
End

//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSoSCrippleStrikeMeleeEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSoSCrippleStrikeMelee_Level1
	TriggeredBy			 = Upgrade_CreateAHeroCrippleStrikeMelee_Level1
End 

Behavior = SpecialPowerModule ModuleTag_CreateAHeroSoSCrippleStrikeMeleeStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroSoSCrippleStrikeMelee_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//		InitiateSound			 = LurtzVoiceAttackCripplingStrike
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroSoSCrippleStrikeMeleeUpdate_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSoSCrippleStrikeMelee_Level1
	SkipContinue		 = Yes

	UnpackTime			 = 1100	//Pull out arrow
	PreparationTime		 = 1	//Quick	shot
	PersistentPrepTime	 = 500	//looping the quick	shot
	PackTime			 = 500	//back to idle
	MustFinishAbility	 = Yes
	
	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 30.0
	
	SpecialWeapon		 = CreateAHeroCrippleStrikeMelee_Level1
	WhichSpecialWeapon	 = 1
//	RejectedConditions	 = WEAPON_TOGGLE
End

//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSoSCrippleStrikeMeleeEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSoSCrippleStrikeMelee_Level2
	TriggeredBy			 = Upgrade_CreateAHeroCrippleStrikeMelee_Level2
End 

Behavior = SpecialPowerModule ModuleTag_CreateAHeroSoSCrippleStrikeMeleeStarter_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroSoSCrippleStrikeMelee_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//		InitiateSound			 = LurtzVoiceAttackCripplingStrike
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroSoSCrippleStrikeMeleeUpdate_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSoSCrippleStrikeMelee_Level2
	SkipContinue		 = Yes

	UnpackTime			 = 1100	//Pull out arrow
	PreparationTime		 = 1	//Quick	shot
	PersistentPrepTime	 = 500	//looping the quick	shot
	PackTime			 = 500	//back to idle
	MustFinishAbility	 = Yes
	
	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 30.0
	
	SpecialWeapon		 = CreateAHeroCrippleStrikeMelee_Level2
	WhichSpecialWeapon	 = 1
//	RejectedConditions	 = WEAPON_TOGGLE
End


//--------------------------------------------------------------------------	
//	INVULNERABILITY SPECIAL POWERS
//--------------------------------------------------------------------------	

//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroInvulnerabilityEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroInvulnerability_Level1
	TriggeredBy			 = Upgrade_CreateAHeroInvulnerability_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroInvulnerabilityStarter_Level1
	SpecialPowerTemplate		 = SpecialAbilityCreateAHeroInvulnerability_Level1
	UpdateModuleStartsAttack	 = No
	StartsPaused				 = Yes
	AttributeModifier			 = CreateAHeroInvulnerabilityBonus_Level1
	AttributeModifierRange		 = 1
	AttributeModifierAffectsSelf = Yes
	AttributeModifierAffects	 = ANY +CAVALRY	+INFANTRY
	AttributeModifierFX			 = FX_CreateAHeroInvulnerability_Start
End

//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroInvulnerabilityEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroInvulnerability_Level2
	TriggeredBy			 = Upgrade_CreateAHeroInvulnerability_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroInvulnerabilityStarter_Level2
	SpecialPowerTemplate		 = SpecialAbilityCreateAHeroInvulnerability_Level2
	UpdateModuleStartsAttack	 = No
	StartsPaused				 = Yes
	AttributeModifier			 = CreateAHeroInvulnerabilityBonus_Level2
	AttributeModifierRange		 = 1
	AttributeModifierAffectsSelf = Yes
	AttributeModifierAffects	 = ANY +CAVALRY	+INFANTRY
	AttributeModifierFX			 = FX_CreateAHeroInvulnerability_Start
End

//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroInvulnerabilityEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroInvulnerability_Level3
	TriggeredBy			 = Upgrade_CreateAHeroInvulnerability_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroInvulnerabilityStarter_Level3
	SpecialPowerTemplate		 = SpecialAbilityCreateAHeroInvulnerability_Level3
	UpdateModuleStartsAttack	 = No
	StartsPaused				 = Yes
	AttributeModifier			 = CreateAHeroInvulnerabilityBonus_Level3
	AttributeModifierRange		 = 1
	AttributeModifierAffectsSelf = Yes
	AttributeModifierAffects	 = ANY +CAVALRY	+INFANTRY
	AttributeModifierFX			 = FX_CreateAHeroInvulnerability_Start
End


//--------------------------------------------------------------------------	
// Special Power BLADE MASTER
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBladeMasterEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBladeMaster
	TriggeredBy			 = Upgrade_CreateAHeroBladeMaster
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroBladeMasterStarter					// SpecialAbility is	a SpecialPower,	SpecialPower is	anyting	special
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBladeMaster
	StartsPaused		 = Yes
	UpdateModuleStartsAttack		= Yes ;;-;;
End
Behavior = ActivateModuleSpecialPower ModuleTag_UnpackHeroMode  ;;-;;
	SpecialPowerTemplate			= SpecialAbilityCreateAHeroBladeMaster
	TriggerSpecialPower				= ModuleTag_TriggerMode
	UnpackTime              		= 800
	PackTime                		= 500
	UnpackingVariation				= 2 ;; sets PACKING_TYPE_2
	TriggerSound					= AragornBladeMaster
 	End
Behavior = SpecialPowerModule ModuleTag_TriggerMode ;;-;;
	SpecialPowerTemplate			= SpecialAbilityActivateeDummyThree
	UpdateModuleStartsAttack		= No
	StartsPaused					= No
End
Behavior = WeaponModeSpecialPowerUpdate ModuleTag_AragornBladeMasterUpdate ;;-;;
	SpecialPowerTemplate			= SpecialAbilityActivateeDummyThree
	Duration						= 30000
	AttributeModifier				= CreateAHeroBladeMaster
	WeaponSetFlags					= WEAPONSET_HERO_MODE
	StartsPaused					= No
End
;;.;;	Behavior = HeroModeSpecialAbilityUpdate ModuleTag_CreateAHeroBladeMasterUpdate	  //	So the difference in SpecialAbility	is that	it takes timing	from this Update, instead of simply	firing.
;;.;;		SpecialPowerTemplate  =	SpecialAbilityCreateAHeroBladeMaster
;;.;;		HeroAttributeModifier =	CreateAHeroBladeMaster
;;.;;		HeroEffectDuration	  =	30000 //	this should	sync with the auto ability delay re-fire time in commandButtons.ini
;;.;;		UnpackTime			  =	1 //	insant unpack
;;.;;		TriggerSound		  =	AragornBladeMaster
;;.;;	End

//--------------------------------------------------------------------------	
// Special Power ATHELAS
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAthelasEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAthelas
	TriggeredBy			 = Upgrade_CreateAHeroAthelas
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAthelas
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroAthelas
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//		SetModelCondition		 = ModelConditionState:USER_2
	SetModelConditionTime	 = 2.1
End

Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroAthelasUpdate               
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAthelas
	StartAbilityRange	 = 1.6
	UnpackTime			 = 800 ;;.;; 1	 // Nothing to touching it
	;;.;; PreparationTime		 = 3	 // touching	it to grabbing it
	PackTime			 = 2096	 // whacking	it to holding it nice
	AwardXPForTriggering = 0
End



//--------------------------------------------------------------------------	
// Special Power ELENDIL
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_EnableElendil
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroElendil
	TriggeredBy					= Upgrade_CreateAHeroElendil
End

Behavior = SpecialPowerModule ModuleTag_ElendilStarter						
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroElendil
	UpdateModuleStartsAttack = Yes
	AntiCategory			 = LEADERSHIP
	AttributeModifier		 = CreateAHeroElendilAntiCategory	// Used	for	the	anti category duration only.
	AttributeModifierRange	 = 200.0
	StartsPaused			 = Yes								// obtained	on level 2
	;;.;;	SetModelCondition		 = ModelConditionState:USER_3
	;;.;;	SetModelConditionTime	 = 10.0	// 10 secs of glow anim for sword
End

Behavior = ModelConditionSpecialAbilityUpdate ModuleTag_ElendilUpdate   
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroElendil
	UnpackTime              = 500							// Drawing the horn
	PreparationTime         = 1								// nothing
	PersistentPrepTime      = 500							// Blowing
	PackTime                = 2000							// Putting horn away
	AwardXPForTriggering    = 0
	
	GenerateTerror			= Yes
	EmotionPulseRadius		= 180
	ObjectFilter			= ELENDIL_OBJECT_FILTER
        CustomAnimAndDuration				= AnimState:USER_3 AnimTime:10000 ;;.;;
End


//--------------------------------------------------------------------------	
// Special Power KINGS FAVOUR
//--------------------------------------------------------------------------	
// Behavior = UnpauseSpecialPowerUpgrade ModuleTag_KingsFavorEnabler
// 	SpecialPowerTemplate = SpecialAbilityCreateAHeroKingsFavor
// 	TriggeredBy			 = Upgrade_CreateAHeroKingsFavor
// End
// 
// Behavior = SpecialPowerModule ModuleTag_KingsFavorSpecialPowerModule
//     SpecialPowerTemplate		= SpecialAbilityCreateAHeroKingsFavor 
//     StartsPaused				= Yes
// 	UpdateModuleStartsAttack	= Yes
//     InitiateSound				= TheodenVoiceFavor
// End
// 
// Behavior = LevelGrantSpecialPower ModuleTag_KingsFavor
// 	SpecialPowerTemplate		= SpecialAbilityCreateAHeroKingsFavor
// 	UnpackingVariation			= 2
// 	StartAbilityRange			= 200.0
//     LevelFX						= FX_LevelUp
// 
// 	Experience					= 50
// 	RadiusEffect				= 150
// 	AcceptanceFilter			= ANY +CAVALRY +INFANTRY -STRUCTURE -CASTLE_KEEP -BASE_FOUNDATION -HERO -MOVE_ONLY
// 
// 	UnpackTime					= 3000
// 	PreparationTime				= 0
// 	FreezeAfterTriggerDuration	= 2000 // Hold AI for this long after we fire.		
// End	

//--------------------------------------------------------------------------	
// HEROIC CHARGE Special Power
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHeroicChargeEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHeroicCharge
	TriggeredBy			 = Upgrade_CreateAHeroHeroicCharge
End
;;.;;	Behavior = SpecialPowerModule ModuleTag_CreateAHeroHeroicChargeUpdate   
;;.;;		SpecialPowerTemplate		 = SpecialAbilityCreateAHeroHeroicCharge
;;.;;		UpdateModuleStartsAttack	 = Yes
;;.;;		StartsPaused = Yes
;;.;;		AttributeModifier			 = CreateAHeroHeroicCharge
;;.;;		AttributeModifierRange		 = 200
;;.;;		AttributeModifierAffectsSelf = Yes
;;.;;		AttributeModifierAffects	 = ANY +CAVALRY	+INFANTRY ;;.;; ANY +CAVALRY	
;;.;;		AttributeModifierFX			 = FX_TheodenGloriousChargeFX
;;.;;	End
;;.;;	
;;.;;	Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroHeroicAnimation
;;.;;		UnpackTime              = 1000
;;.;;		UnpackingVariation		= 1
;;.;;		
;;.;;		SpecialPowerTemplate	= SpecialAbilityCreateAHeroHeroicCharge
;;.;;	 	PreparationTime         = 0  
;;.;;	 	PersistentPrepTime      = 0
;;.;;	 	PackTime                = 1330
;;.;;	End
  	Behavior = SpecialPowerModule ModuleTag_CreateAHeroHeroicChargeUpdate
		SpecialPowerTemplate    		= SpecialAbilityCreateAHeroHeroicCharge
		StartsPaused					= Yes
		UpdateModuleStartsAttack		= Yes ;;-;;
 	End
 	Behavior = ActivateModuleSpecialPower ModuleTag_CreateAHeroHeroicAnimation
		SpecialPowerTemplate			= SpecialAbilityCreateAHeroHeroicCharge
  		TriggerSpecialPower				= ModuleTag_TriggerMode4
   		StartAbilityRange       		= 300
 		UnpackTime              		= 1000 ;;-;;
 		PackTime                		= 965 ;;-;; 1330
   		UnpackingVariation				= 1 ;; sets PACKING_TYPE_1
	End
 	Behavior = SpecialPowerModule ModuleTag_TriggerMode4   
		SpecialPowerTemplate      		= SpecialAbilityActivateeDummyFour
		AttributeModifier				= CreateAHeroHeroicCharge
		AttributeModifierRange			= 200
		AttributeModifierAffectsSelf	= Yes
		AttributeModifierAffects		= ANY +CAVALRY	+INFANTRY ;;.;; ANY +CAVALRY	
		AttributeModifierFX				= FX_TheodenGloriousChargeFX
	End

//--------------------------------------------------------------------------	
// Special Power WORD OF POWER
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_WordEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroWordOfPower
	TriggeredBy			 = Upgrade_GandalfWordOfPower
End

Behavior = SpecialPowerModule ModuleTag_WordStarter       
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroWordOfPower
	UpdateModuleStartsAttack  = Yes
	StartsPaused		  	  = Yes
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_WordWeaponFireUpdate   
	SpecialPowerTemplate	   = SpecialAbilityCreateAHeroWordOfPower
	WhichSpecialWeapon		   = 1
	SkipContinue			   = Yes
	UnpackTime				   = 1700 
	PackTime				   = 1	   
	FreezeAfterTriggerDuration = 2500 // Hold AI for this long after we	fire.
	AwardXPForTriggering	   = 0	   
	StartAbilityRange		   = 180.0
	SpecialWeapon			   = CreateAHeroWordOfPower
	PlayWeaponPreFireFX		   = Yes
End
//--------------------------------------------------------------------------	
//	TELEPORT TO CASTER SPECIAL POWER //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_TeleportToCasterEnabler
	SpecialPowerTemplate = SpecialAbilityATeleportToCaster//SpecialAbilityTeleportToCaster		HACK!  See special power
	TriggeredBy = Upgrade_CreateAHeroTeleportToCaster
End

Behavior = SpecialPowerModule ModuleTag_TeleportToCasterModule
	SpecialPowerTemplate	 = SpecialAbilityATeleportToCaster//SpecialAbilityTeleportToCaster	HACK! See special power
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	InitiateSound = CaH_TeleportPart1
End

Behavior = TeleportToCasterSpecialPower ModuleTag_TeleportToCaster
	SpecialPowerTemplate	   = SpecialAbilityATeleportToCaster//SpecialAbilityTeleportToCaster	HACK! See special power
	UnpackingVariation		   = 3
	StartAbilityRange		   = 1000000.0 // i.e. pretty large
	ApproachRequiresLOS		   = No		   // can do this without seeing the target	units.
	Radius					   = 100	   // the radius that will capture units
	TargetFX				   = FX_CAHBlink
	TriggerFX				   = FX_CAHTeleport
	MinDestinationRadius	   = 50		   // the inner	radius of the ring where units will	teleport to
	MaxDestinationRadius	   = 100	   // the outer	radius of the ring where units will	teleport to
	
	UnpackTime				   = 2000
	PreparationTime			   = 1	 
	FreezeAfterTriggerDuration = 2500	   // Hold AI for this long	after we fire.		 
End
//--------------------------------------------------------------------------	
//	TELEPORT ALLIES ANYWHERE SPECIAL POWER //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_StoreObjectsForLevel2TeleportEnabler
	SpecialPowerTemplate = SpecialAbilityStoreObjectsForLevel2Teleport
	TriggeredBy			 = Upgrade_CreateAHeroStoreObjectsForLevel2Teleport
End
Behavior = SpecialPowerModule ModuleTag_StoreObjectsForLevel2Teleport
	SpecialPowerTemplate	 = SpecialAbilityStoreObjectsForLevel2Teleport 
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
End
Behavior = StoreObjectsSpecialPower ModuleTag_StoreObjectsForLevel2TeleportUpdate
	SpecialPowerTemplate	   = SpecialAbilityStoreObjectsForLevel2Teleport
	StartAbilityRange		   = 1000000.0 // i.e. pretty large
	ApproachRequiresLOS		   = No		   // can do this without seeing the target	units.
	Radius					   = 100	   // the radius that will capture units
	UnpackTime				   = 0
	PreparationTime			   = 1	 
	FreezeAfterTriggerDuration = 0		   // Zero!
	ChainedButton			   = "Command_TeleportStoredList"
	//TriggerFX				   = FX_CAHTeleport
End

//--------------------------------------------------------------------------	
//	TELEPORT ENEMIES AND ALLIES ANYWHERE SPECIAL POWER //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_StoreObjectsForLevel3TeleportEnabler
	SpecialPowerTemplate = SpecialAbilityStoreObjectsForLevel3Teleport
	TriggeredBy			 = Upgrade_CreateAHeroStoreObjectsForLevel3Teleport
End
Behavior = SpecialPowerModule ModuleTag_StoreObjectsForLevel3Teleport
	SpecialPowerTemplate	 = SpecialAbilityStoreObjectsForLevel3Teleport 
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
End
Behavior = StoreObjectsSpecialPower ModuleTag_StoreObjectsForLevel3TeleportUpdate
	SpecialPowerTemplate	   = SpecialAbilityStoreObjectsForLevel3Teleport
	StartAbilityRange		   = 1000000.0 // i.e. pretty large
	ApproachRequiresLOS		   = No		   // can do this without seeing the target	units.
	Radius					   = 100	   // the radius that will capture units
	UnpackTime				   = 0
	PreparationTime			   = 1	 
	FreezeAfterTriggerDuration = 0		   // Zero!
	ChainedButton			   = "Command_TeleportStoredList_2"
	//TriggerFX				   = FX_CAHTeleport
End

//--------------------------------------------------------------------------	
//	TELEPORT STORED OBJECTS POWER (CHAINED TO LEVEL 2 TELEPORT POWER)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_TeleportStoredObjectsEnabler
	SpecialPowerTemplate = SpecialAbilityTeleportStoredObjects
	TriggeredBy			 = Upgrade_CreateAHeroStoreObjectsForLevel2Teleport
End
Behavior = SpecialPowerModule ModuleTag_TeleportStoredObjects
	SpecialPowerTemplate	 = SpecialAbilityTeleportStoredObjects 
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
End
Behavior = TeleportToCasterSpecialPower ModuleTag_TeleportStoredObjectsUpdate
	SpecialPowerTemplate	   = SpecialAbilityTeleportStoredObjects
	UnpackingVariation		   = 1
	StartAbilityRange		   = 1000000.0 // i.e. pretty large
	Radius					   = 100	   // the radius	that will capture units
	ApproachRequiresLOS		   = No		   // can do	this without seeing	the	target units.
	TargetFX				   = FX_CAHBlink
	TriggerFX				   = FX_CAHTeleport
	MinDestinationRadius	   = 10		   // the inner radius of the ring where	units will teleport	to
	MaxDestinationRadius	   = 100	   // the outer radius of the ring where	units will teleport	to
	UnpackTime				   = 2000
	PreparationTime			   = 1	 
	FreezeAfterTriggerDuration = 2500	   // Hold AI for this long after we	fire.		
End

//--------------------------------------------------------------------------	
//	TELEPORT STORED OBJECTS POWER (CHAINED TO LEVEL 3 TELEPORT POWER)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_TeleportStoredObjectsEnabler_2
	SpecialPowerTemplate = SpecialAbilityTeleportStoredObjects_2
	TriggeredBy			 = Upgrade_CreateAHeroStoreObjectsForLevel3Teleport
End
Behavior = SpecialPowerModule ModuleTag_TeleportStoredObjects_2
	SpecialPowerTemplate	 = SpecialAbilityTeleportStoredObjects_2
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
End
Behavior = TeleportToCasterSpecialPower ModuleTag_TeleportStoredObjectsUpdate_2
	SpecialPowerTemplate	   = SpecialAbilityTeleportStoredObjects_2
	UnpackingVariation		   = 1
	StartAbilityRange		   = 1000000.0 // i.e. pretty large
	Radius					   = 100	   // the radius	that will capture units
	ApproachRequiresLOS		   = No		   // can do	this without seeing	the	target units.
	TargetFX				   = FX_CAHBlink
	TriggerFX				   = FX_CAHTeleport
	MinDestinationRadius	   = 10		   // the inner radius of the ring where	units will teleport	to
	MaxDestinationRadius	   = 100	   // the outer radius of the ring where	units will teleport	to
	UnpackTime				   = 2000
	PreparationTime			   = 1	 
	FreezeAfterTriggerDuration = 2500	   // Hold AI for this long after we	fire.		
End




//--------------------------------------------------------------------------	
//	FIRE BALL SPECIAL POWER //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_FireballEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityHeroFireball_Level1
	TriggeredBy			 = Upgrade_CreateAHeroFireBall
End

Behavior = SpecialPowerModule ModuleTag_FireballStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityHeroFireball_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	;InitiateSound			 = SarumanVoiceAttackFireball
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_FireballUpdate_Level1
	SpecialPowerTemplate = SpecialAbilityHeroFireball_Level1
	WhichSpecialWeapon	 = 1 // This sets SPECIAL_WEAPON_ONE
	SkipContinue		 = Yes

	UnpackTime			 = 800
	PreparationTime		 = 1   
	PersistentPrepTime	 = 1000	
	PackTime			 = 100
	
	AwardXPForTriggering = 0
	
	StartAbilityRange	 = CREATE_A_HERO_FIREBALL_RANGE
	MustFinishAbility	 = Yes
	SpecialWeapon		 = WizardFireballL1
End

//--------------------------------------------------------------------------	
//	FIRE BALL SPECIAL POWER LEVEL 2//
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_FireballEnabler_L2
	SpecialPowerTemplate = SpecialAbilityHeroFireball_Level2
	TriggeredBy			 = Upgrade_CreateAHeroFireBall
End

Behavior = SpecialPowerModule ModuleTag_FireballStarter_L2
	SpecialPowerTemplate	 = SpecialAbilityHeroFireball_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	;InitiateSound			 = SarumanVoiceAttackFireball
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_FireballUpdate_L2
	SpecialPowerTemplate = SpecialAbilityHeroFireball_Level2
	WhichSpecialWeapon	 = 1
	SkipContinue		 = Yes

	UnpackTime			 = 800
	PreparationTime		 = 1   
	PersistentPrepTime	 = 1000	
	PackTime			 = 100
	
	AwardXPForTriggering = 0
	
	StartAbilityRange	 = CREATE_A_HERO_FIREBALL_RANGE
	MustFinishAbility	 = Yes
	SpecialWeapon		 = WizardFireballL2
End

//--------------------------------------------------------------------------	
//	FIRE BALL SPECIAL POWER LEVEL 3//
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_FireballEnabler_L3
	SpecialPowerTemplate = SpecialAbilityHeroFireball_Level3
	TriggeredBy			 = Upgrade_CreateAHeroFireBall_Level3
End

Behavior = SpecialPowerModule ModuleTag_FireballStarter_L3
	SpecialPowerTemplate	 = SpecialAbilityHeroFireball_Level3
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	;InitiateSound			 = SarumanVoiceAttackFireball
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_FireballUpdate_L3
	SpecialPowerTemplate = SpecialAbilityHeroFireball_Level3
	WhichSpecialWeapon	 = 1
	SkipContinue		 = Yes

	UnpackTime			 = 800
	PreparationTime		 = 1   
	PersistentPrepTime	 = 1000	
	PackTime			 = 100
	
	AwardXPForTriggering = 0
	
	StartAbilityRange	 = CREATE_A_HERO_FIREBALL_RANGE
	MustFinishAbility	 = Yes
	SpecialWeapon		 = WizardFireballL3
End


//--------------------------------------------------------------------------	
// CONVERT SPECIAL POWER LEVEL 1//                        
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_ConvertEnemyEnabler_L1
	SpecialPowerTemplate		= SpecialAbilityConvertEnemy_L1
	TriggeredBy					= Upgrade_CreateAHeroConvert_Level1
End

Behavior = SpecialPowerModule ModuleTag_ConvertEnemySpecialPowerModule_L1
	SpecialPowerTemplate	 = SpecialAbilityConvertEnemy_L1 
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
//		InitiateSound			= SarumanVoiceDominate
End

Behavior = DominateEnemySpecialPower ModuleTag_ConvertEnemySpecialPower_L1
    SpecialPowerTemplate		= SpecialAbilityConvertEnemy_L1 
	UnpackingVariation			= 2
	StartAbilityRange			= 200.0
	
	DominateRadius				= 60 //100 //150
	DominatedFX					= FX_SarumanDominateTargets
	TriggerFX					= FX_CreateaHeroConvert
	PermanentlyConvert			= Yes
	UnpackTime					= 2000
	PreparationTime				= 1   
	FreezeAfterTriggerDuration	= 2500 // Hold AI for this long after we fire.		
	AttributeModifierAffects	= CREATE_A_HERO_DOMINATE_OBJECT_FILTER
End

//--------------------------------------------------------------------------	
// CONVERT SPECIAL POWER LEVEL 2//                        
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_ConvertEnemyEnabler_L2
	SpecialPowerTemplate = SpecialAbilityConvertEnemy_L2
	TriggeredBy			 = Upgrade_CreateAHeroConvert_Level2
End

Behavior = SpecialPowerModule ModuleTag_ConvertEnemySpecialPowerModule_L2
	SpecialPowerTemplate	 = SpecialAbilityConvertEnemy_L2 
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
//		InitiateSound			 = SarumanVoiceDominate
End

Behavior = DominateEnemySpecialPower ModuleTag_ConvertEnemySpecialPower_L2
    SpecialPowerTemplate		= SpecialAbilityConvertEnemy_L2 
	UnpackingVariation			= 2
	StartAbilityRange			= 200.0
	
	DominateRadius				= 100 //100 //150
	DominatedFX					= FX_SarumanDominateTargets
	TriggerFX					= FX_CreateaHeroConvert
	PermanentlyConvert			= Yes
	UnpackTime					= 2000
	PreparationTime				= 1   
	FreezeAfterTriggerDuration	= 2500 // Hold AI for this long after we fire.		
	AttributeModifierAffects	= CREATE_A_HERO_DOMINATE_OBJECT_FILTER
End

//--------------------------------------------------------------------------	
// CURSE ENEMY SPECIAL POWER Level 1
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CurseEnabler_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroCurseEnemy_Level1
	TriggeredBy					= Upgrade_CreateAHeroCurse_Level1
End

Behavior = SpecialPowerModule ModuleTag_CurseEnemySpecialPowerModule_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCurseEnemy_Level1
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	//InitiateSound			 = CaH_CurseEnemy
End

Behavior = CurseSpecialPower ModuleTag_CurseEnemySpecialPower_Level1
    SpecialPowerTemplate		= SpecialAbilityCreateAHeroCurseEnemy_Level1

    CursePercentage				= 33.33% //Curse the target's power by this amount (will not exceed maximum charge time)

	UnpackingVariation			= 1
	StartAbilityRange			= 200.0
	
	CursedFX					= FX_SarumanDominateTargets
	TriggerFX					= FX_CreateaHeroCurse
	
	UnpackTime					= 2000
	PreparationTime				= 1   
	FreezeAfterTriggerDuration	= 2500 // Hold AI for this long after we fire.		
End

//--------------------------------------------------------------------------	
// CURSE ENEMY SPECIAL POWER Level 2
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CurseEnabler_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroCurseEnemy_Level2
	TriggeredBy					= Upgrade_CreateAHeroCurse_Level2
End

Behavior = SpecialPowerModule ModuleTag_CurseEnemySpecialPowerModule_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCurseEnemy_Level2
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	//InitiateSound			 = CaH_CurseEnemy
End

Behavior = CurseSpecialPower ModuleTag_CurseEnemySpecialPower_Level2
    SpecialPowerTemplate		= SpecialAbilityCreateAHeroCurseEnemy_Level2

    CursePercentage				= 66.67% //Curse the target's power by this amount (will not exceed maximum charge time)

	UnpackingVariation			= 1
	StartAbilityRange			= 200.0
	
	CursedFX					= FX_SarumanDominateTargets
	TriggerFX					= FX_CreateaHeroCurse
	
	UnpackTime					= 2000
	PreparationTime				= 1   
	FreezeAfterTriggerDuration	= 2500 // Hold AI for this long after we fire.		
End

//--------------------------------------------------------------------------	
// CURSE ENEMY SPECIAL POWER Level 3
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CurseEnabler_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroCurseEnemy_Level3
	TriggeredBy					= Upgrade_CreateAHeroCurse_Level3
End

Behavior = SpecialPowerModule ModuleTag_CurseEnemySpecialPowerModule_Level3
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCurseEnemy_Level3
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	//InitiateSound			 = CaH_CurseEnemy
End

Behavior = CurseSpecialPower ModuleTag_CurseEnemySpecialPower_Level3
    SpecialPowerTemplate		= SpecialAbilityCreateAHeroCurseEnemy_Level3
    
    CursePercentage				= 100.0% //Curse the target's power by this amount (will not exceed maximum charge time)
    
	UnpackingVariation			= 1
	StartAbilityRange			= 200.0
	
	CursedFX					= FX_SarumanDominateTargets
	TriggerFX					= FX_CreateaHeroCurse
	
	UnpackTime					= 2000
	PreparationTime				= 1   
	FreezeAfterTriggerDuration	= 2500 // Hold AI for this long after we fire.		
End

//--------------------------------------------------------------------------	
// HERO BLINK (Teleport) SPELL //
//--------------------------------------------------------------------------	

Behavior = UnpauseSpecialPowerUpgrade ModuleTag_TeleportEnabler
	SpecialPowerTemplate = SpecialAbilityHeroBlink
	TriggeredBy			 = Upgrade_CreateAHeroBlink
End

Behavior = SpecialPowerModule ModuleTag_TeleportStarter                      
	SpecialPowerTemplate	 = SpecialAbilityHeroBlink
	UpdateModuleStartsAttack = Yes
	TriggerFX				 = FX_Blink
	StartsPaused			 = Yes
End
Behavior = TeleportSpecialAbilityUpdate ModuleTag_TeleportUpdate   
	SpecialPowerTemplate  =	SpecialAbilityHeroBlink

	UnpackingVariation	  =	1
	UnpackTime			  =	1800
	PackTime			  =	1800

	ApproachRequiresLOS	  =	No
	BusyForDuration		  =	1800 // don't accept	any	AI for this	long...	ai commands	will be	queued (should be at least PackTime)
	
	DestinationWeaponName =	CreateaHeroBlinkDestination	// Fires	at point of	teleport to	push people	away and down.
End

//--------------------------------------------------------------------------	
// NEW FORCE PUSH SPELL Level 1 //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_ForcePushEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityForcePush_Level1
	TriggeredBy			 = Upgrade_CreateAHeroForcePush_Level1
End

Behavior = SpecialPowerModule ModuleTag_ForcePushPower_Level1
	SpecialPowerTemplate	 = SpecialAbilityForcePush_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//	InitiateSound			 = GandalfVoiceAttackWizardBlast //this plays when he targets, not when he fires
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_ForcePushUpdate_Level1
	SpecialPowerTemplate = SpecialAbilityForcePush_Level1
	WhichSpecialWeapon	 = 2
	SkipContinue		 = Yes

	UnpackTime			 = 900
	PreparationTime		 = 1   
	PersistentPrepTime	 = 1500	
	PackTime			 = 1100	

	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 100.0
	MustFinishAbility	 = Yes
	SpecialWeapon		 = ForcePush_Level1
End

//--------------------------------------------------------------------------	
// NEW FORCE PUSH SPELL Level 2 //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_ForcePushEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityForcePush_Level2
	TriggeredBy			 = Upgrade_CreateAHeroForcePush_Level2
End

Behavior = SpecialPowerModule ModuleTag_ForcePushPower_Level2
	SpecialPowerTemplate	 = SpecialAbilityForcePush_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//	InitiateSound			 = GandalfVoiceAttackWizardBlast //this plays when he targets, not when he fires
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_ForcePushUpdate_Level2
	SpecialPowerTemplate = SpecialAbilityForcePush_Level2
	WhichSpecialWeapon	 = 2
	SkipContinue		 = Yes

	UnpackTime			 = 900
	PreparationTime		 = 1   
	PersistentPrepTime	 = 1500	
	PackTime			 = 1100	

	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 180.0
	MustFinishAbility	 = Yes
	SpecialWeapon		 = ForcePush_Level2
End

//--------------------------------------------------------------------------	
// NEW FORCE PUSH SPELL Level 3 //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_ForcePushEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityForcePush_Level3
	TriggeredBy			 = Upgrade_CreateAHeroForcePush_Level3
End

Behavior = SpecialPowerModule ModuleTag_ForcePushPower_Level3
	SpecialPowerTemplate	 = SpecialAbilityForcePush_Level3
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
//	InitiateSound			 = GandalfVoiceAttackWizardBlast //this plays when he targets, not when he fires
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_ForcePushUpdate_Level3
	SpecialPowerTemplate = SpecialAbilityForcePush_Level3
	WhichSpecialWeapon	 = 2
	SkipContinue		 = Yes

	UnpackTime			 = 900
	PreparationTime		 = 1   
	PersistentPrepTime	 = 1500	
	PackTime			 = 1100	

	AwardXPForTriggering = 0	 
	StartAbilityRange	 = 180.0
	MustFinishAbility	 = Yes
	SpecialWeapon		 = ForcePush_Level3
End


//--------------------------------------------------------------------------	
// LIGHT BLAST LEVEL 1//
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_EnablerLightBlast_L1
	SpecialPowerTemplate = SpecialAbilityLightBlast_L1
	TriggeredBy			 = Upgrade_CreateAHeroLightBlast_Level1
End
Behavior = SpecialPowerModule ModuleTag_LightBlastPower_L1
	SpecialPowerTemplate	 = SpecialAbilityLightBlast_L1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	;InitiateSound			 = GandalfVoiceAttackIstariLight //this plays when he targets, not when he fires
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_LightBlastPower_L1_Update
	SpecialPowerTemplate = SpecialAbilityLightBlast_L1
	SkipContinue		 = Yes
	UnpackTime			 = 2000	
	PreparationTime		 = 1  
	PersistentPrepTime	 = 2000
	PackTime			 = 500
	AwardXPForTriggering = 0
	StartAbilityRange	 = CREATE_A_HERO_LIGHTBLAST_CAST_RANGE // Note: This has to be	smaller	than the weapon	range or it'll never succeed
	ApproachRequiresLOS	 = Yes		 
	SpecialWeapon		 = CreateAHeroLightBlastWeapon_L1
	MustFinishAbility	 = Yes
	WhichSpecialWeapon	 = 3
	BusyForDuration		 = 2500
End

//--------------------------------------------------------------------------	
// LIGHT BLAST LEVEL 2//
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_EnablerLightBlast_L2
	SpecialPowerTemplate = SpecialAbilityLightBlast_L2
	TriggeredBy			 = Upgrade_CreateAHeroLightBlast_Level2
End
Behavior = SpecialPowerModule ModuleTag_LightBlastPower_L2
	SpecialPowerTemplate	 = SpecialAbilityLightBlast_L2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	;InitiateSound			 = GandalfVoiceAttackIstariLight //this plays when he targets, not when he fires
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_LightBlastPower_L2_Update
	SpecialPowerTemplate = SpecialAbilityLightBlast_L2
	SkipContinue		 = Yes
	UnpackTime			 = 2000	
	PreparationTime		 = 1  
	PersistentPrepTime	 = 2000
	PackTime			 = 500
	AwardXPForTriggering = 0
	StartAbilityRange	 = CREATE_A_HERO_LIGHTBLAST_CAST_RANGE // Note: This has to be	smaller	than the weapon	range or it'll never succeed
	ApproachRequiresLOS	 = Yes		 
	SpecialWeapon		 = CreateAHeroLightBlastWeapon_L2
	MustFinishAbility	 = Yes
	WhichSpecialWeapon	 = 3
	BusyForDuration		 = 2500
End

//--------------------------------------------------------------------------	
// LIGHT BLAST LEVEL 3//
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_EnablerLightBlast_L3
	SpecialPowerTemplate = SpecialAbilityLightBlast_L3
	TriggeredBy			 = Upgrade_CreateAHeroLightBlast_Level3
End
Behavior = SpecialPowerModule ModuleTag_LightBlastPower_L3
	SpecialPowerTemplate	 = SpecialAbilityLightBlast_L3
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	;InitiateSound			 = GandalfVoiceAttackIstariLight //this plays when he targets, not when he fires
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_LightBlastPower_L3_Update
	SpecialPowerTemplate = SpecialAbilityLightBlast_L3
	SkipContinue		 = Yes
	UnpackTime			 = 2000	
	PreparationTime		 = 1  
	PersistentPrepTime	 = 2000
	PackTime			 = 500
	AwardXPForTriggering = 0
	StartAbilityRange	 = CREATE_A_HERO_LIGHTBLAST_CAST_RANGE // Note: This has to be	smaller	than the weapon	range or it'll never succeed
	ApproachRequiresLOS	 = Yes		 
	SpecialWeapon		 = CreateAHeroLightBlastWeapon_L3
	MustFinishAbility	 = Yes
	WhichSpecialWeapon	 = 3
	BusyForDuration		 = 2500
End

//--------------------------------------------------------------------------	
// Hero of the West Summon Allies Level 1
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHotWSummonAllies_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHotWSummonAllies_Level1
	TriggeredBy			 = Upgrade_CreateAHeroHotWSummonAllies_Level1
End

Behavior = OCLSpecialPower ModuleTag_OCLSpecialPowerHotWSummonAllies_Level1
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroHotWSummonAllies_Level1
	OCL						= OCL_CreateAHeroHotWSpawnAllies_Level1
	TriggerFX				= FX_DunedainSummon
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
// Hero of the West Summon Allies Level 2
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHotWSummonAllies_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHotWSummonAllies_Level2
	TriggeredBy			 = Upgrade_CreateAHeroHotWSummonAllies_Level2
End

Behavior = OCLSpecialPower ModuleTag_OCLSpecialPowerHotWSummonAllies_Level2
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroHotWSummonAllies_Level2
	OCL						= OCL_CreateAHeroHotWSpawnAllies_Level2
	TriggerFX				= FX_DunedainSummon
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
// Hero of the West Summon Allies Level 3
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHotWSummonAllies_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHotWSummonAllies_Level3
	TriggeredBy			 = Upgrade_CreateAHeroHotWSummonAllies_Level3
End

Behavior = OCLSpecialPower ModuleTag_OCLSpecialPowerHotWSummonAllies_Level3
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroHotWSummonAllies_Level3
	OCL						= OCL_CreateAHeroHotWSpawnAllies_Level3
	TriggerFX				= FX_DunedainSummon
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
// Hero of the West Summon Allies Level 4
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHotWSummonAllies_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHotWSummonAllies_Level4
	TriggeredBy			 = Upgrade_CreateAHeroHotWSummonAllies_Level4
End

Behavior = OCLSpecialPower ModuleTag_OCLSpecialPowerHotWSummonAllies_Level4
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroHotWSummonAllies_Level4
	OCL						= OCL_CreateAHeroHotWSpawnAllies_Level4
	TriggerFX				= FX_DunedainSummon
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
// Servant of Sauron Summon Allies Level 1
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSoSSummonAllies_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSoSSummonAllies_Level1
	TriggeredBy			 = Upgrade_CreateAHeroSoSSummonAllies_Level1
End

Behavior = OCLSpecialPower ModuleTag_OCLSpecialPowerSoSSummonAllies_Level1
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroSoSSummonAllies_Level1
	OCL						= OCL_CreateAHeroSoSSpawnAllies_Level1
	TriggerFX				= FX_SummonWildmen
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
// Servant of Sauron Summon Allies Level 2
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSoSSummonAllies_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSoSSummonAllies_Level2
	TriggeredBy			 = Upgrade_CreateAHeroSoSSummonAllies_Level2
End

Behavior = OCLSpecialPower ModuleTag_OCLSpecialPowerSoSSummonAllies_Level2
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroSoSSummonAllies_Level2
	OCL						= OCL_CreateAHeroSoSSpawnAllies_Level2
	TriggerFX				= FX_SummonWildmen
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
// Servant of Sauron Summon Allies Level 3
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSoSSummonAllies_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSoSSummonAllies_Level3
	TriggeredBy			 = Upgrade_CreateAHeroSoSSummonAllies_Level3
End

Behavior = OCLSpecialPower ModuleTag_OCLSpecialPowerSoSSummonAllies_Level3
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroSoSSummonAllies_Level3
	OCL						= OCL_CreateAHeroSoSSpawnAllies_Level3
	TriggerFX				= FX_SummonWildmen
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
// Servant of Sauron Summon Allies Level 4
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSoSSummonAllies_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSoSSummonAllies_Level4
	TriggeredBy			 = Upgrade_CreateAHeroSoSSummonAllies_Level4
End

Behavior = OCLSpecialPower ModuleTag_OCLSpecialPowerSoSSummonAllies_Level4
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroSoSSummonAllies_Level4
	OCL						= OCL_CreateAHeroSoSSpawnAllies_Level4
	TriggerFX				= FX_SummonWildmen
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
// NEW BALL LIGHTNING Level 1 //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_BallLightningEnabler_L1
	SpecialPowerTemplate = SpecialAbilityBallLightning_L1
	TriggeredBy			 = Upgrade_CreateAHeroBallLightning_Level1
End
Behavior = SpecialPowerModule ModuleTag_SpecialAbilityBallLightning_L1
	SpecialPowerTemplate	 = SpecialAbilityBallLightning_L1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	InitiateSound			 = HeroWizardVoiceAttack //this plays when he targets, not when he fires
End		 

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_BallLightningUpdate_L1
	SpecialPowerTemplate = SpecialAbilityBallLightning_L1
	SkipContinue		 = Yes
	UnpackTime			 = 2000
	PreparationTime		 = 1  
	PersistentPrepTime	 = 1000
	PackTime			 = 500
	AwardXPForTriggering = 0
	StartAbilityRange	 = CREATE_A_HERO_BALL_LIGHTNING_START_RANGE //	Note: This has to be smaller than the weapon range or it'll	never succeed
	ApproachRequiresLOS	 = Yes		 
	SpecialWeapon		 = CreateAHerBallLightningWeapon_L1
	MustFinishAbility	 = Yes
	WhichSpecialWeapon	 = 3
	BusyForDuration		 = 2500
End

//--------------------------------------------------------------------------	
// NEW BALL LIGHTNING Level 2 //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_BallLightningEnabler_L2
	SpecialPowerTemplate = SpecialAbilityBallLightning_L2
	TriggeredBy			 = Upgrade_CreateAHeroBallLightning_Level2
End
Behavior = SpecialPowerModule ModuleTag_SpecialAbilityBallLightning_L2
	SpecialPowerTemplate	 = SpecialAbilityBallLightning_L2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	InitiateSound			 = HeroWizardVoiceAttack //this plays when he targets, not when he fires
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_BallLightningUpdate_L2
	SpecialPowerTemplate = SpecialAbilityBallLightning_L2
	SkipContinue		 = Yes
	UnpackTime			 = 1000
	PreparationTime		 = 1  
	PersistentPrepTime	 = 1000
	PackTime			 = 500
	AwardXPForTriggering = 0
	StartAbilityRange	 = CREATE_A_HERO_BALL_LIGHTNING_START_RANGE //	Note: This has to be smaller than the weapon range or it'll	never succeed
	ApproachRequiresLOS	 = Yes		 
	SpecialWeapon		 = CreateAHerBallLightningWeapon_L2
	MustFinishAbility	 = Yes
	WhichSpecialWeapon	 = 3
	BusyForDuration		 = 2500
End

//--------------------------------------------------------------------------	
// NEW BALL LIGHTNING Level 3 //
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_BallLightningEnabler_L3
	SpecialPowerTemplate = SpecialAbilityBallLightning_L3
	TriggeredBy			 = Upgrade_CreateAHeroBallLightning_Level3
End
Behavior = SpecialPowerModule ModuleTag_SpecialAbilityBallLightning_L3
	SpecialPowerTemplate	 = SpecialAbilityBallLightning_L3
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	InitiateSound			 = HeroWizardVoiceAttack //this plays when he targets, not when he fires
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_BallLightningUpdate_L3
	SpecialPowerTemplate = SpecialAbilityBallLightning_L3
	SkipContinue		 = Yes
	UnpackTime			 = 1000
	PreparationTime		 = 1  
	PersistentPrepTime	 = 1000
	PackTime			 = 500
	AwardXPForTriggering = 0
	StartAbilityRange	 = CREATE_A_HERO_BALL_LIGHTNING_START_RANGE //	Note: This has to be smaller than the weapon range or it'll	never succeed
	ApproachRequiresLOS	 = Yes		 
	SpecialWeapon		 = CreateAHerBallLightningWeapon_L3
	MustFinishAbility	 = Yes
	WhichSpecialWeapon	 = 3
	BusyForDuration		 = 2500
End

//--------------------------------------------------------------------------	
//	TRUE SIGHT SPECIAL POWER (Wizard)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroWTrueSightEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroWTrueSight
	TriggeredBy			 = Upgrade_CreateAHeroWTrueSight
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroWTrueSightStarter			// SpecialAbility is	a SpecialPower,	SpecialPower is	anyting	special
	SpecialPowerTemplate = SpecialAbilityCreateAHeroWTrueSight
	StartsPaused		 = Yes
End

Behavior = StealthDetectorUpdate ModuleTag_CreateAHeroWTrueSightUpdate
	DetectionRange		= 1800	// range to detect
	DetectionRate		= 100   // how often to rescan for stealthed things in my sight (msec)
	CancelOneRingEffect = Yes	// forces uses of one-ring to pop out of it
	InitiallyDisabled	= Yes
//		RequiredUpgrade		= Upgrade_WildFortressBatCloud //Won't work until this upgrade is purchased
End


Behavior = ActivateModuleSpecialPower ModuleTag_CreateAHeroWActivateModuleSpecialPower
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroWTrueSight
	TriggerSpecialPower			= ModuleTag_CreateAHeroWTrueSightUpdate
	UnpackTime					= 0		// Nothing to touching it
	PreparationTime				= 0	// touching	   it to grabbing it
	PackTime					= CREATE_A_HERO_TRUE_SIGHT_DURATION	// This is actually the duration of the spell
End

//--------------------------------------------------------------------------	
//	TRUE SIGHT SPECIAL POWER (Archer)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroATrueSightEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroATrueSight
	TriggeredBy			 = Upgrade_CreateAHeroATrueSight
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroATrueSightStarter			// SpecialAbility is	a SpecialPower,	SpecialPower is	anyting	special
	SpecialPowerTemplate = SpecialAbilityCreateAHeroATrueSight
	StartsPaused		 = Yes
End

Behavior = StealthDetectorUpdate ModuleTag_CreateAHeroATrueSightUpdate
	DetectionRange		= 1800	// range to detect
	DetectionRate		= 100   // how often to rescan for stealthed things in my sight (msec)
	CancelOneRingEffect = Yes	// forces uses of one-ring to pop out of it
	InitiallyDisabled	= Yes
//		RequiredUpgrade		= Upgrade_WildFortressBatCloud //Won't work until this upgrade is purchased
End


Behavior = ActivateModuleSpecialPower ModuleTag_CreateAHeroAActivateModuleSpecialPower
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroATrueSight
	TriggerSpecialPower			= ModuleTag_CreateAHeroATrueSightUpdate
	UnpackTime					= 0	// Nothing to touching it
	PreparationTime				= 0	// touching	   it to grabbing it
	PackTime					= CREATE_A_HERO_TRUE_SIGHT_DURATION	// This is actually the duration of the spell
End

//--------------------------------------------------------------------------	
//	WORD OF POULTRY SPECIAL POWER Level 1
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroWordOfPoultryEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroWordOfPoultry_Level1
	TriggeredBy			 = Upgrade_CreateAHeroWordOfPoultry_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroWordOfPoultryStarter_Level1			// SpecialAbility is	a SpecialPower,	SpecialPower is	anyting	special
	SpecialPowerTemplate = SpecialAbilityCreateAHeroWordOfPoultry_Level1
	StartsPaused		 = Yes
End

Behavior = ReplaceObjectUpdate ModuleTag_WordOfPoultryUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroWordOfPoultry_Level1
	//SkipContinue			= Yes

	UnpackingVariation		= 1

	UnpackTime             	= 800
	PreparationTime			= 1   
	//PersistentPrepTime		= 1000 
	PackTime				= 100
	
	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_WORD_OF_POULTRY_RANGE_L1
	MustFinishAbility		= Yes
	
	ReplaceObject
		TargetObjectFilter = CREATE_A_HERO_WORD_OF_POULTRY_OBJECT_FILTER
		ReplacementObjectName = Chicken_Replacement Rabbit_Replacement Dog_Replacement Dog1_Replacement Racoon_Replacement Duck_Replacement Cow_Replacement Sheep_Replacement Crow_Replacement //GoatMale_Replacement GoatFemale_Replacement
	End
	ReplaceRadius			= CREATE_A_HERO_WORD_OF_POULTRY_RADIUS_L1
	ReplaceFX				= FX_CreateAHeroReplaceObject
	Scatter					= Yes
End

//--------------------------------------------------------------------------	
//	WORD OF POULTRY SPECIAL POWER Level 2
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroWordOfPoultryEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroWordOfPoultry_Level2
	TriggeredBy			 = Upgrade_CreateAHeroWordOfPoultry_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroWordOfPoultryStarter_Level2			// SpecialAbility is	a SpecialPower,	SpecialPower is	anyting	special
	SpecialPowerTemplate = SpecialAbilityCreateAHeroWordOfPoultry_Level2
	StartsPaused		 = Yes
End

Behavior = ReplaceObjectUpdate ModuleTag_WordOfPoultryUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroWordOfPoultry_Level2
	//SkipContinue			= Yes

	UnpackingVariation		= 1

	UnpackTime             	= 800
	PreparationTime			= 1   
	//PersistentPrepTime		= 1000 
	PackTime				= 100
	
	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_WORD_OF_POULTRY_RANGE_L2
	MustFinishAbility		= Yes
	
	ReplaceObject
		TargetObjectFilter = CREATE_A_HERO_WORD_OF_POULTRY_OBJECT_FILTER
		ReplacementObjectName = Chicken_Replacement Rabbit_Replacement Dog_Replacement Dog1_Replacement Racoon_Replacement Duck_Replacement Cow_Replacement Sheep_Replacement Crow_Replacement //GoatMale_Replacement GoatFemale_Replacement
	End
	ReplaceRadius			= CREATE_A_HERO_WORD_OF_POULTRY_RADIUS_L2
	ReplaceFX				= FX_CreateAHeroReplaceObject
	Scatter					= Yes
End

//--------------------------------------------------------------------------	
//	SHIELD CHARGE SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroShieldCrushEnabler_Level1
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroShieldCrush_Level1
	TriggeredBy				= Upgrade_CreateAHeroShieldCrush_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroShieldCrushStarter_Level1			// SpecialAbility is	a SpecialPower,	SpecialPower is	anyting	special
	SpecialPowerTemplate			= SpecialAbilityCreateAHeroShieldCrush_Level1
	StartsPaused					= Yes
	AttributeModifier				= CreateAHeroShieldCrush_Level1
	AttributeModifierAffectsSelf	= Yes
	//TriggerRX						= FX_CreateAHeroShieldCharge_Level1
End

//--------------------------------------------------------------------------	
//	SHIELD CHARGE SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroShieldCrushEnabler_Level3
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroShieldCrush_Level3
	TriggeredBy				= Upgrade_CreateAHeroShieldCrush_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroShieldCrushStarter_Level3			// SpecialAbility is	a SpecialPower,	SpecialPower is	anyting	special
	SpecialPowerTemplate			= SpecialAbilityCreateAHeroShieldCrush_Level3
	StartsPaused					= Yes
	AttributeModifier				= CreateAHeroShieldCrush_Level3
	AttributeModifierAffectsSelf	= Yes
	//TriggerRX						= FX_CreateAHeroShieldCharge_Level3
End

// 
// //--------------------------------------------------------------------------	
// //	CONQUER SPECIAL POWER (Hero of the West)
// //--------------------------------------------------------------------------
// Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHotWConquerEnabler
// 	SpecialPowerTemplate = SpecialAbilityCreateAHeroHotWConquer
// 	TriggeredBy = Upgrade_CreateAHeroHotWConquer
// End
// Behavior = SpecialPowerModule ModuleTag_CreateAHeroHotWConquerStarter
// 	SpecialPowerTemplate      = SpecialAbilityCreateAHeroHotWConquer
// 	UpdateModuleStartsAttack  = Yes
// 	StartsPaused              = Yes
// End
// Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroHotWConquerUpdate
// 	SpecialPowerTemplate   = SpecialAbilityCreateAHeroHotWConquer
// 	StartAbilityRange      = 5.0
// 	UnpackTime             = 3000  ;// (changing this will scale anim speed)
// 	PreparationTime        = 20000 ;// time to complete hack once prepared (changing this will scale anim speed)
// 	PackTime               = 2000  ;// (changing this will scale anim speed)
// 	DoCaptureFX            = Yes
// 	UnpackingVariation	   = 4
// End
// 
// //--------------------------------------------------------------------------	
// //	CONQUER SPECIAL POWER (Corrupted Man)
// //--------------------------------------------------------------------------
// Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCMConquerEnabler
// 	SpecialPowerTemplate = SpecialAbilityCreateAHeroCMConquer
// 	TriggeredBy = Upgrade_CreateAHeroCMConquer
// End
// Behavior = SpecialPowerModule ModuleTag_CreateAHeroCMConquerStarter
// 	SpecialPowerTemplate      = SpecialAbilityCreateAHeroCMConquer
// 	UpdateModuleStartsAttack  = Yes
// 	StartsPaused              = Yes
// End
// Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroCMConquerUpdate
// 	SpecialPowerTemplate   = SpecialAbilityCreateAHeroCMConquer
// 	StartAbilityRange      = 5.0
// 	UnpackTime             = 3000  ;// (changing this will scale anim speed)
// 	PreparationTime        = 20000 ;// time to complete hack once prepared (changing this will scale anim speed)
// 	PackTime               = 2000  ;// (changing this will scale anim speed)
// 	DoCaptureFX            = Yes
// 	UnpackingVariation	   = 4
// End
// 
//--------------------------------------------------------------------------	
//	THROW SPEAR SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroThrowSpearEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAThrowSpear_Level1
	TriggeredBy = Upgrade_CreateAHeroThrowSpear_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroThrowSpearStarter_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroAThrowSpear_Level1
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroThrowSpearUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroAThrowSpear_Level1

	UnpackTime              = 1200
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= 275.0
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroSpear
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------	
//	THROW SPEAR SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroThrowSpearEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroThrowSpear_Level2
	TriggeredBy = Upgrade_CreateAHeroThrowSpear_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroThrowSpearStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroThrowSpear_Level2
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroThrowSpearUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroThrowSpear_Level2

	UnpackTime              = 1200
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= 275.0
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroSpear
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------	
//	THROW SPEAR SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroThrowSpearEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroThrowSpear_Level3
	TriggeredBy = Upgrade_CreateAHeroThrowSpear_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroThrowSpearStarter_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroThrowSpear_Level3
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroThrowSpearUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroThrowSpear_Level3

	UnpackTime              = 1200
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= 275.0
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroSpear
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------	
//	OIL FIRE SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroOilFireEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroOilFire_Level1
	TriggeredBy = Upgrade_CreateAHeroOilFire_Level1
End

Behavior = OCLSpecialPower ModuleTag_CreateAHeroOilFireStarter_Level1
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroOilFire_Level1
	OCL						= OCL_CreateAHeroOilFire_Level1
	CreateLocation			= USE_OWNER_OBJECT
	StartsPaused			= Yes
End

Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroIgniteOilEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroIgniteOil_Level1
	TriggeredBy = Upgrade_CreateAHeroOilFire_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroIgniteOilStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroIgniteOil_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroIgniteOilUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroIgniteOil_Level1

	UnpackTime              = 2000
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	SpecialWeapon			= CreateAHeroTriggerIgniteOil
	WhichSpecialWeapon		= 1

	Instant					= Yes
End

//--------------------------------------------------------------------------	
//	OIL FIRE SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroOilFireEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroOilFire_Level2
	TriggeredBy = Upgrade_CreateAHeroOilFire_Level2
End

Behavior = OCLSpecialPower ModuleTag_CreateAHeroOilFireStarter_Level2
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroOilFire_Level2
	OCL						= OCL_CreateAHeroOilFire_Level2
	CreateLocation			= USE_OWNER_OBJECT
	StartsPaused			= Yes
End

Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroIgniteOilEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroIgniteOil_Level2
	TriggeredBy = Upgrade_CreateAHeroOilFire_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroIgniteOilStarter_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroIgniteOil_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroIgniteOilUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroIgniteOil_Level2

	UnpackTime              = 2000
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	SpecialWeapon = CreateAHeroTriggerIgniteOil
	WhichSpecialWeapon = 1

	Instant					= Yes
End

//--------------------------------------------------------------------------	
//	OIL FIRE SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroOilFireEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroOilFire_Level3
	TriggeredBy = Upgrade_CreateAHeroOilFire_Level3
End

Behavior = OCLSpecialPower ModuleTag_CreateAHeroOilFireStarter_Level3
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroOilFire_Level3
	OCL						= OCL_CreateAHeroOilFire_Level3
	CreateLocation			= USE_OWNER_OBJECT
	StartsPaused			= Yes
End

Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroIgniteOilEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroIgniteOil_Level3
	TriggeredBy = Upgrade_CreateAHeroOilFire_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroIgniteOilStarter_Level3
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroIgniteOil_Level3
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroIgniteOilUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroIgniteOil_Level3

	UnpackTime              = 2000
	PackTime                = 2000 

	AwardXPForTriggering    = 0
		
	SpecialWeapon = CreateAHeroTriggerIgniteOil
	WhichSpecialWeapon = 1

	Instant					= Yes
End

//--------------------------------------------------------------------------	
//	INSPIRE FEAR SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroInspireFearEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroInspireFear_Level1
	TriggeredBy = Upgrade_CreateAHeroInspireFear_Level1
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroInspireFearStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroInspireFear_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End
Behavior = AttributeModifierAuraUpdate ModuleTag_CreateAHeroInspireFearUpdate_Level1
	StartsActive		= No ;If no, requires upgrade to turn on.
	BonusName		= CreateAHeroInspireFear_Level1	//BlackRiderDreadVisage
	TriggeredBy		= Upgrade_CreateAHeroInspireFear_Level1
	RefreshDelay	= 2000
	Range			= 200
	TargetEnemy		= Yes
	AntiCategory	= LEADERSHIP BUFF; This means cancel all previous leadership bonuses
	//AntiFX			= FX_AntiLeadership ; FX for anti category
	ObjectFilter	= GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
End
Behavior = ModelConditionUpgrade ModuleTag_CreateAHeroInspireFearModelCondition_Level1
	TriggeredBy			= Upgrade_CreateAHeroInspireFear_Level1
	AddConditionFlags	= USER_3
End

Behavior = RadiateFearUpdate ModuleTag_CreateAHeroInspireFearFear_Level1
	InitiallyActive				= No
	TriggeredBy					= Upgrade_CreateAHeroInspireFear_Level1
	WhichSpecialPower			= 1
	GenerateTerror				= No
	GenerateFear				= Yes
	EmotionPulseRadius			= 100
	EmotionPulseInterval		= 1000
End

//--------------------------------------------------------------------------	
//	INSPIRE FEAR SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroInspireFearEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroInspireFear_Level2
	TriggeredBy = Upgrade_CreateAHeroInspireFear_Level2
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroInspireFearStarter_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroInspireFear_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End
Behavior = SpecialAbilityUpdate ModuleTag_BlackRiderScreechSAUpdate  
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroInspireFear_Level2
	UnpackTime					= 0  
	AwardXPForTriggering		= 0		
	TriggerSound				= NazgulScreech
	Instant						= Yes
	EffectRange					= 180
End

//--------------------------------------------------------------------------	
//	HOWL OF RAGE SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHowlOfRageEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHowlOfRage_Level1
	TriggeredBy			 = Upgrade_CreateAHeroHowlOfRage_Level1
End 

Behavior = SpecialPowerModule ModuleTag_CreateAHeroHowlOfRageStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroHowlOfRage_Level1
	AttributeModifier		 = GenericBuff20
	AttributeModifierRange	 = CREATE_A_HERO_HOWL_OF_RAGE_RADIUS_L1
	AttributeModifierAffects = GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
	TriggerFX				 = FX_HowlofRage1
	UpdateModuleStartsAttack = No
	StartsPaused			 = Yes
	TargetEnemy					= No
End

//--------------------------------------------------------------------------	
//	HOWL OF RAGE SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHowlOfRageEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHowlOfRage_Level2
	TriggeredBy = Upgrade_CreateAHeroHowlOfRage_Level2
End 
Behavior = SpecialPowerModule ModuleTag_CreateAHeroHowlOfRageStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroHowlOfRage_Level2
	AttributeModifier			= GenericBuff40
	AttributeModifierRange		= CREATE_A_HERO_HOWL_OF_RAGE_RADIUS_L2
	AttributeModifierAffects	= GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
	TriggerFX					= FX_HowlofRage2
	UpdateModuleStartsAttack	= No
	StartsPaused				= Yes
	TargetEnemy					= No
End

//--------------------------------------------------------------------------	
//	HOWL OF RAGE SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHowlOfRageEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroHowlOfRage_Level3
	TriggeredBy = Upgrade_CreateAHeroHowlOfRage_Level3
End 
Behavior = SpecialPowerModule ModuleTag_CreateAHeroHowlOfRageStarter_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroHowlOfRage_Level3
	AttributeModifier			= GenericBuff60
	AttributeModifierRange		= CREATE_A_HERO_HOWL_OF_RAGE_RADIUS_L3
	AttributeModifierAffects	= GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
	TriggerFX					= FX_HowlofRage3
	UpdateModuleStartsAttack	= No
	StartsPaused				= Yes
	TargetEnemy					= No
End

// //--------------------------------------------------------------------------	
// //	INFERNAL SPECIAL POWER Level 1
// //--------------------------------------------------------------------------
// Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroInfernalEnabler_Level1
// 	SpecialPowerTemplate = SpecialAbilityCreateAHeroInfernal_Level1
// 	TriggeredBy = Upgrade_CreateAHeroInfernal_Level1
// End 
// Behavior = SpecialPowerModule ModuleTag_CreateAHeroInfernalStarter_Level1
// 	SpecialPowerTemplate		= SpecialAbilityCreateAHeroInfernal_Level1
// 	AttributeModifier			= CreateAHeroInfernal
// 	AttributeModifierRange		= 0
// 	AttributeModifierAffectsSelf = Yes
// 	//AttributeModifierAffects	= ANY +INFANTRY +CAVALRY +MONSTER -HERO
// 	//TriggerFX					= FX_SpellWarChant
// 	UpdateModuleStartsAttack	= No
// 	StartsPaused				= Yes
// 	TargetEnemy					= No
// End
// 
// //--------------------------------------------------------------------------	
// //	INFERNAL SPECIAL POWER Level 2
// //--------------------------------------------------------------------------
// Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroInfernalEnabler_Level2
// 	SpecialPowerTemplate = SpecialAbilityCreateAHeroInfernal_Level2
// 	TriggeredBy = Upgrade_CreateAHeroInfernal_Level2
// End 
// Behavior = SpecialPowerModule ModuleTag_CreateAHeroInfernalStarter_Level2
// 	SpecialPowerTemplate		= SpecialAbilityCreateAHeroInfernal_Level2
// 	AttributeModifier			= CreateAHeroInfernal
// 	AttributeModifierRange		= CREATE_A_HERO_INFERNAL_RANGE
// 	AttributeModifierAffectsSelf = Yes
// 	AttributeModifierAffects	= ANY +INFANTRY +CAVALRY +MONSTER -HERO
// 	TriggerFX					= FX_SpellWarChant
// 	UpdateModuleStartsAttack	= No
// 	StartsPaused				= Yes
// 	TargetEnemy					= No
// End

//--------------------------------------------------------------------------	
//	BERSERKER RAGE SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBerserkerRageEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBerserkerRage_Level1
	TriggeredBy = Upgrade_CreateAHeroBerserkerRage_Level1
End 
Behavior = SpecialPowerModule ModuleTag_CreateAHeroBerserkerRageStarter_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroBerserkerRage_Level1
	AttributeModifier			= CreateAHeroBerserkerRage_Level1
	AttributeModifierRange		= 0
	AttributeModifierAffectsSelf = Yes
	//AttributeModifierAffects	= ANY +INFANTRY +CAVALRY +MONSTER -HERO
	//TriggerFX					= FX_SpellWarChant
	UpdateModuleStartsAttack	= No
	StartsPaused				= Yes
	TargetEnemy					= No
End

//--------------------------------------------------------------------------	
//	BERSERKER RAGE SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBerserkerRageEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBerserkerRage_Level2
	TriggeredBy = Upgrade_CreateAHeroBerserkerRage_Level2
End 
Behavior = SpecialPowerModule ModuleTag_CreateAHeroBerserkerRageStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroBerserkerRage_Level2
	AttributeModifier			= CreateAHeroBerserkerRage_Level2
	AttributeModifierRange		= 0
	AttributeModifierAffectsSelf = Yes
	//AttributeModifierAffects	= ANY +INFANTRY +CAVALRY +MONSTER -HERO
	//TriggerFX					= FX_SpellWarChant
	UpdateModuleStartsAttack	= No
	StartsPaused				= Yes
	TargetEnemy					= No
End

//--------------------------------------------------------------------------	
//	BERSERKER RAGE SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBerserkerRageEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBerserkerRage_Level3
	TriggeredBy = Upgrade_CreateAHeroBerserkerRage_Level3
End 
Behavior = SpecialPowerModule ModuleTag_CreateAHeroBerserkerRageStarter_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroBerserkerRage_Level3
	AttributeModifier			= CreateAHeroBerserkerRage_Level3
	AttributeModifierRange		= 0
	AttributeModifierAffectsSelf = Yes
	//AttributeModifierAffects	= ANY +INFANTRY +CAVALRY +MONSTER -HERO
	//TriggerFX					= FX_SpellWarChant
	UpdateModuleStartsAttack	= No
	StartsPaused				= Yes
	TargetEnemy					= No
End

//--------------------------------------------------------------------------	
//	BERSERKER RAGE SPECIAL POWER Level 4
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBerserkerRageEnabler_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBerserkerRage_Level4
	TriggeredBy = Upgrade_CreateAHeroBerserkerRage_Level4
End 
Behavior = SpecialPowerModule ModuleTag_CreateAHeroBerserkerRageStarter_Level4
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroBerserkerRage_Level4
	AttributeModifier			= CreateAHeroBerserkerRage_Level4
	AttributeModifierRange		= 0
	AttributeModifierAffectsSelf = Yes
	//AttributeModifierAffects	= ANY +INFANTRY +CAVALRY +MONSTER -HERO
	//TriggerFX					= FX_SpellWarChant
	UpdateModuleStartsAttack	= No
	StartsPaused				= Yes
	TargetEnemy					= No
End

//--------------------------------------------------------------------------	
//	FIRE BOMB SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroFireBombEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroFireBomb_Level1
	TriggeredBy = Upgrade_CreateAHeroFireBomb_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroFireBombStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroFireBomb_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroFireBombUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroFireBomb_Level1

	UnpackTime              = 1500
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_FIRE_BOMB_DO_POWER_RANGE_L1
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroFireBomb_Level1
	WhichSpecialWeapon = 4
End

//--------------------------------------------------------------------------	
//	FIRE BOMB SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroFireBombEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroFireBomb_Level2
	TriggeredBy = Upgrade_CreateAHeroFireBomb_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroFireBombStarter_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroFireBomb_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroFireBombUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroFireBomb_Level2

	UnpackTime              = 1500
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_FIRE_BOMB_DO_POWER_RANGE_L2
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroFireBomb_Level2
	WhichSpecialWeapon = 4
End

//--------------------------------------------------------------------------	
//	FIRE BOMB SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroFireBombEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroFireBomb_Level3
	TriggeredBy = Upgrade_CreateAHeroFireBomb_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroFireBombStarter_Level3
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroFireBomb_Level3
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroFireBombUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroFireBomb_Level3

	UnpackTime              = 1500
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_FIRE_BOMB_DO_POWER_RANGE_L3
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroFireBomb_Level3
	WhichSpecialWeapon = 4
End

//--------------------------------------------------------------------------	
//	FIRE BOMB SPECIAL POWER Level 4
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroFireBombEnabler_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroFireBomb_Level4
	TriggeredBy = Upgrade_CreateAHeroFireBomb_Level4
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroFireBombStarter_Level4
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroFireBomb_Level4
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroFireBombUpdate_Level4
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroFireBomb_Level4

	UnpackTime              = 1500
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_FIRE_BOMB_DO_POWER_RANGE_L4
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroFireBomb_Level4
	WhichSpecialWeapon = 4
End

//--------------------------------------------------------------------------	
//	POISON ATTACK SPECIAL POWER Level 1
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroPoisonAttackEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroPoisonAttack_Level1
	TriggeredBy = Upgrade_CreateAHeroPoisonAttack_Level1
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroPoisonAttackStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroPoisonAttack_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End

//--------------------------------------------------------------------------	
//	POISON ATTACK SPECIAL POWER Level 2
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroPoisonAttackEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroPoisonAttack_Level2
	TriggeredBy = Upgrade_CreateAHeroPoisonAttack_Level2
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroPoisonAttackStarter_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroPoisonAttack_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End

//--------------------------------------------------------------------------	
//	POISON ATTACK SPECIAL POWER Level 3
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroPoisonAttackEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroPoisonAttack_Level3
	TriggeredBy = Upgrade_CreateAHeroPoisonAttack_Level3
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroPoisonAttackStarter_Level3
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroPoisonAttack_Level3
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End

//--------------------------------------------------------------------------	
//	POISON ATTACK SPECIAL POWER Level 4
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroPoisonAttackEnabler_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroPoisonAttack_Level4
	TriggeredBy = Upgrade_CreateAHeroPoisonAttack_Level4
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroPoisonAttackStarter_Level4
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroPoisonAttack_Level4
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End

//--------------------------------------------------------------------------	
//	UNTAMED ALLEGIANCE SPECIAL POWER
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroUntamedAllegianceEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroUntamedAllegiance
	TriggeredBy = Upgrade_CreateAHeroUntamedAllegiance
End
Behavior = UntamedAllegianceSpecialPower ModuleTag_CreateAHeroUntamedAllegiance
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroUntamedAllegiance
	TargetEnemy					= Yes
	AttributeModifierAffects	= CREEP_OBJECTFILTER
	AttributeModifierRange		= 60
	TriggerFX					= FX_SarumanDominateTrigger
	StartsPaused				= Yes
End

//--------------------------------------------------------------------------
//	ATTACH SPY SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAttachSpyEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAttachSpy_Level1
	TriggeredBy = Upgrade_CreateAHeroAttachSpy_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAttachSpyStarter_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroAttachSpy_Level1
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	TriggerFX = FX_AttachSpy
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroAttachSpyUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroAttachSpy_Level1

	UnpackTime              = 2000
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_SPY_DO_POWER_RANGE_L1
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHero_AttachSpy_Level1
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------
//	ATTACH SPY SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAttachSpyEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAttachSpy_Level2
	TriggeredBy = Upgrade_CreateAHeroAttachSpy_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAttachSpyStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroAttachSpy_Level2
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	TriggerFX = FX_AttachSpy
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroAttachSpyUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroAttachSpy_Level2

	UnpackTime              = 2000
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_SPY_DO_POWER_RANGE_L2
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHero_AttachSpy_Level2
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------	
// COERCE SPECIAL POWER LEVEL 1
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCoerceEnabler_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroCoerce_Level1
	TriggeredBy					= Upgrade_CreateAHeroCoerce_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroCoerceStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCoerce_Level1
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	// InitiateSound			= SarumanVoiceDominate
End

Behavior = DominateEnemySpecialPower ModuleTag_CreateAHeroCoercePower_Level1
    SpecialPowerTemplate		= SpecialAbilityCreateAHeroCoerce_Level1
	UnpackingVariation			= 2
	StartAbilityRange			= CREATE_A_HERO_COERCE_RANGE_L1
	
	DominateRadius				= CREATE_A_HERO_COERCE_RADIUS_L1
	DominatedFX					= FX_SarumanDominateTargets
	TriggerFX					= FX_CreateaHeroConvert
	TriggerSound				= SarumanWormtongue
	PermanentlyConvert			= Yes
	UnpackTime					= 2000
	PreparationTime				= 1   
	FreezeAfterTriggerDuration	= 2500 // Hold AI for this long after we fire.	
	AttributeModifierAffects	= CREATE_A_HERO_COERCE_OBJECT_FILTER
End

//--------------------------------------------------------------------------	
// COERCE SPECIAL POWER LEVEL 2
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCoerceEnabler_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroCoerce_Level2
	TriggeredBy					= Upgrade_CreateAHeroCoerce_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroCoerceStarter_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCoerce_Level2
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	// InitiateSound			= SarumanVoiceDominate
End

Behavior = DominateEnemySpecialPower ModuleTag_CreateAHeroCoercePower_Level2
    SpecialPowerTemplate		= SpecialAbilityCreateAHeroCoerce_Level2
	UnpackingVariation			= 2
	StartAbilityRange			= CREATE_A_HERO_COERCE_RANGE_L2
	
	DominateRadius				= CREATE_A_HERO_COERCE_RADIUS_L2
	DominatedFX					= FX_SarumanDominateTargets
	TriggerFX					= FX_CreateaHeroConvert
	PermanentlyConvert			= Yes
	UnpackTime					= 2000
	PreparationTime				= 1   
	FreezeAfterTriggerDuration	= 2500 // Hold AI for this long after we fire.		
	AttributeModifierAffects	= CREATE_A_HERO_COERCE_OBJECT_FILTER
End

//--------------------------------------------------------------------------	
// COERCE SPECIAL POWER LEVEL 3
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCoerceEnabler_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroCoerce_Level3
	TriggeredBy					= Upgrade_CreateAHeroCoerce_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroCoerceStarter_Level3
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCoerce_Level3
	StartsPaused			 = Yes
	UpdateModuleStartsAttack = Yes
	// InitiateSound			= SarumanVoiceDominate
End

Behavior = DominateEnemySpecialPower ModuleTag_CreateAHeroCoercePower_Level3
    SpecialPowerTemplate		= SpecialAbilityCreateAHeroCoerce_Level3
	UnpackingVariation			= 2
	StartAbilityRange			= CREATE_A_HERO_COERCE_RANGE_L3
	
	DominateRadius				= CREATE_A_HERO_COERCE_RADIUS_L3
	DominatedFX					= FX_SarumanDominateTargets
	TriggerFX					= FX_CreateaHeroConvert
	PermanentlyConvert			= Yes
	UnpackTime					= 2000
	PreparationTime				= 1   
	FreezeAfterTriggerDuration	= 2500 // Hold AI for this long after we fire.		
	AttributeModifierAffects	= CREATE_A_HERO_COERCE_OBJECT_FILTER
End

//--------------------------------------------------------------------------	
// DISGUISE SPECIAL POWER
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroDisguiseEnabler
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroDisguise
	TriggeredBy					= Upgrade_CreateAHeroDisguise
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroDisguiseStarter
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroDisguise
	UpdateModuleStartsAttack	= Yes
	StartsPaused				= Yes
	InitiateSound				= CaH_Disguise
End
Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroDisguiseUpdate
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroDisguise
	StartAbilityRange			= 1000000.0
	ApproachRequiresLOS			= No
End

//--------------------------------------------------------------------------	
//	STEALTH SPECIAL POWER Level 1 (Corrupted Man)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCMStealthEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCMStealth_Level1
	TriggeredBy = Upgrade_CreateAHeroCMStealth_Level1
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroCMStealthStarter_Level1
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroCMStealth_Level1
	UpdateModuleStartsAttack  = Yes
	StartsPaused = Yes
End

//--------------------------------------------------------------------------	
//	STEALTH SPECIAL POWER Level 2 (Corrupted Man)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroCMStealthEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCMStealth_Level2
	TriggeredBy = Upgrade_CreateAHeroCMStealth_Level2
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroCMStealthStarter_Level2
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroCMStealth_Level2
	UpdateModuleStartsAttack  = Yes
	StartsPaused = Yes
End

//--------------------------------------------------------------------------	
//	STEALTH SPECIAL POWER Level 1 (Archer)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAStealthEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAStealth_Level1
	TriggeredBy = Upgrade_CreateAHeroAStealth_Level1
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroAStealthStarter_Level1
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroAStealth_Level1
	UpdateModuleStartsAttack  = Yes
	StartsPaused = Yes
End

//--------------------------------------------------------------------------	
//	STEALTH SPECIAL POWER (Elven Cloak) (Archer and Corrupted Man)
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroElvenCloakEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroElvenCloak
	TriggeredBy = Upgrade_CreateAHeroElvenCloak
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroElvenCloakStarter
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroElvenCloak
	UpdateModuleStartsAttack  = Yes
	StartsPaused = Yes
End
Behavior = ToggleHiddenSpecialAbilityUpdate ModuleTag_CreateAHeroElvenCloakUpdate
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroElvenCloak
	AwardXPForTriggering    = 0
End

//--------------------------------------------------------------------------	
//	CLIMB WALLS SPECIAL POWER
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroClimbWallsEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroClimbWalls
	TriggeredBy = Upgrade_CreateAHeroClimbWalls
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroClimbWallsStarter
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroClimbWalls
	UpdateModuleStartsAttack	= No
	StartsPaused			= Yes
End
Behavior = LocomotorSetUpgrade ModuleTag_CreateAHeroClimbWallsUpgrade
    TriggeredBy = Upgrade_CreateAHeroClimbWalls
End

//--------------------------------------------------------------------------	
//	STEAL MONEY SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroStealMoneyEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroStealMoney_Level1
	TriggeredBy = Upgrade_CreateAHeroStealMoney_Level1
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroStealMoneyStarter_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroStealMoney_Level1
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	InitiateSound			= HeroEvilManVoiceStealResources
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroStealMoneyUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroStealMoney_Level1

	UnpackTime              = 2000
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_STEAL_MONEY_DO_POWER_RANGE
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroStealMoney
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------	
//	STEAL MONEY SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroStealMoneyEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroStealMoney_Level2
	TriggeredBy = Upgrade_CreateAHeroStealMoney_Level2
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroStealMoneyStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroStealMoney_Level2
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	InitiateSound			= HeroEvilManVoiceStealResources
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroStealMoneyUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroStealMoney_Level2

	UnpackTime              = 2000
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_STEAL_MONEY_DO_POWER_RANGE
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroStealMoney
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------	
//	STEAL MONEY SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroStealMoneyEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroStealMoney_Level3
	TriggeredBy = Upgrade_CreateAHeroStealMoney_Level3
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroStealMoneyStarter_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroStealMoney_Level3
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	InitiateSound			= HeroEvilManVoiceStealResources
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroStealMoneyUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroStealMoney_Level3

	UnpackTime              = 2000
	PackTime                = 2000 

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_STEAL_MONEY_DO_POWER_RANGE
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroStealMoney
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------
//	ASSASSIN SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAssassinEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAssassin_Level1
	TriggeredBy			 = Upgrade_CreateAHeroAssassin_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAssassinStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroAssassin_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	InitiateSound			 = HeroEvilManVoiceAttack
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroAssassinUpdate_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAssassin_Level1
	UnpackTime			 = 2000
	PackTime			 = 2000	
	AwardXPForTriggering = 0
	StartAbilityRange	 = CREATE_A_HERO_ASSASSIN_DO_POWER_RANGE
	ApproachRequiresLOS	 = Yes
	SpecialWeapon		 = CreateAHeroAssassinWeapon
	WhichSpecialWeapon	 = 5

	LoseStealthOnTrigger = Yes
	PreTriggerUnstealthTime = 2100
End

//--------------------------------------------------------------------------
//	ASSASSIN SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAssassinEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAssassin_Level2
	TriggeredBy = Upgrade_CreateAHeroAssassin_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAssassinStarter_Level2
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroAssassin_Level2
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	InitiateSound			 = HeroEvilManVoiceAttack
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroAssassinUpdate_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAssassin_Level2
	UnpackTime			 = 2000
	PackTime			 = 2000	
	AwardXPForTriggering = 0
	StartAbilityRange	 = CREATE_A_HERO_ASSASSIN_DO_POWER_RANGE
	ApproachRequiresLOS	 = Yes
	SpecialWeapon		 = CreateAHeroAssassinWeapon
	WhichSpecialWeapon	 = 5

	LoseStealthOnTrigger = Yes
	PreTriggerUnstealthTime = 2100
End

//--------------------------------------------------------------------------
//	ASSASSIN SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAssassinEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAssassin_Level3
	TriggeredBy			 = Upgrade_CreateAHeroAssassin_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAssassinStarter_Level3
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroAssassin_Level3
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	InitiateSound			 = HeroEvilManVoiceAttack
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroAssassinUpdate_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAssassin_Level3

	UnpackTime			 = 2000
	PackTime			 = 2000	

	AwardXPForTriggering = 0
	
	StartAbilityRange	 = CREATE_A_HERO_ASSASSIN_DO_POWER_RANGE
	ApproachRequiresLOS	 = Yes
	
	SpecialWeapon		 = CreateAHeroAssassinWeapon
	WhichSpecialWeapon	 = 5
	
	LoseStealthOnTrigger = Yes
	PreTriggerUnstealthTime = 2100
End

//--------------------------------------------------------------------------
//	ASSASSIN SPECIAL POWER Level 4
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAssassinEnabler_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAssassin_Level4
	TriggeredBy			 = Upgrade_CreateAHeroAssassin_Level4
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAssassinStarter_Level4
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroAssassin_Level4
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
	InitiateSound			 = HeroEvilManVoiceAttack
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroAssassinUpdate_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAssassin_Level4

	UnpackTime			 = 2000
	PackTime			 = 2000	

	AwardXPForTriggering = 0
	
	StartAbilityRange	 = CREATE_A_HERO_ASSASSIN_DO_POWER_RANGE
	ApproachRequiresLOS	 = Yes
	
	SpecialWeapon		 = CreateAHeroAssassinWeapon
	WhichSpecialWeapon	 = 5
	
	LoseStealthOnTrigger = Yes
	PreTriggerUnstealthTime = 2100
End

//--------------------------------------------------------------------------
//	RAIN OF ARROWS SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroRainOfArrowsEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroRainOfArrows_Level1
	TriggeredBy = Upgrade_CreateAHeroRainOfArrows_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroRainOfArrowsStarter_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroRainOfArrows_Level1
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= LegolasVoiceModeArrowWind		;this plays when he targets, not when he fires
End

Behavior = ArrowStormUpdate ModuleTag_CreateAHeroRainOfArrowsUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroRainOfArrows_Level1
	StartAbilityRange       = CREATE_A_HERO_RAIN_OF_ARROWS_DO_POWER_RANGE
	
	UnpackTime              = 1000	; Pull out arrow
	PreparationTime         = 200	; Quick shot
	PersistentPrepTime      = 600	; looping the quick shot
	PackTime                = 1200	; back to idle
	UnpackingVariation		= 1		; Use custom variation to not interfere with Archer Training ability.
	ParalyzeDurationWhenCompleted = 600	;Once the unit SUCCESSFULLY COMPLETES an ability, paralyze unit briefly to deal with animation transitions.
	ParalyzeDurationWhenAborted = 800	;If the unit ABORTS the ability, paralyze the unit briefly to deal with animation transitions.

	ApproachRequiresLOS     = Yes ; required so that it doesn't shoot through walls

	AwardXPForTriggering    = 0

	;Specific to ArrowStorm
	WeaponTemplate  = CreateAHeroRainOfArrows_Level1	//LegolasBowArrowStorm
	TargetRadius    = 120	;CHANGING THIS??? Change RadiusCursorRadius to match this value in the appropriate SpecialPower.ini template.
	ShotsPerTarget  = CREATE_A_HERO_RAIN_OF_ARROWS_SHOTS_PER_TARGET_L1
	ShotsPerBurst   = CREATE_A_HERO_RAIN_OF_ARROWS_SHOTS_PER_BURST_L1
	MaxShots        = CREATE_A_HERO_RAIN_OF_ARROWS_MAX_SHOTS_L1			// can end sooner if no targets
  	CanShootEmptyGround = Yes ; ...unless this is set
End

//--------------------------------------------------------------------------
//	RAIN OF ARROWS SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroRainOfArrowsEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroRainOfArrows_Level2
	TriggeredBy = Upgrade_CreateAHeroRainOfArrows_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroRainOfArrowsStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroRainOfArrows_Level2
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= LegolasVoiceModeArrowWind		;this plays when he targets, not when he fires
End

Behavior = ArrowStormUpdate ModuleTag_CreateAHeroRainOfArrowsUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroRainOfArrows_Level2
	StartAbilityRange       = CREATE_A_HERO_RAIN_OF_ARROWS_DO_POWER_RANGE
	
	UnpackTime              = 1000	; Pull out arrow
	PreparationTime         = 200	; Quick shot
	PersistentPrepTime      = 600	; looping the quick shot
	PackTime                = 1200	; back to idle
	UnpackingVariation		= 1		; Use custom variation to not interfere with Archer Training ability.
	ParalyzeDurationWhenCompleted = 600	;Once the unit SUCCESSFULLY COMPLETES an ability, paralyze unit briefly to deal with animation transitions.
	ParalyzeDurationWhenAborted = 800	;If the unit ABORTS the ability, paralyze the unit briefly to deal with animation transitions.

	ApproachRequiresLOS     = Yes ; required so that it doesn't shoot through walls

	AwardXPForTriggering    = 0

	;Specific to ArrowStorm
	WeaponTemplate  = CreateAHeroRainOfArrows_Level2	//LegolasBowArrowStorm
	TargetRadius    = 120	;CHANGING THIS??? Change RadiusCursorRadius to match this value in the appropriate SpecialPower.ini template.
	ShotsPerTarget  = CREATE_A_HERO_RAIN_OF_ARROWS_SHOTS_PER_TARGET_L2
	ShotsPerBurst   = CREATE_A_HERO_RAIN_OF_ARROWS_SHOTS_PER_BURST_L2
	MaxShots        = CREATE_A_HERO_RAIN_OF_ARROWS_MAX_SHOTS_L2			// can end sooner if no targets
  	CanShootEmptyGround = Yes ; ...unless this is set
End

//--------------------------------------------------------------------------
//	RAIN OF ARROWS SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroRainOfArrowsEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroRainOfArrows_Level3
	TriggeredBy = Upgrade_CreateAHeroRainOfArrows_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroRainOfArrowsStarter_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroRainOfArrows_Level3
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= LegolasVoiceModeArrowWind		;this plays when he targets, not when he fires
End

Behavior = ArrowStormUpdate ModuleTag_CreateAHeroRainOfArrowsUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroRainOfArrows_Level3
	StartAbilityRange       = CREATE_A_HERO_RAIN_OF_ARROWS_DO_POWER_RANGE
	
	UnpackTime              = 1000	; Pull out arrow
	PreparationTime         = 200	; Quick shot
	PersistentPrepTime      = 600	; looping the quick shot
	PackTime                = 1200	; back to idle
	UnpackingVariation		= 1		; Use custom variation to not interfere with Archer Training ability.
	ParalyzeDurationWhenCompleted = 600	;Once the unit SUCCESSFULLY COMPLETES an ability, paralyze unit briefly to deal with animation transitions.
	ParalyzeDurationWhenAborted = 800	;If the unit ABORTS the ability, paralyze the unit briefly to deal with animation transitions.

	ApproachRequiresLOS     = Yes ; required so that it doesn't shoot through walls

	AwardXPForTriggering    = 0

	;Specific to ArrowStorm
	WeaponTemplate  = CreateAHeroRainOfArrows_Level3	//LegolasBowArrowStorm
	TargetRadius    = 120	;CHANGING THIS??? Change RadiusCursorRadius to match this value in the appropriate SpecialPower.ini template.
	ShotsPerTarget  = CREATE_A_HERO_RAIN_OF_ARROWS_SHOTS_PER_TARGET_L3
	ShotsPerBurst   = CREATE_A_HERO_RAIN_OF_ARROWS_SHOTS_PER_BURST_L3
	MaxShots        = CREATE_A_HERO_RAIN_OF_ARROWS_MAX_SHOTS_L3			// can end sooner if no targets
  	CanShootEmptyGround = Yes ; ...unless this is set
End

//--------------------------------------------------------------------------
//	HEALING SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHealingEnabler_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroHealing_Level1
	TriggeredBy					= Upgrade_CreateAHeroHealing_Level1
End
;;.;;
Behavior = SpecialPowerModule ModuleTag_CreateAHeroHealingPower_Level1
	SpecialPowerTemplate			= SpecialAbilityCreateAHeroHealing_Level1
	UpdateModuleStartsAttack		= Yes
End
;;.;;
Behavior = ActivateModuleSpecialPower ModuleTag_CreateAHeroHealingUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroHealing_Level1
	StartAbilityRange	 	= 1.6
	UnpackTime			 	= 400 ;;.;; 1	 // Nothing to touching it
	PreparationTime		 	= 400 ;;.;; 1	 // touching	it to grabbing it
	PackTime			 	= 2000	 // whacking	it to holding it nice
	AwardXPForTriggering 	= 0
	TriggerSpecialPower  	= ModuleTag_TriggerMode1 OBJECTPOS
	UnpackingVariation		= 5
End
;;.;;
Behavior = PlayerHealSpecialPower ModuleTag_TriggerMode1
	SpecialPowerTemplate		= SpecialAbilityActivateeDummyOne
	StartsPaused				= Yes
	HealAffects					= INFANTRY CAVALRY MONSTER
	HealAmount					= CREATE_A_HERO_HEALING_AMOUNT_L1	// percent of max health
	HealRadius					= CREATE_A_HERO_HEALING_RADIUS_L1
	HealFX						= FX_SpellHealUnitHealBuff
End


//--------------------------------------------------------------------------
//	HEALING SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroHealingEnabler_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroHealing_Level2
	TriggeredBy					= Upgrade_CreateAHeroHealing_Level2
End
;;.;;
Behavior = SpecialPowerModule ModuleTag_CreateAHeroHealingPower_Level2
	SpecialPowerTemplate			= SpecialAbilityCreateAHeroHealing_Level2
	UpdateModuleStartsAttack		= Yes
End
;;.;;
Behavior = ActivateModuleSpecialPower ModuleTag_CreateAHeroHealingUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroHealing_Level2
	StartAbilityRange	 	= 1.6
	UnpackTime			 	= 400 ;;.;; 1	 // Nothing to touching it
	PreparationTime		 	= 400 ;;.;; 1	 // touching	it to grabbing it
	PackTime			 	= 2000	 // whacking	it to holding it nice
	AwardXPForTriggering 	= 0
	TriggerSpecialPower  	= ModuleTag_TriggerMode2 OBJECTPOS
	UnpackingVariation		= 5
End
;;.;;
Behavior = PlayerHealSpecialPower ModuleTag_TriggerMode2
	SpecialPowerTemplate		= SpecialAbilityActivateeDummyTwo
	StartsPaused				= Yes
	HealAffects					= INFANTRY CAVALRY MONSTER
	HealAmount					= CREATE_A_HERO_HEALING_AMOUNT_L2	// percent of max health
	HealRadius					= CREATE_A_HERO_HEALING_RADIUS_L2
	HealFX						= FX_SpellHealUnitHealBuff
End


//--------------------------------------------------------------------------	
//	ARROW BONUS SPECIAL POWER Level 1
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroArrowBonusEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroArrowBonus_Level1
	TriggeredBy = Upgrade_CreateAHeroArrowBonus_Level1
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroArrowBonusStarter_Level1
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroArrowBonus_Level1
	UpdateModuleStartsAttack  = Yes
	StartsPaused = Yes
End

//--------------------------------------------------------------------------	
//	ARROW BONUS SPECIAL POWER Level 2
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroArrowBonusEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroArrowBonus_Level2
	TriggeredBy = Upgrade_CreateAHeroArrowBonus_Level2
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroArrowBonusStarter_Level2
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroArrowBonus_Level2
	UpdateModuleStartsAttack  = Yes
	StartsPaused = Yes
End

//--------------------------------------------------------------------------	
//	ARROW BONUS SPECIAL POWER Level 3
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroArrowBonusEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroArrowBonus_Level3
	TriggeredBy = Upgrade_CreateAHeroArrowBonus_Level3
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroArrowBonusStarter_Level3
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroArrowBonus_Level3
	UpdateModuleStartsAttack  = Yes
	StartsPaused = Yes
End

//--------------------------------------------------------------------------	
//	ARROW BONUS SPECIAL POWER Level 4
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroArrowBonusEnabler_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroArrowBonus_Level4
	TriggeredBy = Upgrade_CreateAHeroArrowBonus_Level4
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroArrowBonusStarter_Level4
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroArrowBonus_Level4
	UpdateModuleStartsAttack  = Yes
	StartsPaused = Yes
End

//--------------------------------------------------------------------------	
//	SUMMON FAMILIAR SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSummonFamiliarEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSummonFamiliar_Level1
	TriggeredBy = Upgrade_CreateAHeroSummonFamiliar_Level1
End
Behavior = OCLSpecialPower ModuleTag_CreateAHeroSummonFamiliarPower_Level1
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroSummonFamiliar_Level1
	OCL						= OCL_CreateAHeroSummonFamiliar_Level1
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
//	SUMMON FAMILIAR SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSummonFamiliarEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSummonFamiliar_Level2
	TriggeredBy = Upgrade_CreateAHeroSummonFamiliar_Level2
End
Behavior = OCLSpecialPower ModuleTag_CreateAHeroSummonFamiliarPower_Level2
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroSummonFamiliar_Level2
	OCL						= OCL_CreateAHeroSummonFamiliar_Level2
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------	
//	SUMMON FAMILIAR SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSummonFamiliarEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSummonFamiliar_Level3
	TriggeredBy = Upgrade_CreateAHeroSummonFamiliar_Level3
End
Behavior = OCLSpecialPower ModuleTag_CreateAHeroSummonFamiliarPower_Level3
	SpecialPowerTemplate	= SpecialAbilityCreateAHeroSummonFamiliar_Level3
	OCL						= OCL_CreateAHeroSummonFamiliar_Level3
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
	SetModelCondition		= ModelConditionState:USER_1
	SetModelConditionTime	= 8.1
End

//--------------------------------------------------------------------------
//	SPAWN TORNADO SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSpawnTornadoEnabler_Level1
	SpecialPowerTemplate	= SpecialPowerCreateAHeroSpawnTornado_Level1
	TriggeredBy				= Upgrade_CreateAHeroSpawnTornado_Level1
End
Behavior = OCLSpecialPower	ModuleTag_OCLSpawnTornado_Level1
	SpecialPowerTemplate	= SpecialPowerCreateAHeroSpawnTornado_Level1
	OCL						= OCL_CreateAHeroSpawnTornado_Level1
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
End

Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSpawnTornadoEnabler_Level2
	SpecialPowerTemplate	= SpecialPowerCreateAHeroSpawnTornado_Level2
	TriggeredBy				= Upgrade_CreateAHeroSpawnTornado_Level2
End
Behavior = OCLSpecialPower	ModuleTag_OCLSpawnTornado_Level2
	SpecialPowerTemplate	= SpecialPowerCreateAHeroSpawnTornado_Level2
	OCL						= OCL_CreateAHeroSpawnTornado_Level2
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
End

Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSpawnTornadoEnabler_Level3
	SpecialPowerTemplate	= SpecialPowerCreateAHeroSpawnTornado_Level3
	TriggeredBy				= Upgrade_CreateAHeroSpawnTornado_Level3
End
Behavior = OCLSpecialPower	ModuleTag_OCLSpawnTornado_Level3
	SpecialPowerTemplate	= SpecialPowerCreateAHeroSpawnTornado_Level3
	OCL						= OCL_CreateAHeroSpawnTornado_Level3
	CreateLocation			= CREATE_AT_LOCATION
	StartsPaused			= Yes
End

//--------------------------------------------------------------------------
//	AXE THROW SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAxeThrowEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAxeThrow_Level1
	TriggeredBy = Upgrade_CreateAHeroAxeThrow_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAxeThrowStarter_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroAxeThrow_Level1
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroAxeThrowUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroAxeThrow_Level1

	UnpackTime              = 1500
	PackTime                = 1000

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_AXE_THROW_DO_POWER_RANGE
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroAxeThrow
	WhichSpecialWeapon = 5
End

//--------------------------------------------------------------------------
//	AXE THROW SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAxeThrowEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAxeThrow_Level2
	TriggeredBy = Upgrade_CreateAHeroAxeThrow_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAxeThrowStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroAxeThrow_Level2
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroAxeThrowUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroAxeThrow_Level2

	UnpackTime              = 1500
	PackTime                = 1000

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_AXE_THROW_DO_POWER_RANGE
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroAxeThrow
	WhichSpecialWeapon = 5
End

//--------------------------------------------------------------------------
//	AXE THROW SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroAxeThrowEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroAxeThrow_Level3
	TriggeredBy = Upgrade_CreateAHeroAxeThrow_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroAxeThrowStarter_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroAxeThrow_Level3
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroAxeThrowUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroAxeThrow_Level3

	UnpackTime              = 1500
	PackTime                = 1000

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_AXE_THROW_DO_POWER_RANGE
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroAxeThrow
	WhichSpecialWeapon = 5
End

//--------------------------------------------------------------------------
//	EARTH SHAKER SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroEarthShakerEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroEarthShaker_Level1
	TriggeredBy = Upgrade_CreateAHeroEarthShaker_Level1
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroEarthShakerStarter_Level1
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroEarthShaker_Level1
	UpdateModuleStartsAttack  = Yes
	StartsPaused		  	  = Yes
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroEarthShakerUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroEarthShaker_Level1
	SpecialWeapon			= CreateAHeroEarthShaker_Level1
	WhichSpecialWeapon		= 3			; Corresponds to SPECIAL_WEAPON_THREE
	StartAbilityRange		= 1.0
	
	SkipContinue			= Yes
	UnpackTime				= 2000		; Trigger on frame 60 (of 100)
	PackTime				= 1333		; Remaining 40 frames (of 100)
	MustFinishAbility		= Yes
End

//--------------------------------------------------------------------------
//	EARTH SHAKER SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroEarthShakerEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroEarthShaker_Level2
	TriggeredBy = Upgrade_CreateAHeroEarthShaker_Level2
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroEarthShakerStarter_Level2
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroEarthShaker_Level2
	UpdateModuleStartsAttack  = Yes
	StartsPaused		  	  = Yes
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroEarthShakerUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroEarthShaker_Level2
	SpecialWeapon			= CreateAHeroEarthShaker_Level2
	WhichSpecialWeapon		= 3			; Corresponds to SPECIAL_WEAPON_THREE
	StartAbilityRange		= 1.0
	
	SkipContinue			= Yes
	UnpackTime				= 2000		; Trigger on frame 60 (of 100)
	PackTime				= 1333		; Remaining 40 frames (of 100)
	MustFinishAbility		= Yes
End

//--------------------------------------------------------------------------
//	EARTH SHAKER SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroEarthShakerEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroEarthShaker_Level3
	TriggeredBy = Upgrade_CreateAHeroEarthShaker_Level3
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroEarthShakerStarter_Level3
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroEarthShaker_Level3
	UpdateModuleStartsAttack  = Yes
	StartsPaused		  	  = Yes
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroEarthShakerUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroEarthShaker_Level3
	SpecialWeapon			= CreateAHeroEarthShaker_Level3
	WhichSpecialWeapon		= 3			; Corresponds to SPECIAL_WEAPON_THREE
	StartAbilityRange		= 1.0
	
	SkipContinue			= Yes
	UnpackTime				= 2000		; Trigger on frame 60 (of 100)
	PackTime				= 1333		; Remaining 40 frames (of 100)
	MustFinishAbility		= Yes
End

//--------------------------------------------------------------------------
//	LEAP SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroLeapEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroLeap_Level1
	TriggeredBy = Upgrade_CreateAHeroLeap_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroLeapStarter_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroLeap_Level1
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= GimliVoiceAttackLeap
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroLeapUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroLeap_Level1

	UnpackTime              = 600
	PackTime                = 300 ; Putting horn away

	AwardXPForTriggering    = 0
	
	StartAbilityRange = 100.0
	
	SpecialWeapon = CreateAHeroLeap
	BusyForDuration = 2000 ; don't accept any AI for this long... ai commands will be queued

;		ApproachRequiresLOS = No
	WhichSpecialWeapon = 2
    //TriggerSound = GimliLeapVoice
End

//--------------------------------------------------------------------------
//	LEAP SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroLeapEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroLeap_Level2
	TriggeredBy = Upgrade_CreateAHeroLeap_Level2
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroLeapStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroLeap_Level2
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= GimliVoiceAttackLeap
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroLeapUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroLeap_Level2

	UnpackTime              = 600
	PackTime                = 300 ; Putting horn away

	AwardXPForTriggering    = 0
	
	StartAbilityRange = 100.0
	
	SpecialWeapon = CreateAHeroLeap
	BusyForDuration = 2000 ; don't accept any AI for this long... ai commands will be queued

;		ApproachRequiresLOS = No
	WhichSpecialWeapon = 2
    //TriggerSound = GimliLeapVoice
End

//--------------------------------------------------------------------------	
//	CHARGE SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroChargeEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCharge_Level1
	TriggeredBy = Upgrade_CreateAHeroCharge_Level1
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroChargeStarter_Level1
	SpecialPowerTemplate	 = SpecialAbilityCreateAHeroCharge_Level1
	UpdateModuleStartsAttack = Yes
	StartsPaused			 = Yes
End
Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroChargeUpdate_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroCharge_Level1
	StartAbilityRange			= 150.0 ;//Negative distances will cause the unit to overshoot the destination.
	AbilityAbortRange			= 50.0
	PreparationTime				= 0 
	PackTime					= 3000  ;// without this pack time, the charge would not complete
	//TriggerSound				= GondorSoldierVoiceEnterStateAttackCharge
	TriggerAttributeModifier	= CreateAHeroChargeBonus_Level1
	AttributeModifierDuration	= 20000
	ChargeAttackSpeedBoost		= Yes
	IgnoreFacingCheck			= Yes
End

//--------------------------------------------------------------------------	
//	CHARGE SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroChargeEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCharge_Level2
	TriggeredBy = Upgrade_CreateAHeroCharge_Level2
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroChargeStarter_Level2
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroCharge_Level2
	UpdateModuleStartsAttack  = Yes
	StartsPaused			 = Yes

End
Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroChargeUpdate_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroCharge_Level2
	StartAbilityRange			= 150.0 ;//Negative distances will cause the unit to overshoot the destination.
	AbilityAbortRange			= 50.0
	PreparationTime				= 0 
	PackTime					= 3000  ;// without this pack time, the charge would not complete
	//TriggerSound				= GondorSoldierVoiceEnterStateAttackCharge
	TriggerAttributeModifier	= CreateAHeroChargeBonus_Level2
	AttributeModifierDuration	= 20000
	ChargeAttackSpeedBoost		= Yes
	IgnoreFacingCheck			= Yes
End

//--------------------------------------------------------------------------	
//	CHARGE SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroChargeEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroCharge_Level3
	TriggeredBy = Upgrade_CreateAHeroCharge_Level3
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroChargeStarter_Level3
	SpecialPowerTemplate      = SpecialAbilityCreateAHeroCharge_Level3
	UpdateModuleStartsAttack  = Yes
	StartsPaused			 = Yes
End
Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroChargeUpdate_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroCharge_Level3
	StartAbilityRange			= 150.0 ;//Negative distances will cause the unit to overshoot the destination.
	AbilityAbortRange			= 50.0
	UnpackTime					= 400 ;;.;; 1000
	PreparationTime				= 400 ;;.;;  0
	PackTime					= 3000  ;// without this pack time, the charge would not complete
	//TriggerSound				= GondorSoldierVoiceEnterStateAttackCharge
	TriggerAttributeModifier	= CreateAHeroChargeBonus_Level3
	AttributeModifierDuration	= 20000
	ChargeAttackSpeedBoost		= Yes
	IgnoreFacingCheck			= Yes
	UnpackingVariation			= 1
End

//--------------------------------------------------------------------------
//	SAPPER SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSapperEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSapper_Level1
	TriggeredBy = Upgrade_CreateAHeroSapper_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroSapperStarter_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroSapper_Level1
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroSapperUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroSapper_Level1

	UnpackTime              = 2000
	PackTime                = 2000

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_SAPPER_DO_POWER_RANGE
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroSapper_Level1
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------
//	SAPPER SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSapperEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSapper_Level2
	TriggeredBy = Upgrade_CreateAHeroSapper_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroSapperStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroSapper_Level2
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroSapperUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroSapper_Level2

	UnpackTime              = 2000
	PackTime                = 2000

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_SAPPER_DO_POWER_RANGE
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroSapper_Level2
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------
//	SAPPER SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroSapperEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroSapper_Level3
	TriggeredBy = Upgrade_CreateAHeroSapper_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroSapperStarter_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroSapper_Level3
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
	//InitiateSound			= EomerVoiceAttackSpear
End

Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroSapperUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroSapper_Level3

	UnpackTime              = 2000
	PackTime                = 2000

	AwardXPForTriggering    = 0
	
	StartAbilityRange		= CREATE_A_HERO_SAPPER_DO_POWER_RANGE
	ApproachRequiresLOS		= Yes
	
	SpecialWeapon = CreateAHeroSapper_Level3
	WhichSpecialWeapon = 1
End

//--------------------------------------------------------------------------
//	BOMBARD SPECIAL POWER Level 1
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBombard_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBombard_Level1
	TriggeredBy = Upgrade_CreateAHeroBombard_Level1
End
//Behavior = OCLSpecialPower ModuleTag_CreateAHeroBombardPower_Level1
//	SpecialPowerTemplate = SpecialAbilityCreateAHeroBombard_Level1
//	OCL                  = OCL_CreateAHeroBombardSeed_Level1
//	CreateLocation       = USE_SECONDARY_OBJECT_LOCATION
//	NearestSecondaryObjectFilter = NONE SAME_PLAYER +CASTLE_KEEP 
//	StartsPaused		 = Yes
//End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroBombardStarter_Level1
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroBombard_Level1
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroBombardUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroBombard_Level1
	WhichSpecialWeapon		= 4							; use MODELCONDITION_SPECIAL_WEAPON_FOUR
	SkipContinue			= Yes

	UnpackTime              = 900
	PreparationTime         = 1   
	PersistentPrepTime      = 1500 
	PackTime                = 1100
	
	FreezeAfterTriggerDuration	= 2500					; make sure we can't move immediately after.

	AwardXPForTriggering    = 0		
	StartAbilityRange		= 300.0
	MustFinishAbility		= Yes
	SpecialWeapon			= CreateAHeroBombardWeapon
End

//--------------------------------------------------------------------------
//	BOMBARD SPECIAL POWER Level 2
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBombard_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBombard_Level2
	TriggeredBy = Upgrade_CreateAHeroBombard_Level2
End
//Behavior = OCLSpecialPower ModuleTag_CreateAHeroBombardPower_Level2
//	SpecialPowerTemplate = SpecialAbilityCreateAHeroBombard_Level2
//	OCL                  = OCL_CreateAHeroBombardSeed_Level2
//	CreateLocation       = USE_SECONDARY_OBJECT_LOCATION
//	NearestSecondaryObjectFilter = NONE SAME_PLAYER +CASTLE_KEEP 
//	StartsPaused		 = Yes
//End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroBombardStarter_Level2
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroBombard_Level2
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroBombardUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroBombard_Level2
	WhichSpecialWeapon		= 4							; use MODELCONDITION_SPECIAL_WEAPON_FOUR
	SkipContinue			= Yes

	UnpackTime              = 900
	PreparationTime         = 1   
	PersistentPrepTime      = 1500 
	PackTime                = 1100
	
	FreezeAfterTriggerDuration	= 2500					; make sure we can't move immediately after.

	AwardXPForTriggering    = 0		
	StartAbilityRange		= 300.0
	MustFinishAbility		= Yes
	SpecialWeapon			= CreateAHeroBombardWeapon
End

//--------------------------------------------------------------------------
//	BOMBARD SPECIAL POWER Level 3
//--------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBombard_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBombard_Level3
	TriggeredBy = Upgrade_CreateAHeroBombard_Level3
End
//Behavior = OCLSpecialPower ModuleTag_CreateAHeroBombardPower_Level3
//	SpecialPowerTemplate = SpecialAbilityCreateAHeroBombard_Level3
//	OCL                  = OCL_CreateAHeroBombardSeed_Level3
//	CreateLocation       = USE_SECONDARY_OBJECT_LOCATION
//	NearestSecondaryObjectFilter = NONE SAME_PLAYER +CASTLE_KEEP 
//	StartsPaused		 = Yes
//End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroBombardStarter_Level3
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroBombard_Level3
	UpdateModuleStartsAttack	= Yes
	StartsPaused			= Yes
End
Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_CreateAHeroBombardUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroBombard_Level3
	WhichSpecialWeapon		= 4							; use MODELCONDITION_SPECIAL_WEAPON_FOUR
	SkipContinue			= Yes

	UnpackTime              = 900
	PreparationTime         = 1   
	PersistentPrepTime      = 1500 
	PackTime                = 1100
	
	FreezeAfterTriggerDuration	= 2500					; make sure we can't move immediately after.

	AwardXPForTriggering    = 0		
	StartAbilityRange		= 300.0
	MustFinishAbility		= Yes
	SpecialWeapon			= CreateAHeroBombardWeapon
End

//--------------------------------------------------------------------------	
//	TOUGHNESS SPECIAL POWER
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroToughnessEnabler
	SpecialPowerTemplate = SpecialAbilityCreateAHeroToughness
	TriggeredBy = Upgrade_CreateAHeroToughness
End
Behavior = SpecialPowerModule ModuleTag_CreateAHeroToughnessStarter
	SpecialPowerTemplate		= SpecialAbilityCreateAHeroToughness
	UpdateModuleStartsAttack	= Yes
	StartsPaused				= Yes
End
Behavior = AttributeModifierAuraUpdate ModuleTag_CreateAHeroToughnessUpdate	//	TODO figure out how to do this as a one time thing
	StartsActive		= No ;If no, requires upgrade to turn on.
	BonusName		= CreateAHeroToughnessBonus
	TriggeredBy		= Upgrade_CreateAHeroToughness
	RefreshDelay	= 2000
	Range			= 0
	AllowSelf		= Yes
End

//--------------------------------------------------------------------------	
//	BATTLE RAGE SPECIAL POWER Level 1
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBattleRageEnabler_Level1
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBattleRage_Level1
	TriggeredBy			 = Upgrade_CreateAHeroBattleRage_Level1
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroBattleRagePower_Level1
	SpecialPowerTemplate		 = SpecialAbilityCreateAHeroBattleRage_Level1
	UpdateModuleStartsAttack	 = Yes
	StartsPaused				 = Yes
	;;.;;	AttributeModifier			 = CreateAHeroBattleRageBonus_Level1
	;;.;;	AttributeModifierRange		 = 1
	;;.;;	AttributeModifierAffectsSelf = Yes
	;;.;;	AttributeModifierAffects	 = ANY +CAVALRY	+INFANTRY
	//AttributeModifierFX			 = FX_CreateAHeroBattleRage
End	
Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroBattleRagePowerUpdate_Level1
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroBattleRage_Level1
	UnpackTime             = 200 ;;.;; 1  ;// (changing this will scale anim speed)
	PreparationTime        = 200 ;;.;; 1 ;// time to complete hack once prepared (changing this will scale anim speed)
	PackTime               = 3000  ;// (changing this will scale anim speed)
	UnpackingVariation	   = 6
		TriggerAttributeModifier			= CreateAHeroBattleRageBonus_Level1 ;;.;;
		AttributeModifierDuration			= 20000 ;;.;;
End


//--------------------------------------------------------------------------	
//	BATTLE RAGE SPECIAL POWER Level 2
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBattleRageEnabler_Level2
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBattleRage_Level2
	TriggeredBy			 = Upgrade_CreateAHeroBattleRage_Level2
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroBattleRagePower_Level2
	SpecialPowerTemplate		 = SpecialAbilityCreateAHeroBattleRage_Level2
	UpdateModuleStartsAttack	 = No
	StartsPaused				 = Yes
	;;.;;	AttributeModifier			 = CreateAHeroBattleRageBonus_Level2
	;;.;;	AttributeModifierRange		 = 1
	;;.;;	AttributeModifierAffectsSelf = Yes
	;;.;;	AttributeModifierAffects	 = ANY +CAVALRY	+INFANTRY
	//AttributeModifierFX			 = FX_CreateAHeroBattleRage
End
Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroBattleRagePowerUpdate_Level2
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroBattleRage_Level2
	UnpackTime             = 300 ;;.;; 1  ;// (changing this will scale anim speed)
	PreparationTime        = 300 ;;.;; 1 ;// time to complete hack once prepared (changing this will scale anim speed)
	PackTime               = 3000  ;// (changing this will scale anim speed)
	UnpackingVariation	   = 6
		TriggerAttributeModifier			= CreateAHeroBattleRageBonus_Level2 ;;.;;
		AttributeModifierDuration			= 40000 ;;.;;
End



//--------------------------------------------------------------------------	
//	BATTLE RAGE SPECIAL POWER Level 3
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBattleRageEnabler_Level3
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBattleRage_Level3
	TriggeredBy			 = Upgrade_CreateAHeroBattleRage_Level3
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroBattleRagePower_Level3
	SpecialPowerTemplate		 = SpecialAbilityCreateAHeroBattleRage_Level3
	UpdateModuleStartsAttack	 = No
	StartsPaused				 = Yes
	;;.;;	AttributeModifier			 = CreateAHeroBattleRageBonus_Level3
	;;.;;	AttributeModifierRange		 = 1
	;;.;;	AttributeModifierAffectsSelf = Yes
	;;.;;	AttributeModifierAffects	 = ANY +CAVALRY	+INFANTRY
	//AttributeModifierFX			 = FX_CreateAHeroBattleRage
End
Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroBattleRagePowerUpdate_Level3
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroBattleRage_Level3
	UnpackTime             = 400 ;;.;; 1  ;// (changing this will scale anim speed)
	PreparationTime        = 400 ;;.;; 1 ;// time to complete hack once prepared (changing this will scale anim speed)
	PackTime               = 3000  ;// (changing this will scale anim speed)
	UnpackingVariation	   = 6
		TriggerAttributeModifier			= CreateAHeroBattleRageBonus_Level3 ;;.;;
		AttributeModifierDuration			= 60000 ;;.;;
End



//--------------------------------------------------------------------------	
//	BATTLE RAGE SPECIAL POWER Level 4
//--------------------------------------------------------------------------	
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_CreateAHeroBattleRageEnabler_Level4
	SpecialPowerTemplate = SpecialAbilityCreateAHeroBattleRage_Level4
	TriggeredBy			 = Upgrade_CreateAHeroBattleRage_Level4
End

Behavior = SpecialPowerModule ModuleTag_CreateAHeroBattleRagePower_Level4
	SpecialPowerTemplate		 = SpecialAbilityCreateAHeroBattleRage_Level4
	UpdateModuleStartsAttack	 = No
	StartsPaused				 = Yes
	;;.;;	AttributeModifier			 = CreateAHeroBattleRageBonus_Level4
	;;.;;	AttributeModifierRange		 = 1
	;;.;;	AttributeModifierAffectsSelf = Yes
	;;.;;	AttributeModifierAffects	 = ANY +CAVALRY	+INFANTRY
	//AttributeModifierFX			 = FX_CreateAHeroBattleRage
End
Behavior = SpecialAbilityUpdate ModuleTag_CreateAHeroBattleRagePowerUpdate_Level4
	SpecialPowerTemplate    = SpecialAbilityCreateAHeroBattleRage_Level4
	UnpackTime             = 500 ;;.;; 1  ;// (changing this will scale anim speed)
	PreparationTime        = 500 ;;.;; 1 ;// time to complete hack once prepared (changing this will scale anim speed)
	PackTime               = 3000  ;// (changing this will scale anim speed)
	UnpackingVariation	   = 6
		TriggerAttributeModifier			= CreateAHeroBattleRageBonus_Level4 ;;.;;
		AttributeModifierDuration			= 90000 ;;.;;
End

