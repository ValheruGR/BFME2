//---------------------------------------------------------------------------------
// This file contains the weapon upgrades for the Create a Hero there are also two 
// other support files for Create a Hero Weapons, CreateAHeroDrawModules.inc and 
// CreateAHeroRemoveUpgradeUpgrades.inc.
//---------------------------------------------------------------------------------
WeaponSet
	Conditions			   = None
End
//-------------------------------------------------------------
// Dwarven Axe	Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_01		
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	Weapon				   = TERTIARY CreateAHeroAxeThrow
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon1
	TriggeredBy			   = Upgrade_CHW01
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_01
End
Behavior = SubObjectsUpgrade Dwarf_Upgrade
	TriggeredBy			   = Upgrade_CHW01
	ShowSubObjects		   = AXE_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//-------------------------------------------------------------
// Belthronding	Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions				= WEAPONSET_CREATE_A_HERO_WS_02 WEAPONSET_TOGGLE_1
	Weapon					= PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources		= PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions				= WEAPONSET_CREATE_A_HERO_WS_02		
	Weapon					=	PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources		= PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon2
	TriggeredBy			   = Upgrade_CHW02
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_02
End
Behavior = SubObjectsUpgrade Belthronding_Upgrade
	TriggeredBy			   = Upgrade_CHW02
	ShowSubObjects		   = Belthronding
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Belthronding_ArcherSword_Upgrade
	TriggeredBy			   = Upgrade_CHW02
	ShowSubObjects		   = WestronSword
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//-------------------------------------------------------------
// Gurthang	(Sword)	Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_03		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon3
	TriggeredBy			   = Upgrade_CHW03
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_03
End
Behavior = SubObjectsUpgrade Gurthang_Upgrade
	TriggeredBy			   = Upgrade_CHW03
	ShowSubObjects		   = Gurthang 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//Behavior				   = SubObjectsUpgrade Belthronding_Upgrade_3
//	TriggeredBy			   = Upgrade_CHW03
//	ShowSubObjects		   = Belthronding 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End

//-------------------------------------------------------------
// Westron (Sword) Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_04		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon4
	TriggeredBy			   = Upgrade_CHW04
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_04
End
Behavior = SubObjectsUpgrade WestronSword_Upgrade
	TriggeredBy			   = Upgrade_CHW04
	ShowSubObjects		   = WestronSword 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//Behavior				   = SubObjectsUpgrade Belthronding_Upgrade_4
//	TriggeredBy			   = Upgrade_CHW04
//	ShowSubObjects		   = Belthronding 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End
//-------------------------------------------------------------
// TrollBane (Sword) Weapon	upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_05		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon5
	TriggeredBy			   = Upgrade_CHW05
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_05
End
Behavior = SubObjectsUpgrade TrollBane_Upgrade
	TriggeredBy			   = Upgrade_CHW05
	ShowSubObjects		   = TrollBane 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//Behavior				   = SubObjectsUpgrade Belthronding_Upgrade_5
//	TriggeredBy			   = Upgrade_CHW05
//	ShowSubObjects		   = Belthronding 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End
//-------------------------------------------------------------
// FireBrand (Sword) Weapon	upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_06		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon6
	TriggeredBy			   = Upgrade_CHW06
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_06
End
Behavior = SubObjectsUpgrade FireBrand_Upgrade
	TriggeredBy			   = Upgrade_CHW06
	ShowSubObjects		   = FireBrand 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FireBrandFX_Upgrade
	TriggeredBy			   = Upgrade_CHW06
	ShowSubObjects		   = FireBrand_FX01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//Behavior				   = SubObjectsUpgrade Belthronding_Upgrade_6
//	TriggeredBy			   = Upgrade_CHW06
//	ShowSubObjects		   = Belthronding 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End
//-------------------------------------------------------------
// Wizard Staff	1 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_07		//CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon7
	TriggeredBy			   = Upgrade_CHW07
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_07
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizardStaff01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX01_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizStaff01_FX01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX02_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizStaff01_FX2
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX03_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizStaff01_FX3
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX04_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizStaff01_FX4
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//	Behavior			   = SubObjectsUpgrade WizardStaff01_Upgrade
//		TriggeredBy		   = Upgrade_CHW07
//		ShowSubObjects	   = Gurthang 
//	End
//-------------------------------------------------------------
// MithlondBow Bow Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_08 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_08		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon8
	TriggeredBy			   = Upgrade_CHW08
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_08
End
Behavior = SubObjectsUpgrade Bow_Upgrade
	TriggeredBy			   = Upgrade_CHW08
	ShowSubObjects		   = MithlondBow
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade MithlondBow_ArcherSword_Upgrade
	TriggeredBy			   = Upgrade_CHW08
	ShowSubObjects		   = WestronSword
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//-------------------------------------------------------------
// Wizard Staff	2 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_09		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon9
	TriggeredBy			   = Upgrade_CHW09
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_09
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade09
	TriggeredBy			   = Upgrade_CHW09
	ShowSubObjects		   = WizardStaff02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX01_Upgrade09
	TriggeredBy			   = Upgrade_CHW09
	ShowSubObjects		   = WizStaff02_FX1
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//	Behavior			   = SubObjectsUpgrade WizardStaff02_Upgrade
//		TriggeredBy		   = Upgrade_CHW09
//		ShowSubObjects	   = Gurthang 
//	End
//-------------------------------------------------------------
// Wizard Staff	3 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_10		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon10
	TriggeredBy			   = Upgrade_CHW10
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_10
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade10
	TriggeredBy			   = Upgrade_CHW10
	ShowSubObjects		   = WizardStaff03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX01_Upgrade10
	TriggeredBy			   = Upgrade_CHW10
	ShowSubObjects		   = WizStaff03_FX01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX02_Upgrade10
	TriggeredBy			   = Upgrade_CHW10
	ShowSubObjects		   = WizStaff03_FX02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//	Behavior			   = SubObjectsUpgrade WizardStaff03_Upgrade
