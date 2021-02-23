//---------------------------------------------------------------------------------
// This file contains the Armor upgrades for the Create a Hero there are also two 
// other support files for Create a Hero Weapons, CreateAHeroDrawModules.inc and 
// CreateAHeroRemoveUpgradeUpgrades.inc.
//---------------------------------------------------------------------------------


// ARMORSET_CREATE_A_HERO_01 - Upgrade_CreateAHero_ClassHeroOfTheWest
// ARMORSET_CREATE_A_HERO_02 - Upgrade_CreateAHero_ClassIstariWizard
// ARMORSET_CREATE_A_HERO_03 - Upgrade_CreateAHero_ClassDwarf
// ARMORSET_CREATE_A_HERO_04 - Upgrade_CreateAHero_ClassCorruptedMan
// ARMORSET_CREATE_A_HERO_05 - Upgrade_CreateAHero_ClassServantsOfSauron
// ARMORSET_CREATE_A_HERO_06 - Upgrade_CreateAHero_ClassArcher
// ARMORSET_CREATE_A_HERO_07
// ARMORSET_CREATE_A_HERO_08
// ARMORSET_CREATE_A_HERO_09
// ARMORSET_CREATE_A_HERO_10

//-------------------------------------------------------------
// Default Armor
//-------------------------------------------------------------
ArmorSet
	Conditions = None
	Armor	   = HeroArmor
	DamageFX   = NormalDamageFX
End

////-------------------------------------------------------------
//// Class Hero Of The West Armor upgrade. (Upgrade_CreateAHero_ClassHeroOfTheWest)
////-------------------------------------------------------------
ArmorSet
	Conditions = CREATE_A_HERO_01		
	Armor	   = CAHArmorHeroOfTheWest
	DamageFX   = NormalDamageFX
End

Behavior = ArmorUpgrade ModuleTag_CreateAHeroMenOfTheWestArmor
	TriggeredBy			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	ArmorSetFlag		  =	CREATE_A_HERO_01
	CustomAnimAndDuration =	AnimState:USER_1 AnimTime:0	TriggerTime:0 ;set flag	forever
End

////-------------------------------------------------------------
//// Class Istari Wizard Armor upgrade. (Upgrade_CreateAHero_ClassIstariWizard)
////-------------------------------------------------------------
ArmorSet
	Conditions = CREATE_A_HERO_02		
	Armor	   = CAHArmorWizard
	DamageFX   = NormalDamageFX
End

Behavior = ArmorUpgrade ModuleTag_CreateAHeroIstariWizardArmor
	TriggeredBy			  =	Upgrade_CreateAHero_ClassIstariWizard
	ArmorSetFlag		  =	CREATE_A_HERO_02
	CustomAnimAndDuration =	AnimState:USER_1 AnimTime:0	TriggerTime:0 ;set flag	forever
End

////-------------------------------------------------------------
//// Class Dwarf Armor upgrade. (Upgrade_CreateAHero_ClassDwarf)
////-------------------------------------------------------------
ArmorSet
	Conditions = CREATE_A_HERO_03		
	Armor	   = CAHArmorDwarf	
	DamageFX   = NormalDamageFX
End

Behavior = ArmorUpgrade ModuleTag_CreateAHeroDwarfArmor
	TriggeredBy			  =	Upgrade_CreateAHero_ClassDwarf
	ArmorSetFlag		  =	CREATE_A_HERO_03
	CustomAnimAndDuration =	AnimState:USER_1 AnimTime:0	TriggerTime:0 ;set flag	forever
End
	
////-------------------------------------------------------------
//// Class Corrupted Man Armor upgrade. (Upgrade_CreateAHero_ClassCorruptedMan)
////-------------------------------------------------------------
ArmorSet
	Conditions = CREATE_A_HERO_04		
	Armor	   = CAHArmorCorruptedMan
	DamageFX   = NormalDamageFX
End

Behavior = ArmorUpgrade ModuleTag_CreateAHeroCorruptedManArmor
	TriggeredBy			  =	Upgrade_CreateAHero_ClassCorruptedMan
	ArmorSetFlag		  =	CREATE_A_HERO_04
	CustomAnimAndDuration =	AnimState:USER_1 AnimTime:0	TriggerTime:0 ;set flag	forever
End
//	
////-------------------------------------------------------------
//// Class Servants Of Sauron Armor upgrade. (Upgrade_CreateAHero_ClassServantsOfSauron)
////-------------------------------------------------------------
ArmorSet
	Conditions = CREATE_A_HERO_05		
	Armor	   = CAHArmorServantOfSauron
	DamageFX   = NormalDamageFX
End
Behavior = ArmorUpgrade ModuleTag_CreateAHeroServantsOfSauronArmor
	TriggeredBy			  =	Upgrade_CreateAHero_ClassServantsOfSauron
	ArmorSetFlag		  =	CREATE_A_HERO_05
	CustomAnimAndDuration =	AnimState:USER_1 AnimTime:0	TriggerTime:0 ;set flag	forever
End
//
////-------------------------------------------------------------
//// Class Archer Armor upgrade. (Upgrade_CreateAHero_ClassArcher)
////-------------------------------------------------------------
ArmorSet
	Conditions = CREATE_A_HERO_06
	Armor	   = CAHArmorArcher
	DamageFX   = NormalDamageFX
End

Behavior = ArmorUpgrade ModuleTag_CreateAHeroArcherArmor
	TriggeredBy			  =	Upgrade_CreateAHero_ClassArcher
	ArmorSetFlag		  =	CREATE_A_HERO_06
	CustomAnimAndDuration =	AnimState:USER_1 AnimTime:0	TriggerTime:0 ;set flag	forever
End
