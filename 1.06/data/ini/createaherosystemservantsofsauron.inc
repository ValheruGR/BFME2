//---------------------------------------------------------------------------------------------
// Servants Of Sauron Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag			= CreateAHero:ClassName_ServantsOfSauron
	DescriptionTag		= CreateAHero:ClassDesc_ServantsOfSauron
	PowersDescTag		= CreateAHero:ClassPowersDesc_ServantsOfSauron
	UpgradeName			= Upgrade_CreateAHero_ClassServantsOfSauron
	IconImage	   = Archetype_ServantofSauron
																						
	SubClass	// Troll
		NameTag			  =	CreateAHero:SubClassName_Troll
		DescriptionTag	  =	CreateAHero:SubClassDesc_Troll
		IconImage         = CPTroll
		ButtonImage       = HICAHTroll
		//DefaultFaction              = Mordor 
		UsableFactions              = Isengard Mordor Wild 
		SpendableAttributePoints        = 25
		// In UI it should be  		=  HICAHTroll_wotr

		UpgradeName			  =	Upgrade_CreateAHero_SubClass_0
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth


		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW12 Upgrade_CHW13 Upgrade_CHW14 Upgrade_CHW15 Upgrade_CHW29 Upgrade_CHW30
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_TRLL_CHH01 @Upgrade_TRLL_CHH02 Upgrade_TRLL_CHH03
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_TRLL_CHSP01 Upgrade_TRLL_CHSP02 Upgrade_TRLL_CHSP03 Upgrade_TRLL_CHSP04 Upgrade_TRLL_CHSP05
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_TRLL_CHG01 Upgrade_TRLL_CHG02 Upgrade_TRLL_CHG03 Upgrade_TRLL_CHG04 Upgrade_TRLL_CHG05
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_URUK_CHBOD01 Upgrade_TRLL_CHBOD01 Upgrade_TRLL_CHBOD02
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute03
			MaxValueUpgrade		= Upgrade_ArmorAttribute17
			DefaultValueUpgrade	= Upgrade_ArmorAttribute10
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute11
			MaxValueUpgrade		= Upgrade_DamageMultAttribute20
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute18
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute02
			MaxValueUpgrade		= Upgrade_HealthMultAttribute13
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute07
			MaxValueUpgrade		= Upgrade_AutoHealAttribute20
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute10
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute02
			MaxValueUpgrade		= Upgrade_VisionAttribute08
			DefaultValueUpgrade	= Upgrade_VisionAttribute02
		End
        

		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = -0.106
		        FarZoom   = 0.192
		        FarFloor  = 15.760
		        FarDist   = 56.500
		        FarShift  = 13.000
		        NearPitch = -0.046
		        NearZoom  = 0.262
		        NearFloor = 78.260
		        NearDist  = 56.000
		        NearShift = 6.300
		        CloseUpPitch = -0.330
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 96.000
		        CloseUpShift = -1.700
		        PortraitPitch = -0.090
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 152.00
		        PortraitShift = -1.20
		        //NormalCam = 1.00

			
			CameraAngle	= -0.1
			MapLocation	= 0	   
		End
	End
	SubClass	// OrcRaider
		NameTag			  =	CreateAHero:SubClassName_OrcRaider
		DescriptionTag	  =	CreateAHero:SubClassDesc_OrcRaider
		IconImage         = CPOrcRaider
		ButtonImage       = HICAHOrcRaider
		// In UI it should be  		=  HICAHOrcRaider_wotr
		DefaultFaction              = Wild 
		UsableFactions              = Isengard Mordor Wild 
		SpendableAttributePoints        = 30
		
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_2
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth

		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW19 @Upgrade_CHW20 Upgrade_CHW23 Upgrade_CHW24 Upgrade_CHW28
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_Uruk_CHH02 Upgrade_Uruk_CHH03 Upgrade_Uruk_CHH04 Upgrade_ORC_CHH01
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_Uruk_CHSP01 Upgrade_Uruk_CHSP02 Upgrade_Uruk_CHSP03 Upgrade_ORC_CHSP01
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_Uruk_CHG01 Upgrade_Uruk_CHG02 Upgrade_Uruk_CHG03 Upgrade_ORC_CHG01
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_Uruk_CHB01 Upgrade_Uruk_CHB02 Upgrade_Uruk_CHB03 Upgrade_ORC_CHB01
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_ORC_CHBOD01 Upgrade_ORC_CHBOD02
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute17
			DefaultValueUpgrade	= Upgrade_ArmorAttribute12
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute04
			MaxValueUpgrade		= Upgrade_DamageMultAttribute16
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute12
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute13
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute04
			MaxValueUpgrade		= Upgrade_AutoHealAttribute15
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute16
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End

		ViewInfo
				FarPitch  = 0.074
		        FarZoom   = 0.207
		        FarFloor  = 40.760
		        FarDist   = 52.000
		        FarShift  = 12.800
		        NearPitch = -0.009
		        NearZoom  = 0.206
		        NearFloor = 52.690
		        NearDist  = 16.180
		        NearShift = 4.200
		        CloseUpPitch = -0.150
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 30.000
		        CloseUpShift = 0.600
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50


			CameraAngle	= 0.0
			MapLocation	= 0	  
		End
	End	 // SubClass Troll

	SubClass	// Uruk (With armor pieces)
		NameTag			  =	CreateAHero:SubClassName_Uruk
		DescriptionTag	  =	CreateAHero:SubClassDesc_Uruk
		IconImage         = CPUrukHai
		ButtonImage       = HICAHUrukHai
		// In UI it should be  		=  HICAHUrukHai_wotr
		DefaultFaction              = Isengard 
		UsableFactions              = Isengard Mordor Wild 
		SpendableAttributePoints        = 30
		
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_3
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth

		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW18 Upgrade_CHW19	Upgrade_CHW20 //Upgrade_CHW23 Upgrade_CHW24
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_Uruk_CHHAIR01 Upgrade_Uruk_CHH01 Upgrade_Uruk_CHH02 Upgrade_Uruk_CHH03 Upgrade_Uruk_CHH04
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_Uruk_CHSP01 Upgrade_Uruk_CHSP02 Upgrade_Uruk_CHSP03
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_Uruk_CHG01 Upgrade_Uruk_CHG02 Upgrade_Uruk_CHG03
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield Upgrade_Uruk_CHS01 Upgrade_Uruk_CHS02
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_Uruk_CHB01 Upgrade_Uruk_CHB02 Upgrade_Uruk_CHB03
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_URUK_CHBOD01 Upgrade_URUK_CHBOD02 Upgrade_URUK_CHBOD03
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute18
			DefaultValueUpgrade	= Upgrade_ArmorAttribute14
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute05
			MaxValueUpgrade		= Upgrade_DamageMultAttribute18
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute14
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute13
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute04
			MaxValueUpgrade		= Upgrade_AutoHealAttribute16
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute08
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute03
			MaxValueUpgrade		= Upgrade_VisionAttribute13
			DefaultValueUpgrade	= Upgrade_VisionAttribute04
		End

		ViewInfo
		    	FarPitch  = 0.074
		        FarZoom   = 0.207
		        FarFloor  = 40.760
		        FarDist   = 52.000
		        FarShift  = 12.800
		        NearPitch = -0.079
		        NearZoom  = 0.227
		        NearFloor = 52.690
		        NearDist  = -4.820
		        NearShift = 0.200
		        CloseUpPitch = -0.270
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 30.000
		        CloseUpShift = -0.200
		        PortraitPitch = -0.100
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 37.00
		        PortraitShift = 0.00
		        //NormalCam = 0.70

			CameraAngle= 0.0
			MapLocation = 0   
		End
	End
End