//		TriggeredBy		   = Upgrade_CHW10
//		ShowSubObjects	   = Gurthang 
//	End
//-------------------------------------------------------------
// Wizard Staff	4 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_11		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon11
	TriggeredBy			   = Upgrade_CHW11
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_11
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizardStaff04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX01_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX02_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX03_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX04_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX05_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX06_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX07_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//	Behavior			   = SubObjectsUpgrade WizardStaff04_Upgrade
//		TriggeredBy		   = Upgrade_CHW11
//		ShowSubObjects	   = Gurthang 
//	End
//-------------------------------------------------------------
// Troll Mace Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_12		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon12
	TriggeredBy			   = Upgrade_CHW12
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_12
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade12
	TriggeredBy			   = Upgrade_CHW12
	ShowSubObjects		   = TrollMace 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//-------------------------------------------------------------
// Troll Sword Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_13		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon13
	TriggeredBy			   = Upgrade_CHW13
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_13
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade13
	TriggeredBy			   = Upgrade_CHW13
	ShowSubObjects		   = TrollSword	
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Troll Hammer Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_14
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon14
	TriggeredBy		= Upgrade_CHW14
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_14
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade14
	TriggeredBy			   = Upgrade_CHW14
	ShowSubObjects		   = TrollHammer 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Troll Tree Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_15
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon15
	TriggeredBy		= Upgrade_CHW15
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_15
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade15
	TriggeredBy			   = Upgrade_CHW15
	ShowSubObjects		   = TrollTree
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Spiked Club Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_29
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon29
	TriggeredBy		= Upgrade_CHW29
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_29
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade29
	TriggeredBy			   = Upgrade_CHW29
	ShowSubObjects		   = CLUB_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Metal Hammer Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_30
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon30
	TriggeredBy		= Upgrade_CHW30
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_30
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade30
	TriggeredBy			   = Upgrade_CHW30
	ShowSubObjects		   = HMR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Corrupted Man Spear Weapon upgrade.
//---------------------------------------------------------------
//WeaponSet
//	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_15
//		Weapon			  =	PRIMARY CreateAHeroBasicMeleeWeapon
//	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
//End
//Behavior				   = WeaponSetUpgrade Create_A_Hero_Weapon15
//	TriggeredBy			   = Upgrade_CHW15
//	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_15
//End
//Behavior				   = SubObjectsUpgrade CorruptedManWeapon_Upgrade15
//	TriggeredBy			   = Upgrade_CHW15
//	ShowSubObjects		   = CorruptedManSpear 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End
//--------------------------------------------------------------
// Uruk	Weapons
//--------------------------------------------------------------
// Uruk	Sword 01
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_18
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon_18
	TriggeredBy			   = Upgrade_CHW18
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_18
End
Behavior = SubObjectsUpgrade UrukWeapon_Upgrade18
	TriggeredBy			   = Upgrade_CHW18
	ShowSubObjects		   = Uruk_Sword_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Belthronding_Upgrade18
	TriggeredBy			   = Upgrade_CHW18
	ShowSubObjects		   = Belthronding
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Uruk	Sword 01
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_19
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon_19
	TriggeredBy			   = Upgrade_CHW19
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_19
End
Behavior = SubObjectsUpgrade UrukWeapon_Upgrade19
	TriggeredBy			   = Upgrade_CHW19
	ShowSubObjects		   = Uruk_Sword_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Belthronding_Upgrade19
	TriggeredBy			   = Upgrade_CHW19
	ShowSubObjects		   = Belthronding
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Uruk	Sword 01
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_20
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon_20
	TriggeredBy			   = Upgrade_CHW20
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_20
End
Behavior = SubObjectsUpgrade UrukWeapon_Upgrade20
	TriggeredBy			   = Upgrade_CHW20
	ShowSubObjects		   = Uruk_Sword_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Belthronding_Upgrade20
	TriggeredBy			   = Upgrade_CHW20
	ShowSubObjects		   = Belthronding
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Club for CM Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_21 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_21
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon21
	TriggeredBy		= Upgrade_CHW21
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_21
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade21
	TriggeredBy			   = Upgrade_CHW21
	ShowSubObjects		   = CLUB_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Hammer for CM Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_22 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_22
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon22
	TriggeredBy		= Upgrade_CHW22
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_22
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade22
	TriggeredBy			   = Upgrade_CHW22
	ShowSubObjects		   = HMR_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Sword 03 for CM Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_23 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_23
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon23
	TriggeredBy		= Upgrade_CHW23
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_23
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade23
	TriggeredBy			   = Upgrade_CHW23
	ShowSubObjects		   = SWRD_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Sword 04 for CM Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_24 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_24
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon24
	TriggeredBy		= Upgrade_CHW24
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_24
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade24
	TriggeredBy			   = Upgrade_CHW24
	ShowSubObjects		   = SWRD_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Corrupted Man Weapon 1 upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_25 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_25
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon25
	TriggeredBy		= Upgrade_CHW25
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_25
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade25
	TriggeredBy			   = Upgrade_CHW25
	ShowSubObjects		   = CMSword01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End


//---------------------------------------------------------------
// Corrupted Man Weapon 2 upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_26 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_26
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon26
	TriggeredBy		= Upgrade_CHW26
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_26
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade26
	TriggeredBy			   = Upgrade_CHW26
	ShowSubObjects		   = CMSword02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Dwarf Hammer upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_31
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	Weapon			  = TERTIARY CreateAHeroAxeThrow
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon31
	TriggeredBy		= Upgrade_CHW31
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_31
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade31
	TriggeredBy			   = Upgrade_CHW31
	ShowSubObjects		   = HMR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Dwarf Axe 02 upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_32
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	Weapon			  = TERTIARY CreateAHeroAxeThrow
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon32
	TriggeredBy		= Upgrade_CHW32
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_32
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade32
	TriggeredBy			   = Upgrade_CHW32
	ShowSubObjects		   = AXE_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Hero of the West Axe upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_27
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon27
	TriggeredBy		= Upgrade_CHW27
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_27
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade27
	TriggeredBy			   = Upgrade_CHW27
	ShowSubObjects		   = AXE_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End


