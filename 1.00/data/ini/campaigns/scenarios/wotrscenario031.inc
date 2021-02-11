//-------------------------------------------------------------------------------------------------
// Scenario Name:		World Domination (30) - 5 Players
// Scenario Description:	This is a freeform game of the World Domination mode with 5 preset starting locations (Celduin Fangorn Forlindon Harad Minhiriath)
// Game Type:			World Domination
// Win Conditions:		Player must be the first to conquer 30 territories
// Unavailable Territories:	None
// # of Players:		5
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario031

	IsEvilCampaign = No

	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"
	
	Scenario
		DisplayName 		= LWScenario:WOTRScenario031
		DisplayDescription 	= LWScenario:WOTRScenario031Description
		DisplayGameType 	= LWScenario:WOTRGameType003
		DisplayObjectives 	= LWScenario:WOTRObjectives004
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTRGenericWin001
		DisplayDefeatedText	= LWScenario:WOTRGenericLose001

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
		
		TeamVictoryCondition
			Teams = 1 2
			NumControlledRegionsGreaterOrEqualTo = 30
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