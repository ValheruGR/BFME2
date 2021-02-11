LivingWorldCampaign WOTRTutorial

	IsEvilCampaign = No
	IsScriptedCampaign = Yes
	
	AddPlayer GoodPlayer
		PlayerTemplate = PlayerMen
		AITemplate = DefaultAITemplate
		BaseRegion = Cair_Andros
		MP_SlotColorIndex = 0			;<-- Multiplayer color index to use in tactical mode
		TeamNumber = 0
	End
	
	AddPlayer EvilPlayer
		PlayerTemplate = PlayerMordor
		IsDumb = Yes                ;<-- Never human (they're smrt), AI never does anything
		BaseRegion = Mount_Doom
		MP_SlotColorIndex = 1
		TeamNumber = 1
	End
	
	LocalPlayer = GoodPlayer
	

	Scenario
		DisplayName = LWScenario:WOTRScenario001
		DisplayDescription = LWScenario:WOTRScenario001Description
		RegionCampaign = TutorialCampaign
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = Yes
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		OwnershipSet
			Regions = Cair_Andros Rohan Minas_Tirith Osgiliath Gondor Helms_Deep
			SpawnBuildings
				Region = Rohan
				Buildings = LW_FORT LW_FARM
			End
			SpawnBuildings
				Region = Osgiliath
				Buildings = LW_FARM LW_BARRACKS
			End
			SpawnBuildings
				Region = Cair_Andros
				Buildings = LW_FARM
			End
			SpawnBuildings
				Region = Helms_Deep
				Buildings = LW_FARM
			End
			SpawnBuildings
				Region = Gondor
				Buildings = LW_FORT LW_ARMORY
			End
		End
		
		OwnershipSet
			Regions = Mount_Doom Mordor
			SpawnBuildings
				Region = Mount_Doom
				Buildings = LW_FARM LW_BARRACKS
			End
			SpawnBuildings
				Region = Mordor
				Buildings = LW_FORT LW_ARMORY
			End
		End
	End
	
	
	Tutorial
		
		Turn 1
			Phase Planning
				Session
					TaskAfterAudio	// Well there's not any audio but that's ok, this just gives an army a move order and keeps going to the next session.
						Task = ScriptedArmyMove
						Params = MordorHeroArmy2 The_Black_Gate
					End
				End
				Session
					Audio = WOTR_Tutorial001
					Text = WOTRTutorial:LW_InstructionText01
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial002	; "Here you will learn the basics of how to build an empire to rule them all"
//				End
				Session
					Audio = WOTR_Tutorial003
					Text = WOTRSCRIPT:WOTR_Tutorial003subtitle
					;Text = WOTRTutorial:LW_InstructionText02
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial004
					Text = WOTRSCRIPT:WOTR_Tutorial004subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial005
					Text = WOTRTutorial:LW_InstructionText03
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial006
					Text = WOTRTutorial:LW_InstructionText04
				End
				Session
					Audio = WOTR_Tutorial007
					ClearPreviousText = No		// This is the default, but here as an example.
				End
				Session
					Audio = WOTR_Tutorial008
					;TaskAfterAudio
					;	Task = ZoomScroll
					;	Text = MISSING_TEXT
					;End
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial009
//					TaskAfterAudio
//						Task = ScriptedDelay
//						Params = 1.0
//					End
//				End
				Session
					Audio = WOTR_Tutorial010
					Text = WOTRSCRIPT:WOTR_Tutorial010subtitle
				End
				Session
					Audio = WOTR_Tutorial011
					Text = WOTRTutorial:LW_InstructionText05
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial012
//				End
				Session
					Audio = WOTR_Tutorial013
					Text = WOTRSCRIPT:WOTR_Tutorial013subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial014	; "Turn 1"
//					TaskAfterAudio
//						Task = ScriptedDelay
//						Params = 1.0
//					End
//				End
//				Session
//					Audio = WOTR_Tutorial015	; "Tactical Phase"
//					TaskAfterAudio
//						Task = ScriptedDelay
//						Params = 1.0
//					End
//				End
				Session
					Audio = WOTR_Tutorial016
					Text = WOTRTutorial:LW_InstructionText06
				End
				Session
					Audio = WOTR_Tutorial017
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial018
					Text = WOTRSCRIPT:WOTR_Tutorial018subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial019	; "Structure Construction"
//				End
				Session
					Audio = WOTR_Tutorial020
					Text = WOTRTutorial:LW_InstructionText07
				End
				Session
					Audio = WOTR_Tutorial021
					Text = WOTRSCRIPT:WOTR_Tutorial021subtitle
					;Text = WOTRTutorial:LW_InstructionText08
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial022
//				End
				Session
					Audio = WOTR_Tutorial023	; "To build a new structure..."
					Text = WOTRTutorial:LW_InstructionText09
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial024
					Text = WOTRSCRIPT:WOTR_Tutorial024subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = BuildBarracks
						Params = Cair_Andros
						Text = WOTRTutorial:BuildBarracksCairAndros
					End
				End
				Session
					Audio = WOTR_Tutorial025	; "Good job"
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial026
					Text = WOTRTutorial:LW_InstructionText10
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial027
					Text = WOTRSCRIPT:WOTR_Tutorial027subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial028
					Text = WOTRSCRIPT:WOTR_Tutorial028subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
				End
			End
			
			Phase ResolveBattles
				Session
					Audio = WOTR_Tutorial029	; "Battle Phase"
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial030
					Text = WOTRTutorial:LW_InstructionText11
				End
				Session
					Audio = WOTR_Tutorial031
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial032
					Text = WOTRSCRIPT:WOTR_Tutorial032subtitle
				End
			End
			
			Phase PlanRetreats
				Session
					Audio = WOTR_Tutorial033	; "Retreat Phase"
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial034
					Text = WOTRSCRIPT:WOTR_Tutorial034subtitle
					;Text = WOTRTutorial:LW_InstructionText12
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial035
					Text = WOTRSCRIPT:WOTR_Tutorial035subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial036
					Text = WOTRSCRIPT:WOTR_Tutorial036subtitle
					TaskAfterAudio
						Task = ScriptedDelay	// Turn advances immediately, but give them time to read the text.
						Params = 1.5
					End
				End
			End
		End
		
		
		Turn 2
			Phase Planning
				Session
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedArmyMove
						Params = MordorHeroArmy1 Minas_Morgul
					End
				End
				Session
					Audio = WOTR_Tutorial037	; "Turn 2"
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial038	; "Tactical Phase"
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial039
					Text = WOTRSCRIPT:WOTR_Tutorial039subtitle
				End
				Session
					Audio = WOTR_Tutorial040
					Text = WOTRSCRIPT:WOTR_Tutorial040subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial041	; "Unit Training"
//				End
				Session
					Audio = WOTR_Tutorial042
					Text = WOTRSCRIPT:WOTR_Tutorial042subtitle
					;Text = WOTRTutorial:LW_InstructionText13
				End
				Session
					Audio = WOTR_Tutorial043
					Text = WOTRSCRIPT:WOTR_Tutorial043subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial044	; "The number of units that can reside at each army and territory are also bound by their own command point limits"
//				End
				Session
					Audio = WOTR_Tutorial045
					Text = WOTRTutorial:LW_InstructionText14
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial046
					Text = WOTRSCRIPT:WOTR_Tutorial046subtitle
					;Text = WOTRTutorial:LW_InstructionText15
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial047	; "To train a new battalion..."
					Text = WOTRTutorial:LW_InstructionText16
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial048
					Text = WOTRSCRIPT:WOTR_Tutorial048subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = TrainUnit
						Params = Cair_Andros
						Text = WOTRTutorial:TrainTroopsCairAndros
					End
				End
				Session
					Audio = WOTR_Tutorial049	; "Well done"
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial050
					Text = WOTRTutorial:LW_InstructionText17
				End
				Session
					Audio = WOTR_Tutorial051
					Text = WOTRSCRIPT:WOTR_Tutorial051subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
				End
			End
			
			Phase ResolveBattles
				Session
					Audio = WOTR_Tutorial052
					Text = WOTRSCRIPT:WOTR_Tutorial052subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial053	; "The turn is finished and now another turn begins"
//				End
			End
			
			Phase PlanRetreats
				// Nothing
			End
		End
		
		
		Turn 3
			Phase Planning
				Session
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedArmyMove
						Params = MordorHeroArmy1 Osgiliath
					End
				End
				Session
					TaskAfterAudio
						Task = ScriptedArmyMove
						Params = MordorHeroArmy2 The_Dead_Marshes
					End
				End
				Session
					Audio = WOTR_Tutorial054	; "Turn 3"
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial055	; "Tactical Phase"
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial056
					Text = WOTRSCRIPT:WOTR_Tutorial056subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial057
					Text = WOTRSCRIPT:WOTR_Tutorial057subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial058	; "Army Movement"
//				End
				Session
					Audio = WOTR_Tutorial059
					Text = WOTRTutorial:LW_InstructionText18
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial060
					Text = WOTRTutorial:LW_InstructionText19
				End
				Session
					Audio = WOTR_Tutorial061
					Text = WOTRTutorial:LW_InstructionText20
				End
				Session
					Audio = WOTR_Tutorial062	; "To examine the composition of an army..."
					Text = WOTRTutorial:LW_InstructionText21
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial063
					Text = WOTRSCRIPT:WOTR_Tutorial063subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = OpenDetailsPanel
						Params = Cair_Andros
						Text = WOTRTutorial:InspectArmyCairAndros
					End
				End
				Session
					Audio = WOTR_Tutorial064
					Text = WOTRSCRIPT:WOTR_Tutorial064subtitle
				End
				Session
					Audio = WOTR_Tutorial065
					Text = WOTRSCRIPT:WOTR_Tutorial065subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial066
					Text = WOTRSCRIPT:WOTR_Tutorial066subtitle
					;Text = WOTRTutorial:LW_InstructionText22
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial067	; "To order a garrison army to join a hero army..."
					Text = WOTRTutorial:LW_InstructionText23
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial069
					Text = WOTRSCRIPT:WOTR_Tutorial069subtitle
				End
				Session
					Audio = WOTR_Tutorial068
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = MergeGarrison
						Params = Cair_Andros MenHeroArmy1
						Text = WOTRTutorial:MergeGarrisonWithAragorn
					End
				End
				Session
					Audio = WOTR_Tutorial070	; "Excellent"
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial071
					Text = WOTRSCRIPT:WOTR_Tutorial071subtitle
					;Text = WOTRTutorial:LW_InstructionText24
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
//				Session
//					Audio = WOTR_Tutorial072	; "Acquiring territories collects bonuses for youe empire"
//				End
				Session
					Audio = WOTR_Tutorial073	; "To order a hero army to move into a territory..."
					Text = WOTRTutorial:LW_InstructionText25
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial075
					Text = WOTRSCRIPT:WOTR_Tutorial075subtitle
				End
				Session
					Audio = WOTR_Tutorial074
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = MoveHeroArmyToRegion
						Params = MenHeroArmy1 The_Dead_Marshes
						Text = WOTRTutorial:MoveAragornToDeadMarshes
					End
				End
				Session
					Audio = WOTR_Tutorial076	; "Very good"
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial077
					Text = WOTRSCRIPT:WOTR_Tutorial077subtitle
				End
			End
			
			Phase ResolveBattles
				Session
					Audio = WOTR_Tutorial078	; "Battle Phase"
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial079
					Text = WOTRSCRIPT:WOTR_Tutorial079subtitle
				End
				Session
					Audio = WOTR_Tutorial080
					Text = WOTRTutorial:LW_InstructionText26
				End
				Session
					Audio = WOTR_Tutorial081	; "To settle the encounter..."
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial082
					Text = WOTRSCRIPT:WOTR_Tutorial082subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = SelectBattle
						Params = Osgiliath
					End
				End
				Session
					Audio = WOTR_Tutorial083
					Text = WOTRSCRIPT:WOTR_Tutorial083subtitle
					Text = WOTRTutorial:LW_InstructionText27
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial084
					Text = WOTRTutorial:LW_InstructionText28
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial085
					Text = WOTRSCRIPT:WOTR_Tutorial085subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial086
					Text = WOTRSCRIPT:WOTR_Tutorial086subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial087
					Text = WOTRSCRIPT:WOTR_Tutorial087subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial088
					Text = WOTRSCRIPT:WOTR_Tutorial088subtitle
				End
				Session
					Audio = WOTR_Tutorial089
					Text = WOTRSCRIPT:WOTR_Tutorial089subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial090
					Text = WOTRSCRIPT:WOTR_Tutorial090subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = EnableAutoResolveButtonAndWaitForCompletion
						Params = Osgiliath
					End
				End
				Session
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.5
					End
				End
				Session
					Audio = WOTR_Tutorial091
					Text = WOTRSCRIPT:WOTR_Tutorial091subtitle
				End
				Session
					Audio = WOTR_Tutorial092
					Text = WOTRSCRIPT:WOTR_Tutorial092subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial093
					Text = WOTRSCRIPT:WOTR_Tutorial093subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = SelectBattle
						Params = The_Dead_Marshes
					End
				End
				// Immediately enable the user to auto-resolve this battle, they've already heard the schpiel
				Session
					Audio = Gui_WORTutorialCue
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = EnableAutoResolveButtonAndWaitForCompletion
						Params = The_Dead_Marshes
					End
				End
				Session
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.5
					End
				End
				Session
					Audio = WOTR_Tutorial094	; "You have defeated the enemy. Well done"
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial095
					Text = WOTRSCRIPT:WOTR_Tutorial095subtitle
				End
				Session
					Audio = WOTR_Tutorial096
					Text = WOTRSCRIPT:WOTR_Tutorial096subtitle
				End
			End
			
			Phase PlanRetreats
				Session
					Audio = WOTR_Tutorial097	; "Retreat Phase"
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial098
					Text = WOTRSCRIPT:WOTR_Tutorial098subtitle
					;Text = WOTRTutorial:LW_InstructionText29
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial099	; "To order a hero army to retreat..."
					Text = WOTRTutorial:LW_InstructionText30
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial100
					Text = WOTRSCRIPT:WOTR_Tutorial100subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = RetreatArmies
					End
				End
				Session
					Audio = WOTR_Tutorial101	; "Good job"
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial102
					Text = WOTRSCRIPT:WOTR_Tutorial102subtitle
				End
				Session
					Audio = WOTR_Tutorial103
					Text = WOTRSCRIPT:WOTR_Tutorial103subtitle
				End
			End
		End
		
		
		Turn 4
			Phase Planning
				Session
					Audio = WOTR_Tutorial104
					Text = WOTRSCRIPT:WOTR_Tutorial104subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial105
					Text = WOTRSCRIPT:WOTR_Tutorial105subtitle
				End
				Session
					Audio = WOTR_Tutorial106
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = EndTutorial	// Ends the tutorial
  					End
				End
			End
		End
		
	End
	
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

		//-------------------------------------------------------------------------------------------------
		// Men of the West
		//-------------------------------------------------------------------------------------------------

		SpawnArmy
			ScriptingName = MenHeroArmy1
			SpawnForTemplates = PlayerMen
			HeroTemplateName = GondorAragornMP
			PlayerArmy = AragornPlayerArmy_Tutorial
			Icon = HeroAragornIcon
			InitialRegion = Rohan
			MoveSpeed = 10.0	// Slowed down for the tutorial
		End

		SpawnArmy
			ScriptingName = MenHeroArmy2
			SpawnForTemplates = PlayerMen
			HeroTemplateName = RohanTheoden
			PlayerArmy = TheodenPlayerArmy_Tutorial
			Icon = HeroTheodenIcon
			InitialRegion = Cair_Andros
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MenHeroArmy3
			SpawnForTemplates = PlayerMen
			HeroTemplateName = GondorBoromir
			PlayerArmy = BoromirPlayerArmy_Tutorial
			Icon = HeroBoromirIcon
			InitialRegion = Osgiliath
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MenGarrisonArmy1
			SpawnForTemplates = PlayerMen
			PlayerArmy = MenOfTheWest_Garrison1_Tutorial
			Icon = MoWArmyIcon
			InitialRegion = Minas_Tirith
			MoveSpeed = 10.0
		End

	
		//-------------------------------------------------------------------------------------------------
		// Mordor
		//-------------------------------------------------------------------------------------------------
		
		SpawnArmy
			ScriptingName = MordorHeroArmy1
			SpawnForTemplates = PlayerMordor
			HeroTemplateName = MordorWitchKingOnFellBeast
			PlayerArmy = WitchKingPlayerArmy_Tutorial
			Icon = HeroWitchKingIcon
			InitialRegion = Mount_Doom
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MordorHeroArmy2
			SpawnForTemplates = PlayerMordor
			HeroTemplateName = MordorFellBeast
			PlayerArmy = FellBeast1PlayerArmy_Tutorial
			Icon = HeroFellBeast1Icon
			InitialRegion = Mount_Doom
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MordorHeroArmy3
			SpawnForTemplates = PlayerMordor
			HeroTemplateName = MordorFellBeast
			PlayerArmy = FellBeast2PlayerArmy_Tutorial
			Icon = HeroFellBeast2Icon
			InitialRegion = Mordor
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MordorGarrisonArmy1
			SpawnForTemplates = PlayerMordor
			PlayerArmy = Mordor_Garrison1_Tutorial
			Icon = MordorArmyIcon
			InitialRegion = The_Black_Gate
			MoveSpeed = 10.0
		End

		
		;//////////// Cities (Yes, this is a hack for mouse over movies.)  //////////////

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



;//////////////////////////////////////////////////////////////////////////////////////////////////
;// Custom Tutorial Regions (mostly so it can enforce building restrictions in certain territories)
;//////////////////////////////////////////////////////////////////////////////////////////////////
LivingWorldRegionCampaign TutorialCampaign

	RegionConqueredSound = Gui_RegionConquered
	
	// Determine what region effects we use with this campaign
	RegionEffectsManagerName = WotRRegionEffects

	;//////////////////////////////////////
	;// Region Bonus String Tags
	;//////////////////////////////////////
	RegionBonusArmy			= LW:RegionBonusArmy_Good
	RegionBonusResource		= LW:RegionBonusResource
	RegionBonusLegendary	= LW:RegionLegendaryBonus
	
	
	;//////////////////////////////////////
	;// Army Size Command Point Caps
	;//////////////////////////////////////
	HeroOnlyArmyCommandPoints	= 0				; command-point cap for use of "hero by him/herself" army icon
	SmallArmyCommandPoints		= 120			; command-point cap for use of small army icon
	MediumArmyCommandPoints		= 240			; command-point cap for use of medium army icon
	
		
	//-------------------------------------------------------------------------------------------------
	// Regions 
	//-------------------------------------------------------------------------------------------------

	#include "..\Common\LivingWorldTutorialRegions.inc"
End