//---------------------------------------------------------------
// Hero of the West Sword upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_28
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon28
	TriggeredBy		= Upgrade_CHW28
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_28
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade28
	TriggeredBy			   = Upgrade_CHW28
	ShowSubObjects		   = SWRD_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Uruk	Hai	Bling Models
//---------------------------------------------------------------
//---------------------------------------------------------------
// Shoulder	Plates
Behavior = SubObjectsUpgrade UrukShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_Uruk_CHSP01
	ShowSubObjects		   = SLDR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukShoulderPlates_Upgrade02
	TriggeredBy			   = Upgrade_Uruk_CHSP02
	ShowSubObjects		   = SLDR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukShoulderPlates_Upgrade03
	TriggeredBy			   = Upgrade_Uruk_CHSP03
	ShowSubObjects		   = SLDR_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Helmets
Behavior = SubObjectsUpgrade UrukHelmet_Upgrade01
	TriggeredBy			   = Upgrade_Uruk_CHH01
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHelmet_Upgrade02
	TriggeredBy			   = Upgrade_Uruk_CHH02
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHelmet_Upgrade03
	TriggeredBy			   = Upgrade_Uruk_CHH03
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHelmet_Upgrade04
	TriggeredBy			   = Upgrade_Uruk_CHH04
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHair_Upgrade
	TriggeredBy			   = Upgrade_Uruk_CHHAIR01
	ShowSubObjects		   = HAIR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Gauntlets
Behavior = SubObjectsUpgrade UrukGauntlets_Upgrade01
	TriggeredBy			   = Upgrade_Uruk_CHG01
	ShowSubObjects		   = GNLT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukGauntlets_Upgrade02
	TriggeredBy			   = Upgrade_Uruk_CHG02
	ShowSubObjects		   = GNLT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukGauntlets_Upgrade03
	TriggeredBy			   = Upgrade_Uruk_CHG03
	ShowSubObjects		   = GNLT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Shield
Behavior = SubObjectsUpgrade UrukShield_Upgrade01
	TriggeredBy			   = Upgrade_Uruk_CHS01
	ShowSubObjects		   = Shield_1OG
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukShield_Upgrade02
	TriggeredBy			   = Upgrade_Uruk_CHS02
	ShowSubObjects		   = Shield_2OG
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukShield_Upgrade03
	TriggeredBy			   = Upgrade_Uruk_CHS03
	ShowSubObjects		   = SHLD_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukShield_Upgrade04
	TriggeredBy			   = Upgrade_Uruk_CHS04
	ShowSubObjects		   = SHLD_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Boot
Behavior = SubObjectsUpgrade UrukBoot_Upgrade01
	TriggeredBy			   = Upgrade_Uruk_CHB01
	ShowSubObjects		   = BOOT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukBoot_Upgrade02
	TriggeredBy			   = Upgrade_Uruk_CHB02
	ShowSubObjects		   = BOOT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukBoot_Upgrade03
	TriggeredBy			   = Upgrade_Uruk_CHB03
	ShowSubObjects		   = BOOT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Dwarf Taskmaster Bling	Models
//---------------------------------------------------------------
// Shoulder	Plates
Behavior = SubObjectsUpgrade DWARFShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_DWARF_CHSP01
	ShowSubObjects		   = SLDR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFShoulderPlates_Upgrade02
	TriggeredBy			   = Upgrade_DWARF_CHSP02
	ShowSubObjects		   = SLDR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFShoulderPlates_Upgrade03
	TriggeredBy			   = Upgrade_DWARF_CHSP03
	ShowSubObjects		   = SLDR_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFShoulderPlates_Upgrade04
	TriggeredBy			   = Upgrade_DWARF_CHSP04
	ShowSubObjects		   = SLDR_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFShoulderPlates_Upgrade05
	TriggeredBy			   = Upgrade_DWARF_CHSP05
	ShowSubObjects		   = SLDR_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Helmets
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade01
	TriggeredBy			   = Upgrade_DWARF_CHH01
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade02
	TriggeredBy			   = Upgrade_DWARF_CHH02
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade03
	TriggeredBy			   = Upgrade_DWARF_CHH03
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade04
	TriggeredBy			   = Upgrade_DWARF_CHH04
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade05
	TriggeredBy			   = Upgrade_DWARF_CHH05
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Gauntlets
Behavior = SubObjectsUpgrade DWARFGauntlets_Upgrade01
	TriggeredBy			   = Upgrade_DWARF_CHG01
	ShowSubObjects		   = GNLT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFGauntlets_Upgrade02
	TriggeredBy			   = Upgrade_DWARF_CHG02
	ShowSubObjects		   = GNLT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFGauntlets_Upgrade03
	TriggeredBy			   = Upgrade_DWARF_CHG03
	ShowSubObjects		   = GNLT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Boot
Behavior = SubObjectsUpgrade DWARFBoot_Upgrade01
	TriggeredBy			   = Upgrade_DWARF_CHB01
	ShowSubObjects		   = BOOT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFBoot_Upgrade02
	TriggeredBy			   = Upgrade_DWARF_CHB02
	ShowSubObjects		   = BOOT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFBoot_Upgrade03
	TriggeredBy			   = Upgrade_DWARF_CHB03
	ShowSubObjects		   = BOOT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Corrupted Man Bling Models
