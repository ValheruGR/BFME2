//-------------------------------------------------------------------------------------------------
// Scenario Name:		Stronghold Struggle
// Scenario Description:	The strongholds of Middle-Earth must be secured by a single force.  Only then will the balance of the world be tipped into the Light or the Dark.
// Game Type:			Conquest
// Win Conditions:		The player must conquer Dol Guldur, Erebor, Helms Deep, Isengard, Minas Morgul, Minas Tirith, and Rivendell.
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario041

	IsEvilCampaign = No

	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario041
		DisplayDescription 	= LWScenario:WOTRScenario041Description
		DisplayGameType		= LWScenario:WOTRGameType004
		DisplayObjectives 	= LWScenario:WOTRObjectives006
		DisplayFiction 		= LWScenario:WOTRScenarioFiction005
		DisplayVictoriousText	= LWScenario:WOTRGenericWin002
		DisplayDefeatedText	= LWScenario:WOTRGenericLose002

		RegionCampaign = DefaultCampaign

		DisallowStartInRegions = Dol_Guldur Erebor Helms_Deep Isengard Minas_Morgul Minas_Tirith Rivendell
		DefaultStartSpots = The_Shire Mordor Iron_Hills Gondor High_Pass Rohan
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = No
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamVictoryCondition
			Teams = 1 2
			ControlledRegions = Dol_Guldur Erebor Helms_Deep Isengard Minas_Morgul Minas_Tirith Rivendell
			//ControlledRegionsHeldForTurns = 3
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