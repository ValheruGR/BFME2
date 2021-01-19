//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - 2 Players, All territories claimed
// Scenario Description:	This is a 2 player game of the Capital Assault mode with all territories claimed by 2 preset starting locations (Harlindon Rhun)
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario011

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario011
		DisplayDescription 	= LWScenario:WOTRScenario011Description
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 2
		
		DisallowStartInRegions = Arnor Buckland Cair_Andros Celduin Dagorlad Dol_Guldur Dunland Enedwaith Erebor Ettenmoors Fangorn Forlindon Gap_Of_Rohan Gondor Grey_Havens Harad Helms_Deep High_Pass Iron_Hills Isengard Ithilien Lothlorien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Mordor Mount_Doom Osgiliath Redhorn_Pass Rivendell Rohan The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills
		DefaultStartSpots = Harlindon Rhun
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = Yes
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
			Regions = Arnor Buckland Dunland Enedwaith Ettenmoors Fangorn Forlindon Gap_Of_Rohan Gondor Grey_Havens Harlindon Helms_Deep Isengard Lothlorien Minhiriath Redhorn_Pass Rivendell The_Shire Tower_Hills
			StartRegion = Harlindon
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Harlindon
			End
		End

		OwnershipSet
			Regions = Cair_Andros Celduin Dagorlad Dol_Guldur Erebor Harad High_Pass Iron_Hills Ithilien Minas_Morgul Minas_Tirith Mirkwood Mordor Mount_Doom Osgiliath Rhun Rohan The_Black_Gate The_Dead_Marshes
			StartRegion = Rhun
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Rhun
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