//---------------------------------------------------------------
// Shoulder	Plates
Behavior = SubObjectsUpgrade CorruptedManShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHSP01
	ShowSubObjects		   = SLDR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManShoulderPlates_Upgrade02
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHSP02
	ShowSubObjects		   = SLDR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManShoulderPlates_Upgrade03      // White Corrupted
	TriggeredBy			   = Upgrade_CM01_CHBOD04
	ShowSubObjects		   = CHEST_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManShoulderPlates_Upgrade05      // White Corrupted
	TriggeredBy			   = Upgrade_CM01_CHBOD05
	ShowSubObjects		   = CHEST_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManShoulderPlates_Upgrade04      // Indian Corrupted
	TriggeredBy			   = Upgrade_CM02_CHBOD05
	ShowSubObjects		   = CHEST_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManShoulderPlates_Upgrade06      // Indian Corrupted
	TriggeredBy			   = Upgrade_CM02_CHBOD04
	ShowSubObjects		   = CHEST_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHH01
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHH02
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHH03
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade04
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHH04
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade05
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHH05
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Boots
Behavior = SubObjectsUpgrade CorruptedManBoots_Upgrade01
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHB01
	ShowSubObjects		   = BOOT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManBoots_Upgrade02
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHB02
	ShowSubObjects		   = BOOT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Gauntlets
Behavior = SubObjectsUpgrade CorruptedManGauntlets_Upgrade01
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHG01
	ShowSubObjects		   = GNLT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManGauntlets_Upgrade02
	TriggeredBy			   = Upgrade_CorruptedMan_1_CHG02
	ShowSubObjects		   = GNLT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Captain of Gondor Bling Models
//---------------------------------------------------------------
// Shoulder	Plates
Behavior = SubObjectsUpgrade CaptainOfGondorShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_CaptainOfGondor_CHSP01
	ShowSubObjects		   = SLDR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorShoulderPlates_Upgrade02
	TriggeredBy			   = Upgrade_CaptainOfGondor_CHSP02
	ShowSubObjects		   = SLDR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Helmets
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CaptainOfGondor_CHH01
	ShowSubObjects = HAIR_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade02
	TriggeredBy	   = Upgrade_CaptainOfGondor_CHH02
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade03
	TriggeredBy	   = Upgrade_CaptainOfGondor_CHH03
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Shield
Behavior = SubObjectsUpgrade CAPGShield_Upgrade01
	TriggeredBy			   = Upgrade_CAPG_CHS01
	ShowSubObjects		   = Shld_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CAPGShield_Upgrade02
	TriggeredBy			   = Upgrade_CAPG_CHS02
	ShowSubObjects		   = Shld_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CAPGShield_Upgrade03
	TriggeredBy			   = Upgrade_CAPG_CHS03
	ShowSubObjects		   = Shld_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CAPGShield_Upgrade04
	TriggeredBy			   = Upgrade_CAPG_CHS04
	ShowSubObjects		   = Shld_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//--------------------------------------------------------------
// Boots
Behavior = SubObjectsUpgrade CaptainOfGondorBoots_Upgrade01
	TriggeredBy			   = Upgrade_CaptainOfGondor_CHB01
	ShowSubObjects = BOOT_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorBoots_Upgrade02
	TriggeredBy			   = Upgrade_CaptainOfGondor_CHB02
	ShowSubObjects		   = BOOT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds	   = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorBoots_Upgrade03
	TriggeredBy			   = Upgrade_CaptainOfGondor_CHB03
	ShowSubObjects		   = BOOT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds	   = 0.0
End
// Gauntlets
Behavior = SubObjectsUpgrade CaptainOfGondorGauntlets_Upgrade01
	TriggeredBy			   = Upgrade_CaptainOfGondor_CHG01
	ShowSubObjects 		   = GNLT_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorGauntlets_Upgrade02
	TriggeredBy			   = Upgrade_CaptainOfGondor_CHG02
	ShowSubObjects 		   = GNLT_01
	HideSubObjectsOnRemove = Yes
End
Behavior = SubObjectsUpgrade CaptainOfGondorGauntlets_Upgrade03
	TriggeredBy	   		   = Upgrade_CaptainOfGondor_CHG03
	ShowSubObjects		   = GNLT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Elf Archer Bling Models
//---------------------------------------------------------------
//---------------------------------------------------------------
// Shoulder	Plates
Behavior = SubObjectsUpgrade ELFAShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_ELFA_CHSP01
	ShowSubObjects		   = SLDR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade ELFAShoulderPlates_Upgrade02
	TriggeredBy			   = Upgrade_ELFA_CHSP02
	ShowSubObjects		   = SLDR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade ELFAShoulderPlates_Upgrade03
	TriggeredBy			   = Upgrade_ELFA_CHSP03
	ShowSubObjects		   = SLDR_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Helmets
Behavior = SubObjectsUpgrade ELFAHelmet_Upgrade01
	TriggeredBy			   = Upgrade_ELFA_CHH01
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade ELFAHelmet_Upgrade02
	TriggeredBy			   = Upgrade_ELFA_CHH02
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Gauntlets
Behavior = SubObjectsUpgrade ELFAGauntlets_Upgrade01
	TriggeredBy			   = Upgrade_ELFA_CHG01
	ShowSubObjects		   = GNLT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade ELFAGauntlets_Upgrade02
	TriggeredBy			   = Upgrade_ELFA_CHG02
	ShowSubObjects		   = GNLT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade ELFAGauntlets_Upgrade03
	TriggeredBy			   = Upgrade_ELFA_CHG03
	ShowSubObjects		   = GNLT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Boot
Behavior = SubObjectsUpgrade ELFABoot_Upgrade01
	TriggeredBy			   = Upgrade_ELFA_CHB01
	ShowSubObjects		   = BOOT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade ELFABoot_Upgrade02
	TriggeredBy			   = Upgrade_ELFA_CHB02
	ShowSubObjects		   = BOOT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Shield Maiden Bling Models
