//-------------------------------------------------------------------------------------------------
// Scenario Name:		Elimination - 5 Players, All territories claimed
// Scenario Description:	This is a 5 player game of the Elimination mode with all territories claimed by 5 preset starting locations (Celduin Fangorn Forlindon Harad Minhiriath)
// Game Type:			Elimination
// Win Conditions:		Player must conquer all the territories of each opposing team member
// Unavailable Territories:	None
// # of Players:		5
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario019

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario019
		DisplayDescription 	= LWScenario:WOTRScenario019Description
		DisplayGameType 	= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 5
		
		DisallowStartInRegions = Arnor Buckland Cair_Andros Dagorlad Dol_Guldur Dunland Enedwaith Erebor Ettenmoors Gap_Of_Rohan Gondor Grey_Havens Harlindon Helms_Deep High_Pass Iron_Hills Isengard Ithilien Lothlorien Minas_Morgul Minas_Tirith Mirkwood Mordor Mount_Doom Osgiliath Redhorn_Pass Rhun Rivendell Rohan The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills
		DefaultStartSpots = Forlindon Harad Celduin Minhiriath Fangorn
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = No
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		//----------------------------------------------------------
		// OwnershipSets
		//----------------------------------------------------------

		OwnershipSet
			Regions = Arnor Buckland Ettenmoors Forlindon Grey_Havens Harlindon The_Shire Tower_Hills
			StartRegion = Forlindon
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Forlindon
			End
		End
		
		OwnershipSet
			Regions = Dunland Enedwaith Gap_Of_Rohan Isengard Minhiriath Redhorn_Pass Rivendell
			StartRegion = Minhiriath
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Minhiriath
			End
		End

		OwnershipSet
			Regions = Cair_Andros Fangorn Helms_Deep Lothlorien Rohan The_Black_Gate The_Dead_Marshes
			StartRegion = Fangorn
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Fangorn
			End
		End

		OwnershipSet
			Regions = Celduin Dagorlad Dol_Guldur Erebor High_Pass Iron_Hills Mirkwood Rhun
			StartRegion = Celduin
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Celduin
			End
		End

		OwnershipSet
			Regions = Gondor Harad Ithilien Minas_Morgul Minas_Tirith Mordor Mount_Doom Osgiliath
			StartRegion = Harad
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Harad
			End
		End
	End
	
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

		;///////////////// Armies ////////////////
		#include "..\Common\LivingWorldDefaultArmies.inc"


		;//////////////// Cities (Yes, this is a hack for mouse over movies.) ////////////////
		//#include "..\Common\LivingWorldCities.inc"


		;//////////////// VISUAL FLUFF ////////////////
		EyeTowerPoints
			LookPoint = X:436 Y:687 ; Rohan
			LookPoint = X:481 Y:287
			LookPoint = X:1179 Y:461
			LookPoint = X:947 Y:917
			LookPoint = X:172 Y:573 ; Isengard
			LookPoint = X:160 Y:560 ; Isengard
			LookPoint = X:175 Y:557 ; Isengard
			LookPoint = X:171 Y:348 ; Helm's Deep
			LookPoint = X:257 Y:535 ; Helm's Deep
			LookPoint = X:120 Y:350 ; Helm's Deep
			LookPoint = X:157 Y:420 ; Helm's Deep
		End		
	End
End