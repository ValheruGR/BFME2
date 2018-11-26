//'======================================
//' Create A Hero Reaction ini settings. 
//'======================================
	Behavior = PhysicsBehavior ModuleTag_04
		GravityMult		  =	1.0
		ShockStandingTime =	2533  //msec
	End
	 
// 	Behavior = SlowDeathBehavior ModuleTag_05
// 		DeathTypes		 = ALL 
// 		SinkDelay		 = 30000
// 		SinkRate		 = 0.40		//'in Dist/Sec
// 		DestructionDelay = 8000
// 		Sound			 = INITIAL FaramirRangerVoiceDie
// 	End
	
	Behavior = SquishCollide ModuleTag_06
		//'nothing
	End
	
	Behavior = NotifyTargetsOfImminentProbableCrushingUpdate ModuleTag_NotifyCrushScan
	End

	Behavior = HitReactionBehavior HitReactionBehaviorModuleTag
		HitReactionLifeTimer1 = 1500 //'level 1 (light  damage)  hit reaction animations in ms
		HitReactionLifeTimer2 = 1500 //'level 2 (medium damage)  hit reaction animations in ms
		HitReactionLifeTimer3 = 1500 //'level 3 (heavy  damage)  hit reaction animations in ms

		HitReactionThreshold1 = 100.0   //'level 1 (light  damage) threshold trigger
		HitReactionThreshold2 = 500.0  //'level 2 (medium damage) threshold trigger
		HitReactionThreshold3 = 1000.0  //'level 3 (heavy  damage) threshold trigger
		
		FastHitsResetReaction = No    //If set -- when hits occur faster than the reaction animations, it will reset the animation. (like getting riddled with machine gun bullets)
	End