//---------------------------------------------------------------
//---------------------------------------------------------------
// Shoulder	Plates
Behavior = SubObjectsUpgrade SHIMShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_SHIM_CHSP01
	ShowSubObjects		   = SLDR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMShoulderPlates_Upgrade02
	TriggeredBy			   = Upgrade_SHIM_CHSP02
	ShowSubObjects		   = SLDR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMShoulderPlates_Upgrade03
	TriggeredBy			   = Upgrade_SHIM_CHSP03
	ShowSubObjects		   = SLDR_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Helmets
Behavior = SubObjectsUpgrade SHIMHelmet_Upgrade01
	TriggeredBy			   = Upgrade_SHIM_CHH01
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMHelmet_Upgrade02
	TriggeredBy			   = Upgrade_SHIM_CHH02
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMHelmet_Upgrade03
	TriggeredBy			   = Upgrade_SHIM_CHH03
	ShowSubObjects		   = HLMT_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Gauntlets
Behavior = SubObjectsUpgrade SHIMGauntlets_Upgrade01
	TriggeredBy			   = Upgrade_SHIM_CHG01
	ShowSubObjects		   = GNLT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMGauntlets_Upgrade02
	TriggeredBy			   = Upgrade_SHIM_CHG02
	ShowSubObjects		   = GNLT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMGauntlets_Upgrade03
	TriggeredBy			   = Upgrade_SHIM_CHG03
	ShowSubObjects		   = GNLT_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Boot
Behavior = SubObjectsUpgrade SHIMBoot_Upgrade01
	TriggeredBy			   = Upgrade_SHIM_CHB01
	ShowSubObjects		   = BOOT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMBoot_Upgrade02
	TriggeredBy			   = Upgrade_SHIM_CHB02
	ShowSubObjects		   = BOOT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMBoot_Upgrade03
	TriggeredBy			   = Upgrade_SHIM_CHB03
	ShowSubObjects		   = BOOT_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Wizards	Bling Models
//---------------------------------------------------------------
// Helmets
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade01
	TriggeredBy			   = Upgrade_WIZ_CHH01
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade02
	TriggeredBy			   = Upgrade_WIZ_CHH02
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade03
	TriggeredBy			   = Upgrade_WIZ_CHH03
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade04
	TriggeredBy			   = Upgrade_WIZ_CHH04
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade05
	TriggeredBy			   = Upgrade_WIZ_CHH05
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade06
	TriggeredBy			   = Upgrade_WIZ_CHH06
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade07
	TriggeredBy			   = Upgrade_WIZ_CHH07
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Shoulder	Plates
Behavior = SubObjectsUpgrade WIZShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_WIZ_CHSP01
	ShowSubObjects		   = SLDR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZShoulderPlates_Upgrade02
	TriggeredBy			   = Upgrade_WIZ_CHSP02
	ShowSubObjects		   = SLDR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Female Elven Archer Bling Models
//---------------------------------------------------------------
//---------------------------------------------------------------
// Shoulder	Plates
Behavior = SubObjectsUpgrade FEARCHShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_FEARCH_CHSP01
	ShowSubObjects		   = SLDR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHShoulderPlates_Upgrade02
	TriggeredBy			   = Upgrade_FEARCH_CHSP02
	ShowSubObjects		   = SLDR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHShoulderPlates_Upgrade03
	TriggeredBy			   = Upgrade_FEARCH_CHSP03
	ShowSubObjects		   = SLDR_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHShoulderPlates_Upgrade04
	TriggeredBy			   = Upgrade_FEARCH_CHSP04
	ShowSubObjects		   = SLDR_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHShoulderPlates_Upgrade05
	TriggeredBy			   = Upgrade_FEARCH_CHSP05
	ShowSubObjects		   = SLDR_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Helmets
Behavior = SubObjectsUpgrade FEARCHHelmet_Upgrade01
	TriggeredBy			   = Upgrade_FEARCH_CHH01
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHHelmet_Upgrade02
	TriggeredBy			   = Upgrade_FEARCH_CHH02
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHHelmet_Upgrade03
	TriggeredBy			   = Upgrade_FEARCH_CHH03
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHHelmet_Upgrade04
	TriggeredBy			   = Upgrade_FEARCH_CHH04
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHHelmet_Upgrade05
	TriggeredBy			   = Upgrade_FEARCH_CHH05
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Gauntlets
Behavior = SubObjectsUpgrade FEARCHGauntlets_Upgrade01
	TriggeredBy			   = Upgrade_FEARCH_CHG01
	ShowSubObjects		   = GNLT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHGauntlets_Upgrade02
	TriggeredBy			   = Upgrade_FEARCH_CHG02
	ShowSubObjects		   = GNLT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHGauntlets_Upgrade03
	TriggeredBy			   = Upgrade_FEARCH_CHG03
	ShowSubObjects		   = GNLT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHGauntlets_Upgrade04
	TriggeredBy			   = Upgrade_FEARCH_CHG04
	ShowSubObjects		   = GNLT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHGauntlets_Upgrade05
	TriggeredBy			   = Upgrade_FEARCH_CHG05
	ShowSubObjects		   = GNLT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Boot
Behavior = SubObjectsUpgrade FEARCHBoot_Upgrade01
	TriggeredBy			   = Upgrade_FEARCH_CHB01
	ShowSubObjects		   = BOOT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHBoot_Upgrade02
	TriggeredBy			   = Upgrade_FEARCH_CHB02
	ShowSubObjects		   = BOOT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHBoot_Upgrade03
	TriggeredBy			   = Upgrade_FEARCH_CHB03
	ShowSubObjects		   = BOOT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHBoot_Upgrade04
	TriggeredBy			   = Upgrade_FEARCH_CHB04
	ShowSubObjects		   = BOOT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHBoot_Upgrade05
	TriggeredBy			   = Upgrade_FEARCH_CHB05
	ShowSubObjects		   = BOOT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// TROLL	Bling Models
