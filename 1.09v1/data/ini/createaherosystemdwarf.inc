//---------------------------------------------------------------------------------------------
// Dwarf Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag			= CreateAHero:ClassName_Dwarf
	DescriptionTag	= CreateAHero:ClassDesc_Dwarf
	PowersDescTag		= CreateAHero:ClassPowersDesc_Dwarf
	UpgradeName			= Upgrade_CreateAHero_ClassDwarf
	IconImage	=	Archetype_Dwarf
																						
	SubClass	// Taskmaster
		NameTag			  =	CreateAHero:SubClassName_Taskmaster
		DescriptionTag	  =	CreateAHero:SubClassDesc_Taskmaster
		IconImage         = CPDwarfTaskmaster
		ButtonImage       = HICAHDwarfTaskmaster
		SpendableAttributePoints        = 30
		// DefaultFaction              = Dwarves 
		UsableFactions              = Men Elves Dwarves
		// In UI it should be  		=  HICAHDwarfTaskmaster_wotr
		
		UpgradeName		  =	Upgrade_CreateAHero_SubClass_0

		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW01 Upgrade_CHW31 Upgrade_CHW32
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_DWARF_CHH01 Upgrade_DWARF_CHH02 Upgrade_DWARF_CHH03 Upgrade_DWARF_CHH04 Upgrade_DWARF_CHH05
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_DWARF_CHSP01 Upgrade_DWARF_CHSP02 Upgrade_DWARF_CHSP03 Upgrade_DWARF_CHSP04 Upgrade_DWARF_CHSP05
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_DWARF_CHG01 Upgrade_DWARF_CHG02 Upgrade_DWARF_CHG03
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield Upgrade_CAPG_CHS01
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_DWARF_CHB01 Upgrade_DWARF_CHB02 Upgrade_DWARF_CHB03
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_DWARF_CHBOD01 Upgrade_DWARF_CHBOD02 Upgrade_DWARF_CHBOD03
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute19
			DefaultValueUpgrade	= Upgrade_ArmorAttribute14
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute05
			MaxValueUpgrade		= Upgrade_DamageMultAttribute19
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute16
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute03
			MaxValueUpgrade		= Upgrade_HealthMultAttribute20
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute06
			MaxValueUpgrade		= Upgrade_AutoHealAttribute15
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute08
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute02
			MaxValueUpgrade		= Upgrade_VisionAttribute12
			DefaultValueUpgrade	= Upgrade_VisionAttribute02
		End
        
		// Camera used to view object with in create a hero
		ViewInfo
		        FarPitch  = -0.066
		        FarZoom   = 0.205
		        FarFloor  = 15.760
		        FarDist   = 12.500
		        FarShift  = 5.900
		        NearPitch = 0.624
		        NearZoom  = 0.249
		        NearFloor = 74.260
		        NearDist  = 33.000
		        NearShift = 4.700
		        CloseUpPitch = -0.070
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 36.000
		        CloseUpShift = -1.400
		        PortraitPitch = 0.030
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 51.00
		        PortraitShift = -1.50
		        //NormalCam = 0.75



		    


			MapLocation	= 6
		End
	End
	SubClass	// Sage
		NameTag			  =	CreateAHero:SubClassName_Sage
		DescriptionTag	  =	CreateAHero:SubClassDesc_Sage
		IconImage         = CPDwarfSage
		ButtonImage       = HICAHDwarfSage
		// In UI it should be  		=  HICAHDwarfSage_wotr
		DefaultFaction              = Dwarves 
		UsableFactions              = Men Elves Dwarves
		SpendableAttributePoints        = 30
		
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_1

		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth

		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW01 Upgrade_CHW31 Upgrade_CHW32
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_DWARF_CHH01 Upgrade_DWARF_CHH02 Upgrade_DWARF_CHH03 Upgrade_DWARF_CHH04 Upgrade_DWARF_CHH05
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_DWARF_CHSP01 Upgrade_DWARF_CHSP02 Upgrade_DWARF_CHSP03 Upgrade_DWARF_CHSP04 Upgrade_DWARF_CHSP05
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_DWARF_CHG01 Upgrade_DWARF_CHG02 Upgrade_DWARF_CHG03
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield Upgrade_CAPG_CHS01
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_DWARF_CHB01 Upgrade_DWARF_CHB02 Upgrade_DWARF_CHB03
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_DSAGE_CHBOD01 Upgrade_DSAGE_CHBOD02 Upgrade_DSAGE_CHBOD03
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute19
			DefaultValueUpgrade	= Upgrade_ArmorAttribute12
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute05
			MaxValueUpgrade		= Upgrade_DamageMultAttribute19
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute14
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute03
			MaxValueUpgrade		= Upgrade_HealthMultAttribute20
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute08
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute06
			MaxValueUpgrade		= Upgrade_AutoHealAttribute15
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute10
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute02
			MaxValueUpgrade		= Upgrade_VisionAttribute14
			DefaultValueUpgrade	= Upgrade_VisionAttribute06
		End

		// Camera used to view object with in create a hero
		ViewInfo
   		        FarPitch  = -0.066
		        FarZoom   = 0.205
		        FarFloor  = 15.760
		        FarDist   = 12.500
		        FarShift  = 5.900
		        NearPitch = 0.624
		        NearZoom  = 0.249
		        NearFloor = 74.260
		        NearDist  = 33.000
		        NearShift = 4.500
		        CloseUpPitch = -0.090
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 35.000
		        CloseUpShift = -1.400
		        PortraitPitch = 0.050
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 46.00
		        PortraitShift = -1.20
		        //NormalCam = 0.75



		    


			MapLocation	= 6
		End
	End
End
