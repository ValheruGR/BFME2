//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - 6 Players
// Scenario Description:	This is a 6 player game of the Capital Assault mode with 6 preset starting locations (Cair_Andros Enedwaith Ettenmoors Iron_Hills Lothlorien Mount_Doom)
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario002

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"
	
	Scenario
		DisplayName 		= LWScenario:WOTRScenario002
		DisplayDescription 	= LWScenario:WOTRScenario002Description
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 6
		
		DisallowStartInRegions = Arnor Buckland Celduin Dagorlad Dol_Guldur Dunland Erebor Fangorn Forlindon Gap_Of_Rohan Gondor Grey_Havens Harad Harlindon Helms_Deep High_Pass Isengard Ithilien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Mordor Osgiliath Redhorn_Pass Rhun Rivendell Rohan The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills
		DefaultStartSpots = Enedwaith Mount_Doom Ettenmoors Iron_Hills Lothlorien Cair_Andros
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = Yes
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
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