//---------------------------------------------------------------
//---------------------------------------------------------------
// Shoulder	Plates
Behavior = SubObjectsUpgrade TRLLShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_TRLL_CHSP01
	ShowSubObjects		   = SLDR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLShoulderPlates_Upgrade02
	TriggeredBy			   = Upgrade_TRLL_CHSP02
	ShowSubObjects		   = SLDR_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLShoulderPlates_Upgrade03
	TriggeredBy			   = Upgrade_TRLL_CHSP03
	ShowSubObjects		   = SLDR_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLShoulderPlates_Upgrade04
	TriggeredBy			   = Upgrade_TRLL_CHSP04
	ShowSubObjects		   = SLDR_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLShoulderPlates_Upgrade05
	TriggeredBy			   = Upgrade_TRLL_CHSP05
	ShowSubObjects		   = SLDR_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Helmets
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade01
	TriggeredBy			   = Upgrade_TRLL_CHH01
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade02
	TriggeredBy			   = Upgrade_TRLL_CHH02
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade03
	TriggeredBy			   = Upgrade_TRLL_CHH03
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Gauntlets
Behavior = SubObjectsUpgrade TRLLGauntlets_Upgrade01
	TriggeredBy			   = Upgrade_TRLL_CHG01
	ShowSubObjects		   = GNLT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLGauntlets_Upgrade02
	TriggeredBy			   = Upgrade_TRLL_CHG02
	ShowSubObjects		   = GNLT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLGauntlets_Upgrade03
	TriggeredBy			   = Upgrade_TRLL_CHG03
	ShowSubObjects		   = GNLT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLGauntlets_Upgrade04
	TriggeredBy			   = Upgrade_TRLL_CHG04
	ShowSubObjects		   = GNLT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLGauntlets_Upgrade05
	TriggeredBy			   = Upgrade_TRLL_CHG05
	ShowSubObjects		   = GNLT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// CHEST
Behavior = SubObjectsUpgrade TRLLChest_Upgrade01
	TriggeredBy			   = Upgrade_TRLL_CHBOD01
	ShowSubObjects		   = CHEST_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLChest_Upgrade02
	TriggeredBy			   = Upgrade_TRLL_CHBOD02
	ShowSubObjects		   = CHEST_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLChest_Upgrade03
	TriggeredBy			   = Upgrade_TRLL_CHBOD03
	ShowSubObjects		   = CHEST_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// ORC	Bling Models
//---------------------------------------------------------------
//---------------------------------------------------------------
// Shoulder	Plates
Behavior = SubObjectsUpgrade ORCShoulderPlates_Upgrade01
	TriggeredBy			   = Upgrade_ORC_CHSP01
	ShowSubObjects		   = SLDR_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Helmets
Behavior = SubObjectsUpgrade ORCHelmet_Upgrade01
	TriggeredBy			   = Upgrade_ORC_CHH01
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Gauntlets
Behavior = SubObjectsUpgrade ORCGauntlets_Upgrade01
	TriggeredBy			   = Upgrade_ORC_CHG01
	ShowSubObjects		   = GNLT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Boot
Behavior = SubObjectsUpgrade ORCBoot_Upgrade01
	TriggeredBy			   = Upgrade_ORC_CHB01
	ShowSubObjects		   = BOOT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Corrupted Man Body	(Texture Swap)
