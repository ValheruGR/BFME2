	//=====================================================================================================
	// These are the model condition upgrades that handle switching between the various diferent models 
	// that are used by the Creat A Hero object. Each upgrade is triggered by two seperate upgrades//
	// one for the 'Class' and one for the 'SubClass'. There are also a set of related upgrades that
	// deal ensure that only the correct upgrades are active at any one point in time. See the 
	// CreateAHeroRemoveUpgradeUpgrades.inc file for these 'upgrades'.
	//=====================================================================================================
	
	//==============================================================
	//	Class				0	1	2	3	4	5	6	7
	//	HeroOfTheWest		X	X	X	X	.	.	.	.
	// Archer				X	X	.	.	.	.	.	.
	//	IstariWizard		X	.	.	.	.	.	.	.
	//	ServantsOfSauron	X	X	X	X	.	.	.	.
	//	Dwarf				.	.	X	.	.	.	.	.
	// CorruptedMan		X	X	.	.	.	.	.	.
	//==============================================================
	
	//=====================================================================================================
	// Model condition for when in the Create A Hero screens.
	Behavior = ModelConditionUpgrade ModuleTag_CreateAHeroMapMode
		TriggeredBy					= Upgrade_CreateAHeroMapMode
		RequiresAllTriggers			= Yes
		AddConditionFlags			= CREATE_A_HERO_IN_CREATION_SCREEN
	End
	// Model condition for when in the Create A Hero screens.
	Behavior = ModelConditionUpgrade ModuleTag_CreateAHeroGameMode
		TriggeredBy					= Upgrade_CreateAHeroGameMode
		RequiresAllTriggers			= Yes
		RemoveConditionFlags		= CREATE_A_HERO_IN_CREATION_SCREEN
	End
	//=====================================================================================================

	// Note: If you change the numbering in this file or add more, be sure to change/add to FX_CreateAHeroDie, too.

	//------------------------------------------------------------------------------------------------------
	// CAPTAIN OF GONDOR
	Behavior = ModelConditionUpgrade ModuleTag_HeroOfTheWest_SubClass_0
		TriggeredBy					= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_00
	End

	// CAPTAIN OF GONDOR (Create A Hero Map Mode)
	Behavior = ModelConditionUpgrade ModuleTag_HeroOfTheWest_SubClass_0_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_01
	End

	//------------------------------------------------------------------------------------------------------
	// Upgrade for Shield Maiden
	Behavior = ModelConditionUpgrade ModuleTag_HeroOfTheWest_SubClass_1
		TriggeredBy					= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_02
    End
	// Upgrade for Shield Maiden (Create A Hero Map Mode)
	Behavior = ModelConditionUpgrade ModuleTag_HeroOfTheWest_SubClass_1_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_03
	End

	//------------------------------------------------------------------------------------------------------
	// Upgrade for Young Wizard 
	Behavior = ModelConditionUpgrade ModuleTag_IstariWizard_SubClass_0
		TriggeredBy					= Upgrade_CreateAHero_ClassIstariWizard	Upgrade_CreateAHero_SubClass_0
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_04
	End
	// Upgrade for Young Wizard	(Create A Hero Map Mode)
	Behavior = ModelConditionUpgrade ModuleTag_IstariWizard_SubClass_0_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassIstariWizard	Upgrade_CreateAHero_SubClass_0
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_05
	End

	//------------------------------------------------------------------------------------------------------
	// Upgrade for Avatar Wizard
	Behavior = ModelConditionUpgrade ModuleTag_IstariWizard_SubClass_1
		TriggeredBy					= Upgrade_CreateAHero_ClassIstariWizard	Upgrade_CreateAHero_SubClass_1
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_06
	End
	// Upgrade for Avatar Wizard (Create A Hero Map Mode)
	Behavior = ModelConditionUpgrade ModuleTag_IstariWizard_SubClass_1_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_07
	End
	
	//------------------------------------------------------------------------------------------------------
	// Upgrade for Hermit Wizard 
	Behavior = ModelConditionUpgrade ModuleTag_IstariWizard_SubClass_2
		TriggeredBy					= Upgrade_CreateAHero_ClassIstariWizard	Upgrade_CreateAHero_SubClass_2
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_08
	End
	// Upgrade for Hermit Wizard (Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_IstariWizard_SubClass_2_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassIstariWizard	Upgrade_CreateAHero_SubClass_2
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_09
	End
	
	//------------------------------------------------------------------------------------------------------
	// Upgrade for Troll
	Behavior = ModelConditionUpgrade ModuleTag_ServantsOfSauron_SubClass_0
		TriggeredBy					= Upgrade_CreateAHero_ClassServantsOfSauron	Upgrade_CreateAHero_SubClass_0
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_10
	End
	// Upgrade for Troll (Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_ServantsOfSauron_SubClass_0_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassServantsOfSauron	Upgrade_CreateAHero_SubClass_0
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_11
	End

	//------------------------------------------------------------------------------------------------------
	Behavior = ModelConditionUpgrade ModuleTag_AllFactionModelCondition
	TriggeredBy					= Upgrade_MordorFaction Upgrade_GoblinFaction Upgrade_IsengardFaction ; ;  Upgrade_AllFactionUpgrade
		AddConditionFlags			= PREORDER
	End
	
	//------------------------------------------------------------------------------------------------------
	// Upgrade for Elven Archer
	Behavior = ModelConditionUpgrade ModuleTag_Archer_SubClass_0
		TriggeredBy					= Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_12
	End
	// Upgrade for Elven Archer (Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_Archer_SubClass_0_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_13
	End

	//------------------------------------------------------------------------------------------------------
	// Upgrade for Female Elven Archer
	Behavior = ModelConditionUpgrade ModuleTag_Archer_SubClass_1
		TriggeredBy					= Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_14
	End
	// Upgrade for Female Elven Archer (Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_Archer_SubClass_1_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_15
	End
	
	//------------------------------------------------------------------------------------------------------
	// Upgrade for Corrupted Man #1
	Behavior = ModelConditionUpgrade ModuleTag_CorruptedMan_SubClass_0
		TriggeredBy					= Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_16
	End
	// Upgrade for Corrupted Man #1	(Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_CorruptedMan_SubClass_0_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_17
	End
	
	//------------------------------------------------------------------------------------------------------
	// Upgrade for Corrupted Man #2
	Behavior = ModelConditionUpgrade ModuleTag_CorruptedMan_SubClass_1
		TriggeredBy					= Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_18
	End
	// Upgrade for Corrupted Man #2 (Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_CorruptedMan_SubClass_1_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_19
	End
	
	//------------------------------------------------------------------------------------------------------
	// Upgrade for Dwarf Taskmaster
	Behavior = ModelConditionUpgrade ModuleTag_Dwarf_SubClass_0
		TriggeredBy					= Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_20
	End
	// Upgrade for Dwarf Taskmaster (Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_Dwarf_SubClass_0_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_21
	End

	//------------------------------------------------------------------------------------------------------
	// Upgrade for Dwarf Sage
	Behavior = ModelConditionUpgrade ModuleTag_Dwarf_SubClass_1
		TriggeredBy					= Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_22
	End
	// Upgrade for Dwarf Sage (Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_Dwarf_SubClass_1_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_23
	End
	
	//------------------------------------------------------------------------------------------------------
	// Upgrade for Orc Raider
	Behavior = ModelConditionUpgrade ModuleTag_ServantsOfSauron_SubClass_2
		TriggeredBy					= Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_24
	End
	// Upgrade for Orc Raider (Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_ServantsOfSauron_SubClass_2_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_25
	End
	
	
	//------------------------------------------------------------------------------------------------------
	// Upgrade for Uruk 
	Behavior = ModelConditionUpgrade ModuleTag_ServantsOfSauron_SubClass_3
		TriggeredBy					= Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
		ConflictsWith				= Upgrade_CreateAHeroMapMode 
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_26
	End
	// Upgrade for Uruk (Creation Screen)
	Behavior = ModelConditionUpgrade ModuleTag_ServantsOfSauron_SubClass_3_MM
		TriggeredBy					= Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
		RequiresAllTriggers			= Yes
		RemoveConditionFlagsInRange	= CREATE_A_HERO_00 CREATE_A_HERO_65
		AddConditionFlags			= CREATE_A_HERO_27
	End

