
	
//-----------------------------------------------------------------------------


	//	Lazy method to reach to every building.
	//	Would be ideal to use it as an InheritableModule in object.ini
	//	but then the first Draw module of any object is invisible.... 
	//	which means everything on Worldbuilder becomes invisible
	
	
	
	
	//-----------------------------------------------------------------------------
	
			//USER_57	// Draw_GloinParalyzeStructure09v3
			
	//-----------------------------------------------------------------------------
		Draw = W3DScriptedModelDraw Draw_GloinParalyzeStructure09v3
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_57 STUNNED_FLAILING
  			End
			AnimationState = USER_57 PASSENGER
  			End
			AnimationState = USER_57 DYING
  			End
 			AnimationState = USER_57 BURNINGDEATH
  			End
			AnimationState = USER_57	// Draw_GloinParalyzeStructure09v3
  				ParticleSysBone		= NONE ShakeFoundationParalyze09v3 FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
		Draw = W3DScriptedModelDraw Draw_RebuildArmorBonusOnStructure09v3
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_56 STUNNED_FLAILING
  			End
			AnimationState = USER_56 PASSENGER
  			End
			AnimationState = USER_56 DYING
  			End
 			AnimationState = USER_56 BURNINGDEATH
  			End
			AnimationState = USER_56	// Draw_RebuildArmorBonusOnStructure09v3
  				ParticleSysBone		= NONE SpellRebuildDotsModifier09v3 FollowBone:Yes ;;.;;
 			End
        End