Behavior = SubObjectsUpgrade Body_CMBOD01	  // Corrupted Man
	TriggeredBy			   = Upgrade_CM01_CHBOD01
	UpgradeTexture		   = CHCM_CM_01.tga	0 CHCM_CM.tga
	UpgradeTexture		   = CHCM_CM_02.tga	0 CHCM_CM.tga
	UpgradeTexture		   = CHCM_CM_03.tga	0 CHCM_CM.tga
	UpgradeTexture		   = CHCM_CM_04.tga	0 CHCM_CM.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CMBOD02	  // Corrupted Man
	TriggeredBy			   = Upgrade_CM01_CHBOD02
	UpgradeTexture		   = CHCM_CM.tga 0 CHCM_CM_01.tga 
	UpgradeTexture		   = CHCM_CM_02.tga	0 CHCM_CM_01.tga 
	UpgradeTexture		   = CHCM_CM_03.tga	0 CHCM_CM_01.tga 
	UpgradeTexture		   = CHCM_CM_04.tga	0 CHCM_CM_01.tga 
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CMBOD03	  // Corrupted Man
	TriggeredBy			   = Upgrade_CM01_CHBOD03
	UpgradeTexture		   = CHCM_CM.tga 0	   CHCM_CM_02.tga 
	UpgradeTexture		   = CHCM_CM_01.tga	0  CHCM_CM_02.tga 
	UpgradeTexture		   = CHCM_CM_03.tga	0  CHCM_CM_02.tga 
	UpgradeTexture		   = CHCM_CM_04.tga	0  CHCM_CM_02.tga 
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CMBOD04	  // Corrupted Man
	TriggeredBy			   = Upgrade_CM01_CHBOD04
	UpgradeTexture		   = CHCM_CM.tga 0	   CHCM_CM_04.tga 
	UpgradeTexture		   = CHCM_CM_01.tga	0  CHCM_CM_04.tga 
	UpgradeTexture		   = CHCM_CM_02.tga	0  CHCM_CM_04.tga 
	UpgradeTexture		   = CHCM_CM_03.tga	0  CHCM_CM_04.tga 
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CMBOD05	  // Corrupted Man
	TriggeredBy			   = Upgrade_CM01_CHBOD05
	UpgradeTexture		   = CHCM_CM.tga 0	   CHCM_CM_03.tga 
	UpgradeTexture		   = CHCM_CM_01.tga	0  CHCM_CM_03.tga 
	UpgradeTexture		   = CHCM_CM_02.tga	0  CHCM_CM_03.tga 
	UpgradeTexture		   = CHCM_CM_04.tga	0  CHCM_CM_03.tga 
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Corrupted Man 2 Body	(Texture Swap)
Behavior = SubObjectsUpgrade Body_CM02BOD01	  // Corrupted Man 2
	TriggeredBy			   = Upgrade_CM02_CHBOD01
	UpgradeTexture		   = CHCM_FN_01.tga	0 CHCM_FN.tga
	UpgradeTexture		   = CHCM_FN_02.tga	0 CHCM_FN.tga
	UpgradeTexture		   = CHCM_FN_03.tga	0 CHCM_FN.tga
	UpgradeTexture		   = CHCM_FN_04.tga	0 CHCM_FN.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CM02BOD02	  // Corrupted Man 2
	TriggeredBy			   = Upgrade_CM02_CHBOD02
	UpgradeTexture		   = CHCM_FN.tga 	0 CHCM_FN_01.tga 
	UpgradeTexture		   = CHCM_FN_02.tga	0 CHCM_FN_01.tga 
	UpgradeTexture		   = CHCM_FN_03.tga	0 CHCM_FN_01.tga 
	UpgradeTexture		   = CHCM_FN_04.tga	0 CHCM_FN_01.tga 
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CM02BOD03	  // Corrupted Man 2
	TriggeredBy			   = Upgrade_CM02_CHBOD03
	UpgradeTexture		   = CHCM_FN.tga 0	   CHCM_FN_02.tga 
	UpgradeTexture		   = CHCM_FN_01.tga	0  CHCM_FN_02.tga 
	UpgradeTexture		   = CHCM_FN_03.tga	0  CHCM_FN_02.tga 
	UpgradeTexture		   = CHCM_FN_04.tga	0  CHCM_FN_02.tga 
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CM02BOD04	  // Corrupted Man 2
	TriggeredBy			   = Upgrade_CM02_CHBOD04
	UpgradeTexture		   = CHCM_FN.tga 0	   CHCM_FN_04.tga 
	UpgradeTexture		   = CHCM_FN_01.tga	0  CHCM_FN_04.tga 
	UpgradeTexture		   = CHCM_FN_02.tga	0  CHCM_FN_04.tga 
	UpgradeTexture		   = CHCM_FN_03.tga	0  CHCM_FN_04.tga 
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CM02BOD05	  // Corrupted Man 2
	TriggeredBy			   = Upgrade_CM02_CHBOD05
	UpgradeTexture		   = CHCM_FN.tga 0	   CHCM_FN_03.tga 
	UpgradeTexture		   = CHCM_FN_01.tga	0  CHCM_FN_03.tga 
	UpgradeTexture		   = CHCM_FN_02.tga	0  CHCM_FN_03.tga 
	UpgradeTexture		   = CHCM_FN_04.tga	0  CHCM_FN_03.tga 
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Uruk Hai Body (Texture Swap)
Behavior = SubObjectsUpgrade Body_UKBOD01	  // Uruk Hai
	TriggeredBy			   = Upgrade_URUK_CHBOD01
	UpgradeTexture		   = CHSS_UKLeather.tga	0 CHSS_UK.tga
	UpgradeTexture		   = CHSS_UK_FA.tga		0 CHSS_UK.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_UKBOD02	  // Uruk Hai
	TriggeredBy			   = Upgrade_URUK_CHBOD02
	UpgradeTexture		   = CHSS_UK.tga		0 CHSS_UKLeather.tga
	UpgradeTexture		   = CHSS_UK_FA.tga		0 CHSS_UKLeather.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_UKBOD03	  //Uruk Hai
	TriggeredBy			   = Upgrade_URUK_CHBOD03
	UpgradeTexture		   = CHSS_UK.tga		0	CHSS_UK_FA.tga
	UpgradeTexture		   = CHSS_UKLeather.tga	0	CHSS_UK_FA.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Elf Archer Body (Texture Swap)
Behavior = SubObjectsUpgrade Body_EABOD01	  // Elf Archer
	TriggeredBy			   = Upgrade_ELFA_CHBOD01
	UpgradeTexture		   = CHAR_EL_01.tga		0 CHAR_EL_00.tga
	UpgradeTexture		   = CHAR_EL_02.tga		0 CHAR_EL_00.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_EABOD02	  // Elf Archer
	TriggeredBy			   = Upgrade_ELFA_CHBOD02
	UpgradeTexture		   = CHAR_EL_00.tga		0 CHAR_EL_01.tga
	UpgradeTexture		   = CHAR_EL_02.tga		0 CHAR_EL_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_EABOD03	  // Elf Archer
	TriggeredBy			   = Upgrade_ELFA_CHBOD03
	UpgradeTexture		   = CHAR_EL_00.tga		0	CHAR_EL_02.tga
	UpgradeTexture		   = CHAR_EL_01.tga		0	CHAR_EL_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Captain of Gondor Body (Texture Swap)
Behavior = SubObjectsUpgrade Body_CGBOD01	  // Captain of Gondor
	TriggeredBy			   = Upgrade_CAPG_CHBOD01
	UpgradeTexture		   = CHHW_SMN_01.tga	0 CHHW_SMN.tga
	UpgradeTexture		   = CHHW_SMN_02.tga	0 CHHW_SMN.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CGBOD02	  // Captain of Gondor
	TriggeredBy			   = Upgrade_CAPG_CHBOD02
	UpgradeTexture		   = CHHW_SMN.tga		0 CHHW_SMN_01.tga
	UpgradeTexture		   = CHHW_SMN_02.tga	0 CHHW_SMN_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_CGBOD03	  // Captain of Gondor
	TriggeredBy			   = Upgrade_CAPG_CHBOD03
	UpgradeTexture		   = CHHW_SMN.tga		0	CHHW_SMN_02.tga
	UpgradeTexture		   = CHHW_SMN_01.tga	0	CHHW_SMN_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Shield Maiden Body (Texture Swap)
