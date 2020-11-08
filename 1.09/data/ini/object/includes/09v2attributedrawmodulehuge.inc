
	//-----------------------------------------------------------------------------
		RemoveModule Draw_EvilHeal
		
   		Draw = W3DScriptedModelDraw Draw_EvilHeal
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_66 DYING
			End
			AnimationState = USER_66 BURNINGDEATH
			End
			AnimationState = USER_66
 				ParticleSysBone		= NONE UntamedAllegianceParticle2Huge09v2 FollowBone:Yes
				ParticleSysBone		= NONE UntamedAllegianceParticle1Huge09v2 FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
		RemoveModule Draw_DevastationParalyze
		
    	Draw = W3DScriptedModelDraw Draw_DevastationParalyze
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_64 DYING
			End
			AnimationState = USER_64 BURNINGDEATH
			End
			AnimationState = USER_64
 				ParticleSysBone		= NONE DevastationStunHuge09v2 FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------