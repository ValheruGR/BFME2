//-----------------------------------------------------
// Archer Class
//-----------------------------------------------------

CreateAHeroClass	
	NameTag		   = CreateAHero:ClassName_Archer
	DescriptionTag = CreateAHero:ClassDesc_Archer
	PowersDescTag  = CreateAHero:ClassPowersDesc_Archer
	UpgradeName	   = Upgrade_CreateAHero_ClassArcher
	IconImage	=	Archetype_Elf
																						

	SubClass	// Elven Archer  ModuleTag_Archer_SubClass_0
		NameTag				  =	CreateAHero:SubClassName_ElvenArcher
		DescriptionTag		 		 =	CreateAHero:SubClassDesc_MaleElvenArcher
		IconImage			  = CPMaleElfArcher
		ButtonImage          			 = HICAHMaleElfArcher
		// In UI it should be  		=  HICAHMaleElfArcher_wotr
		SpendableAttributePoints        = 30
		//DefaultFaction              = Elves 
		UsableFactions              = Men Elves Dwarves
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_0
//-------------------------------
// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth

//	-------------------------------
//	Weapons
		BlingUpgrades		  =	Upgrade_CHW08 Upgrade_CHW02
//	-------------------------------
//	Head Gear
		BlingUpgrades =	Upgrade_NoHelmet Upgrade_ELFA_CHH01	Upgrade_ELFA_CHH02
//	-------------------------------
//	Shoulder Plates
		BlingUpgrades =	Upgrade_NoShoulderPlates Upgrade_ELFA_CHSP01 Upgrade_ELFA_CHSP02 Upgrade_ELFA_CHSP03
//	-------------------------------
//	Gauntlets
		BlingUpgrades =	Upgrade_NoGauntlets	Upgrade_ELFA_CHG01 Upgrade_ELFA_CHG02 Upgrade_ELFA_CHG03
//	-------------------------------
//	Shield
		BlingUpgrades =	Upgrade_NoShield 
//	-------------------------------
//	Boots
		BlingUpgrades =	Upgrade_NoBoots	Upgrade_ELFA_CHB01 Upgrade_ELFA_CHB02
//	-------------------------------
//	Body
		BlingUpgrades =	Upgrade_ELFA_CHBOD01 Upgrade_ELFA_CHBOD02 Upgrade_ELFA_CHBOD03
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute03
			MaxValueUpgrade		= Upgrade_ArmorAttribute16
			DefaultValueUpgrade	= Upgrade_ArmorAttribute10
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute03
			MaxValueUpgrade		= Upgrade_DamageMultAttribute13
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute10
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute20
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute03
			MaxValueUpgrade		= Upgrade_AutoHealAttribute14
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute06
			MaxValueUpgrade		= Upgrade_VisionAttribute19
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
		        NearDist  = 29.000
		        NearShift = 7.000
		        CloseUpPitch = -0.290
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 30.000
		        CloseUpShift = 0.200
		        PortraitPitch = -0.060
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 49.00
		        PortraitShift = 0.90
		        //NormalCam = 0.50




		      

			MapLocation	= 6
		End
	End
	
	SubClass	// Female Elven Archer  ModuleTag_Archer_SubClass_1
		NameTag		   = CreateAHero:SubClassName_FemaleElvenArcher
		DescriptionTag = CreateAHero:SubClassDesc_FemaleElvenArcher
		IconImage	   = CPFemaleElfArcher
		ButtonImage	   = HICAHFemaleElvenArcher
		// In UI it should be  	=  HICAHFemaleElvenArcher_wotr
		DefaultFaction              = Elves 
		UsableFactions              = Men Elves Dwarves 
		SpendableAttributePoints        = 30

		UpgradeName	   = Upgrade_CreateAHero_SubClass_1
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth


		//-------------------------------
		// Weapons
		BlingUpgrades =	Upgrade_CHW08 Upgrade_CHW02
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_FEARCH_CHH03 Upgrade_FEARCH_CHH04
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_FEARCH_CHSP01 Upgrade_FEARCH_CHSP02 Upgrade_FEARCH_CHSP03 Upgrade_FEARCH_CHSP04 Upgrade_FEARCH_CHSP05
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_FEARCH_CHG01 Upgrade_FEARCH_CHG02 Upgrade_FEARCH_CHG03 Upgrade_FEARCH_CHG04 Upgrade_FEARCH_CHG05
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield 
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_FEARCH_CHB01 Upgrade_FEARCH_CHB02 Upgrade_FEARCH_CHB03 Upgrade_FEARCH_CHB04 Upgrade_FEARCH_CHB05
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_FEARCH_CHBOD01 @Upgrade_FEARCH_CHBOD02 //Upgrade_FEARCH_CHBOD03
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute03
			MaxValueUpgrade		= Upgrade_ArmorAttribute16
			DefaultValueUpgrade	= Upgrade_ArmorAttribute10
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute03
			MaxValueUpgrade		= Upgrade_DamageMultAttribute12
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute08
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute20
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute03
			MaxValueUpgrade		= Upgrade_AutoHealAttribute14
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute06
			MaxValueUpgrade		= Upgrade_VisionAttribute20
			DefaultValueUpgrade	= Upgrade_VisionAttribute14
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
		        NearDist  = 30.000
		        NearShift = 3.700
		        CloseUpPitch = -0.270
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 30.000
		        CloseUpShift = -0.100
		        PortraitPitch = -0.080
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 43.00
		        PortraitShift = 0.00
		        //NormalCam = 0.50


		      

			MapLocation	= 6
		End
	End
End

