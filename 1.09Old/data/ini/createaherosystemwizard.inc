//---------------------------------------------------------------------------------------------
// Istari Wizard Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag		   = CreateAHero:ClassName_IstariWizard
	DescriptionTag = CreateAHero:ClassDesc_IstariWizard
	PowersDescTag  = CreateAHero:ClassPowersDesc_IstariWizard
	UpgradeName	   = Upgrade_CreateAHero_ClassIstariWizard
	IconImage	   = Archetype_Wizard
																						
	SubClass	// Wanderer
		NameTag		   = CreateAHero:SubClassName_Wanderer
		DescriptionTag = CreateAHero:SubClassDesc_IstariWizard
		IconImage	   = CPWanderer
		ButtonImage	   = HICAHWanderer
		// In UI it should be  		=  HICAHWanderer_wotr
		// DefaultFaction              = Isengard 
		UsableFactions              = Men Elves Dwarves Isengard Mordor Wild 
		SpendableAttributePoints        = 30
		UpgradeName	   = Upgrade_CreateAHero_SubClass_0
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth

		//-------------------------------
		// Weapons
		BlingUpgrades		  =	@Upgrade_CHW07 Upgrade_CHW09	Upgrade_CHW10 Upgrade_CHW11
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_WIZ_CHH01 Upgrade_WIZ_CHH02 @Upgrade_WIZ_CHH03 Upgrade_WIZ_CHH04 Upgrade_WIZ_CHH05 Upgrade_WIZ_CHH06 Upgrade_WIZ_CHH07
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_WIZ_CHSP01 Upgrade_WIZ_CHSP02
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets 
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots
		//-------------------------------
		// Body
		BlingUpgrades = @Upgrade_WIZ_CHBOD01 Upgrade_WIZ_CHBOD02 Upgrade_WIZ_CHBOD03
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute02
			MaxValueUpgrade		= Upgrade_ArmorAttribute14
			DefaultValueUpgrade	= Upgrade_ArmorAttribute05
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute02
			MaxValueUpgrade		= Upgrade_DamageMultAttribute15
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute05
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
			MaxValueUpgrade		= Upgrade_AutoHealAttribute16
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute09
			MaxValueUpgrade		= Upgrade_VisionAttribute17
			DefaultValueUpgrade	= Upgrade_VisionAttribute12
		End
        

		// Camera used to view object with in create a hero
		ViewInfo
		        FarPitch  = -0.066
		        FarZoom   = 0.210
		        FarFloor  = 15.760
		        FarDist   = 20.500
		        FarShift  = 5.900
		        NearPitch = 0.364
		        NearZoom  = 0.254
		        NearFloor = 74.260
		        NearDist  = 36.000
		        NearShift = 7.000
		        CloseUpPitch = -0.260
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 35.000
		        CloseUpShift = 0.400
		        PortraitPitch = -0.080
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 57.00
		        PortraitShift = 1.10
		        //NormalCam = 0.00



		      


		    


			MapLocation	= 6
		End
	End
	SubClass	// Avatar
		NameTag		   = CreateAHero:SubClassName_Avatar
		DescriptionTag = CreateAHero:SubClassDesc_Avatar
		UpgradeName	   = Upgrade_CreateAHero_SubClass_1
		IconImage	   = CPAvatar
		ButtonImage	   = HICAHAvatar
		// In UI it should be  		=  HICAHAvatar_wotr
		// DefaultFaction              = Men 
		UsableFactions              = Men Elves Dwarves Isengard Mordor Wild 
		SpendableAttributePoints        = 30
		
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth

		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW07 Upgrade_CHW09	@Upgrade_CHW10 Upgrade_CHW11
		//-------------------------------
		// Head	Gear
		BlingUpgrades = @Upgrade_NoHelmet Upgrade_WIZ_CHH01 Upgrade_WIZ_CHH02 Upgrade_WIZ_CHH03 Upgrade_WIZ_CHH04 Upgrade_WIZ_CHH05 Upgrade_WIZ_CHH06 Upgrade_WIZ_CHH07
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_WIZ_CHSP01 Upgrade_WIZ_CHSP02
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_WIZ_CHBOD01 Upgrade_WIZ_CHBOD02 @Upgrade_WIZ_CHBOD03
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute16
			DefaultValueUpgrade	= Upgrade_ArmorAttribute10
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute03
			MaxValueUpgrade		= Upgrade_DamageMultAttribute15
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute02
			MaxValueUpgrade		= Upgrade_HealthMultAttribute12
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute02
			MaxValueUpgrade		= Upgrade_AutoHealAttribute16
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute02
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute09
			MaxValueUpgrade		= Upgrade_VisionAttribute17
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End

		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = -0.066
		        FarZoom   = 0.210
		        FarFloor  = 15.760
		        FarDist   = 20.500
		        FarShift  = 5.900
		        NearPitch = 0.394
		        NearZoom  = 0.254
		        NearFloor = 74.260
		        NearDist  = 35.000
		        NearShift = 6.100
		        CloseUpPitch = -0.280
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 30.000
		        CloseUpShift = 0.500
		        PortraitPitch = -0.080
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 53.00
		        PortraitShift = 0.50
		        //NormalCam = 0.00




		      

			MapLocation	= 6
		End
	End
	SubClass	// Hermit
		NameTag		   = CreateAHero:SubClassName_Hermit
		DescriptionTag = CreateAHero:ClassPowersDesc_Hermit
		UpgradeName	   = Upgrade_CreateAHero_SubClass_2
		IconImage	   = CPHermit
		ButtonImage	   = HICAHHermit
		// In UI it should be  		=  HICAHHermit_wotr
		//DefaultFaction              = Wild 
		UsableFactions              = Men Elves Dwarves Isengard Mordor Wild 
		SpendableAttributePoints        = 30
		
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth

		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW07 @Upgrade_CHW09	Upgrade_CHW10 Upgrade_CHW11
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_WIZ_CHH01 @Upgrade_WIZ_CHH02 Upgrade_WIZ_CHH03 Upgrade_WIZ_CHH04 Upgrade_WIZ_CHH05 Upgrade_WIZ_CHH06 Upgrade_WIZ_CHH07
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_WIZ_CHSP01 Upgrade_WIZ_CHSP02
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets 
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_WIZ_CHBOD01 @Upgrade_WIZ_CHBOD02 Upgrade_WIZ_CHBOD03
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute02
			MaxValueUpgrade		= Upgrade_ArmorAttribute14
			DefaultValueUpgrade	= Upgrade_ArmorAttribute08
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute02
			MaxValueUpgrade		= Upgrade_DamageMultAttribute15
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute04
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute03
			MaxValueUpgrade		= Upgrade_HealthMultAttribute12
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute04
			MaxValueUpgrade		= Upgrade_AutoHealAttribute18
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute09
			MaxValueUpgrade		= Upgrade_VisionAttribute17
			DefaultValueUpgrade	= Upgrade_VisionAttribute12
		End

		// Camera used to view object with in create a hero
		ViewInfo
			    FarPitch  = -0.066
		        FarZoom   = 0.210
		        FarFloor  = 15.760
		        FarDist   = 20.500
		        FarShift  = 5.900
		        NearPitch = 0.424
		        NearZoom  = 0.254
		        NearFloor = 74.260
		        NearDist  = 30.000
		        NearShift = 5.800
		        CloseUpPitch = -0.260
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 33.000
		        CloseUpShift = 0.400
		        PortraitPitch = -0.120
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 50.00
		        PortraitShift = 0.80
		        //NormalCam = 0.50

		      

		        //NormalCam = 0.3

		    


			MapLocation	= 6
		End
	End
End