Behavior = SubObjectsUpgrade Body_SMBOD01	  // Shield Maiden
	TriggeredBy			   = Upgrade_SHIM_CHBOD01
	UpgradeTexture		   = CHHW_SM_01.tga	0 CHHW_SM.tga
	UpgradeTexture		   = CHHW_SM_02.tga	0 CHHW_SM.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_SMBOD02	  // Shield Maiden
	TriggeredBy			   = Upgrade_SHIM_CHBOD02
	UpgradeTexture		   = CHHW_SM.tga	0 CHHW_SM_01.tga
	UpgradeTexture		   = CHHW_SM_02.tga	0 CHHW_SM_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_SMBOD03	  // Shield Maiden
	TriggeredBy			   = Upgrade_SHIM_CHBOD03
	UpgradeTexture		   = CHHW_SM.tga		0	CHHW_SM_02.tga
	UpgradeTexture		   = CHHW_SM_01.tga		0	CHHW_SM_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Wizard Body (Texture Swap)
Behavior = SubObjectsUpgrade Body_WIZBOD01	  //Wizard
	TriggeredBy			   = Upgrade_WIZ_CHBOD01
	UpgradeTexture		   = CHWZ_WD_01.tga	0 CHWZ_WD.tga
	UpgradeTexture		   = CHWZ_WD_02.tga 0 CHWZ_WD.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_WIZBOD02	  // Wizard
	TriggeredBy			   = Upgrade_WIZ_CHBOD02
	UpgradeTexture		   = CHWZ_WD.tga	0 CHWZ_WD_01.tga
	UpgradeTexture		   = CHWZ_WD_02.tga	0 CHWZ_WD_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_WIZBOD03	  // Wizard
	TriggeredBy			   = Upgrade_WIZ_CHBOD03
	UpgradeTexture		   = CHWZ_WD.tga		0	CHWZ_WD_02.tga
	UpgradeTexture		   = CHWZ_WD_01.tga		0	CHWZ_WD_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Orc Raider Body (Texture Swap)
Behavior = SubObjectsUpgrade Body_ORCBOD01	  //ORC Raider
	TriggeredBy			   = Upgrade_ORC_CHBOD01
	UpgradeTexture		   = CHSS_OR_01.tga	0 CHSS_OR.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_ORCBOD02	  // ORC Raider
	TriggeredBy			   = Upgrade_ORC_CHBOD02
	UpgradeTexture		   = CHSS_OR.tga	0 CHSS_OR_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// DWARF Body (Texture Swap)
Behavior = SubObjectsUpgrade Body_DWARFBOD01	  //DWARF 1
	TriggeredBy			   = Upgrade_DWARF_CHBOD01
	UpgradeTexture		   = CHDW_TM_01.tga 0 CHDW_TM.tga
	UpgradeTexture		   = CHDW_TM_02.tga 0 CHDW_TM.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_DWARFBOD02	  // DWARF 1
	TriggeredBy			   = Upgrade_DWARF_CHBOD02
	UpgradeTexture		   = CHDW_TM.tga	0 CHDW_TM_01.tga
	UpgradeTexture		   = CHDW_TM_02.tga	0 CHDW_TM_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_DWARFBOD03	  // DWARF 1
	TriggeredBy			   = Upgrade_DWARF_CHBOD03
	UpgradeTexture		   = CHDW_TM.tga		0	CHDW_TM_02.tga
	UpgradeTexture		   = CHDW_TM_01.tga		0	CHDW_TM_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// DSAGE Body (Texture Swap)
Behavior = SubObjectsUpgrade Body_DSAGEBOD01	  //DSAGE
	TriggeredBy			   = Upgrade_DSAGE_CHBOD01
	UpgradeTexture		   = CHDW_SG_01.tga 0 CHDW_SG.tga
	UpgradeTexture		   = CHDW_SG_02.tga 0 CHDW_SG.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_DSAGEBOD02	  // DSAGE
	TriggeredBy			   = Upgrade_DSAGE_CHBOD02
	UpgradeTexture		   = CHDW_SG.tga	0 CHDW_SG_01.tga
	UpgradeTexture		   = CHDW_SG_02.tga	0 CHDW_SG_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_DSAGEBOD03	  // DSAGE
	TriggeredBy			   = Upgrade_DSAGE_CHBOD03
	UpgradeTexture		   = CHDW_SG.tga		0	CHDW_SG_02.tga
	UpgradeTexture		   = CHDW_SG_01.tga		0	CHDW_SG_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Female Elf Archer Body (Texture Swap)
Behavior = SubObjectsUpgrade Body_FEBOD01	  // Elf Archer
	TriggeredBy			   = Upgrade_FEARCH_CHBOD01
	UpgradeTexture		   = CHAR_FE_01.tga		0 CHAR_FE.tga
	UpgradeTexture		   = CHAR_FE_02.tga		0 CHAR_FE.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_FEBOD02	  // Elf Archer
	TriggeredBy			   = Upgrade_FEARCH_CHBOD02
	UpgradeTexture		   = CHAR_FE.tga		0 CHAR_FE_01.tga
	UpgradeTexture		   = CHAR_FE_02.tga		0 CHAR_FE_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Body_FEBOD03	  // Elf Archer
	TriggeredBy			   = Upgrade_FEARCH_CHBOD03
	UpgradeTexture		   = CHAR_FE.tga		0	CHAR_FE_02.tga
	UpgradeTexture		   = CHAR_FE_01.tga		0	CHAR_FE_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End