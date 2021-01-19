//-------------------------------------------------------------------------------------------------
// Scenario Name:		War Of The North
// Scenario Description:	Fight for control of the northern lands of Middle-Earth
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of the opposing player
// Unavailable Territories:	None
// # of Players:		2 (1vs1)
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario042

	IsEvilCampaign = No

	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario042
		DisplayDescription 	= LWScenario:WOTRScenario042Description
		DisplayGameType		= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction006
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 2

		DisableRegions = Cair_Andros Enedwaith Fangorn Gap_Of_Rohan Gondor Harad Helms_Deep Isengard Ithilien Minas_Morgul Minas_Tirith Mordor Mount_Doom Osgiliath Rohan The_Black_Gate The_Dead_Marshes
		;DisallowStartInRegions = Arnor Buckland Celduin Dagorlad Dol_Guldur Dunland Erebor Ettenmoors Grey_Havens Harlindon High_Pass Iron_Hills Lothlorien Minhiriath Mirkwood Redhorn_Pass Rivendell The_Shire Tower_Hills
		DefaultStartSpots = The_Shire Celduin
		
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