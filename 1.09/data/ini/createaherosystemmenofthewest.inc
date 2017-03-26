//---------------------------------------------------------------------------------------------
// Men of The West Class
//---------------------------------------------------------------------------------------------

CreateAHeroClass
	NameTag		   = CreateAHero:ClassName_HeroesOfTheWest
	DescriptionTag = CreateAHero:ClassDesc_HeroesOfTheWest
	PowersDescTag  = CreateAHero:ClassPowersDesc_HeroesOfTheWest
	UpgradeName	   = Upgrade_CreateAHero_ClassHeroOfTheWest
	IconImage	   = Archetype_HerooftheWest																					
																						
	SubClass // Captain Of Gondor
		NameTag				  =	CreateAHero:SubClassName_CaptainOfGondor
		DescriptionTag		  =	CreateAHero:SubClassDesc_CaptainOfGondor
		IconImage			  = CPCaptainofGondor
		ButtonImage           		= HICAHCaptainGondor
		// In UI it should be  		=  HICAHCaptainGondor_wotr
		DefaultFaction              = Men 
		UsableFactions              = Men Elves Dwarves
		SpendableAttributePoints        = 28
		
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_0
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth


		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW03 Upgrade_CHW04	Upgrade_CHW05 Upgrade_CHW06 Upgrade_CHW27
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet @Upgrade_CaptainOfGondor_CHH01 Upgrade_CaptainOfGondor_CHH02 Upgrade_CaptainOfGondor_CHH03
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_CaptainOfGondor_CHSP01 Upgrade_CaptainOfGondor_CHSP02
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_CaptainOfGondor_CHG01 Upgrade_CaptainOfGondor_CHG02 Upgrade_CaptainOfGondor_CHG03
		//-------------------------------
		// Shield
		BlingUpgrades =  Upgrade_NoShield Upgrade_CAPG_CHS01 @Upgrade_CAPG_CHS02 Upgrade_CAPG_CHS03 Upgrade_CAPG_CHS04
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_CaptainOfGondor_CHB01 Upgrade_CaptainOfGondor_CHB02 Upgrade_CaptainOfGondor_CHB03
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_CAPG_CHBOD01 Upgrade_CAPG_CHBOD02 Upgrade_CAPG_CHBOD03
		DefaultPrimaryColor	  =	R:150 G:150	B:150
		DefaultSecondaryColor =	R:150 G:150	B:150
		DefaultTertiaryColor  =	R:150 G:150	B:150

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute05
			MaxValueUpgrade		= Upgrade_ArmorAttribute20
			DefaultValueUpgrade	= Upgrade_ArmorAttribute16
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute04
			MaxValueUpgrade		= Upgrade_DamageMultAttribute17
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute12
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute15
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute05
			MaxValueUpgrade		= Upgrade_AutoHealAttribute18
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute14
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End
        
        
		// Camera used to view object with in create a hero
		// NormaCam == 1.0 means it is at far location
		ViewInfo
				FarPitch  = -0.066
		        FarZoom   = 0.210
		        FarFloor  = 15.760
		        FarDist   = 20.500
		        FarShift  = 5.900
		        NearPitch = 0.354
		        NearZoom  = 0.254
		        NearFloor = 74.260
		        NearDist  = 40.000
		        NearShift = 5.300
		        CloseUpPitch = -0.300
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 29.000
		        CloseUpShift = 0.100
		        PortraitPitch = -0.050
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 55.00
		        PortraitShift = 0.50
		        //NormalCam = 0.50


		      

		    


			MapLocation	= 6
		End
	End

	SubClass // Shield Maiden
		NameTag				  =	CreateAHero:SubClassName_SheildMaiden
		DescriptionTag		  =	CreateAHero:SubClassDesc_ShieldMaiden
		//IconImage			  =	CPShieldMaidenAlpha
		IconImage			  = CPShieldMaiden
		ButtonImage           = HICAHShieldMaiden
		// In UI it should be  		=  HICAHShieldMaiden_wotr
		//DefaultFaction              = Men 
		UsableFactions              = Men Elves Dwarves
		SpendableAttributePoints        = 28
		
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_1
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth

		//	-------------------------------
		//	Weapons
		BlingUpgrades	=	Upgrade_CHW03 Upgrade_CHW04	Upgrade_CHW05 Upgrade_CHW06 Upgrade_CHW27 Upgrade_CHW28
		//	-------------------------------
		//	Head Gear
		BlingUpgrades	 =	Upgrade_NoHelmet Upgrade_SHIM_CHH01	Upgrade_SHIM_CHH02 Upgrade_SHIM_CHH03
		//	-------------------------------
		//	Shoulder Plates
		BlingUpgrades	=	Upgrade_NoShoulderPlates Upgrade_SHIM_CHSP01 Upgrade_SHIM_CHSP02 Upgrade_SHIM_CHSP03
		//	-------------------------------
		//	Gauntlets
		BlingUpgrades	=	Upgrade_NoGauntlets	Upgrade_SHIM_CHG01 Upgrade_SHIM_CHG02 Upgrade_SHIM_CHG03
		//	-------------------------------
		//	Shield
		BlingUpgrades	=	Upgrade_NoShield Upgrade_CAPG_CHS01 Upgrade_CAPG_CHS02 @Upgrade_CAPG_CHS03 Upgrade_CAPG_CHS04
		//	-------------------------------
		//	Boots
		BlingUpgrades	=	Upgrade_NoBoots	Upgrade_SHIM_CHB01 Upgrade_SHIM_CHB02 Upgrade_SHIM_CHB03
		//	-------------------------------
		//	Body
		BlingUpgrades		  =	Upgrade_SHIM_CHBOD01 Upgrade_SHIM_CHBOD02 Upgrade_SHIM_CHBOD03
		DefaultPrimaryColor	  =	R:255 G:255	B:255
		DefaultSecondaryColor =	R:255 G:255	B:255
		DefaultTertiaryColor  =	R:255 G:255	B:255
        
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute05
			MaxValueUpgrade		= Upgrade_ArmorAttribute20
			DefaultValueUpgrade	= Upgrade_ArmorAttribute12
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute04
			MaxValueUpgrade		= Upgrade_DamageMultAttribute17
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute19
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute14
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute05
			MaxValueUpgrade		= Upgrade_AutoHealAttribute18
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute08
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute13
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End
        

		// Camera used to view object with in create	a hero
		ViewInfo
		        FarPitch  = -0.066
		        FarZoom   = 0.210
		        FarFloor  = 15.760
		        FarDist   = 20.500
		        FarShift  = 5.900
		        NearPitch = 0.394
		        NearZoom  = 0.254
		        NearFloor = 74.260
		        NearDist  = 30.000
		        NearShift = 3.700
		        CloseUpPitch = -0.260
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 33.000
		        CloseUpShift = -0.300
		        PortraitPitch = -0.050
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 53.00
		        PortraitShift = 0.00
		        //NormalCam = 0.50


		      


			MapLocation	= 6
		End
        
	End
End
