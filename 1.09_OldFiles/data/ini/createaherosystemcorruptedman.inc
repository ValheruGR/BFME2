//-----------------------------------------------------------------------------------------------------
// Corrupted Man Class
//-----------------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag			= CreateAHero:ClassName_CorruptedMan
	DescriptionTag	= CreateAHero:ClassDesc_CorruptedMan
	PowersDescTag		= CreateAHero:ClassPowersDesc_CorruptedMan
	UpgradeName			= Upgrade_CreateAHero_ClassCorruptedMan
	IconImage	   = Archetype_CorruptedMan
																						
	SubClass	// CorruptedMan 1
		NameTag			  =	CreateAHero:SubClassName_CorruptMan1
		DescriptionTag	  =	CreateAHero:SubClassDesc_Easterling
		UpgradeName		  =	Upgrade_CreateAHero_SubClass_0
		IconImage         = CPEasterling
		ButtonImage       = HICAHEasterling
		SpendableAttributePoints        = 30
		// DefaultFaction              = Wild 
		UsableFactions              = Isengard Mordor Wild 
		// In UI it should be  		=  HICAHEasterling_wotr

		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth

		//-------------------------------
		// Weapons
		BlingUpgrades =	Upgrade_CHW25 @Upgrade_CHW26 Upgrade_CHW21 Upgrade_CHW22 Upgrade_CHW23 Upgrade_CHW24
		//-------------------------------
		// Head	Gear
		BlingUpgrades = @Upgrade_NoHelmet Upgrade_CorruptedMan_1_CHH01 Upgrade_CorruptedMan_1_CHH02 Upgrade_CorruptedMan_1_CHH03 Upgrade_CorruptedMan_1_CHH04 Upgrade_CorruptedMan_1_CHH05
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_CorruptedMan_1_CHSP01 Upgrade_CorruptedMan_1_CHSP02
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_CorruptedMan_1_CHG01 Upgrade_CorruptedMan_1_CHG02
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_CorruptedMan_1_CHB01 Upgrade_CorruptedMan_1_CHB02
		//-------------------------------
		// Body
		BlingUpgrades = @Upgrade_CM01_CHBOD01 Upgrade_CM01_CHBOD02 Upgrade_CM01_CHBOD03 Upgrade_CM01_CHBOD04 Upgrade_CM01_CHBOD05
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute15
			DefaultValueUpgrade	= Upgrade_ArmorAttribute12
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute04
			MaxValueUpgrade		= Upgrade_DamageMultAttribute16
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute15
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute02
			MaxValueUpgrade		= Upgrade_AutoHealAttribute15
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute08
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute05
			MaxValueUpgrade		= Upgrade_VisionAttribute19
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End

		// Camera used to view object with in create a hero
		ViewInfo
   			    FarPitch  = -0.106
		        FarZoom   = 0.203
		        FarFloor  = 15.760
		        FarDist   = 20.500
		        FarShift  = 8.100
		        NearPitch = 0.314
		        NearZoom  = 0.245
		        NearFloor = 73.260
		        NearDist  = 37.000
		        NearShift = 5.500
		        CloseUpPitch = -0.230
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 30.000
		        CloseUpShift = -1.000
		        PortraitPitch = -0.070
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 40.00
		        PortraitShift = 0.00
		        //NormalCam = 0.50


		End
	End
	SubClass	// CorruptedMan 2
		NameTag			  =	CreateAHero:SubClassName_CorruptMan2
		DescriptionTag	  =	CreateAHero:SubClassDesc_Haradrim
		IconImage         = CPHaradrim
		ButtonImage       = HICAHHaradrim
		// In UI it should be  		=  HICAHHaradrim_wotr
		DefaultFaction              = Mordor 
		UsableFactions              = Isengard Mordor Wild 
		SpendableAttributePoints        = 30
		
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_1
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth


		//-------------------------------
		// Weapons
		BlingUpgrades		  =	@Upgrade_CHW25 Upgrade_CHW26 Upgrade_CHW21 Upgrade_CHW22 Upgrade_CHW23 Upgrade_CHW24
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_CorruptedMan_1_CHH01 Upgrade_CorruptedMan_1_CHH02 Upgrade_CorruptedMan_1_CHH03 Upgrade_CorruptedMan_1_CHH04 Upgrade_CorruptedMan_1_CHH05
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates @Upgrade_CorruptedMan_1_CHSP01 Upgrade_CorruptedMan_1_CHSP02
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets @Upgrade_CorruptedMan_1_CHG01 Upgrade_CorruptedMan_1_CHG02
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots @Upgrade_CorruptedMan_1_CHB01 Upgrade_CorruptedMan_1_CHB02
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_CM02_CHBOD01 @Upgrade_CM02_CHBOD02 Upgrade_CM02_CHBOD03 Upgrade_CM02_CHBOD04 Upgrade_CM02_CHBOD05
		DefaultPrimaryColor	  =	R:65 G:54 B:66
		DefaultSecondaryColor =	R:65 G:54 B:66
		DefaultTertiaryColor  =	R:176 G:157 B:112

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute02
			MaxValueUpgrade		= Upgrade_ArmorAttribute14
			DefaultValueUpgrade	= Upgrade_ArmorAttribute08
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute05
			MaxValueUpgrade		= Upgrade_DamageMultAttribute18
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute12
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute15
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute03
			MaxValueUpgrade		= Upgrade_AutoHealAttribute14
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute08
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute05
			MaxValueUpgrade		= Upgrade_VisionAttribute19
			DefaultValueUpgrade	= Upgrade_VisionAttribute10
		End

		// Camera used to view object with in create a hero
		ViewInfo

			    FarPitch  = -0.106
		        FarZoom   = 0.203
		        FarFloor  = 15.760
		        FarDist   = 20.500
		        FarShift  = 8.100
		        NearPitch = 0.314
		        NearZoom  = 0.245
		        NearFloor = 73.260
		        NearDist  = 37.000
		        NearShift = 5.500
		        CloseUpPitch = -0.240
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 30.000
		        CloseUpShift = -0.800
		        PortraitPitch = -0.070
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 39.00
		        PortraitShift = 0.00
		        //NormalCam = 0.50


		End
	End
End
