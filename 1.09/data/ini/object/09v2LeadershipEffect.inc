//Would be idea to use it as an InheritableModule in object.ini, but then the first Draw module of any object is invisible.... therefore everything on Worldbuilder looks invisible
		Draw = W3DScriptedModelDraw Draw_LeadershipEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			ModelConditionState = USER_70 //placeholder
                Model               = None
 				ParticleSysBone		= ARRROW PLaceHolder01 FollowBone:Yes
 			End
			ModelConditionState = USER_71 //placeholder
                Model               = None
 				ParticleSysBone		= ARRROW PLaceHolder01 FollowBone:Yes
 			End
			ModelConditionState = USER_72	// FX_GenericDebuffWK09v2
                Model               = None
 				ParticleSysBone		= ARRROW WitchkingDreadVisage FollowBone:Yes
 			End
			ModelConditionState = USER_73	// FX_DainMightyRageBuff09v2
                Model               = None
 				ParticleSysBone		= ARRROW MightyRageParticle_NoSL FollowBone:Yes
 				ParticleSysBone		= ARRROW MightyRageParticle2_NoSL FollowBone:Yes
 				ParticleSysBone		= ARRROW MightyRageParticle3_NoSL FollowBone:Yes
 				ParticleSysBone		= ARRROW MightyRageParticle4_NoSL FollowBone:Yes
 				ParticleSysBone		= ARRROW MightyRageParticle5_NoSL FollowBone:Yes
			End
			ModelConditionState = USER_74	// FX_GenericLeadership
                Model               = None
 				ParticleSysBone		= ARRROW HighLevelLD_NoSL FollowBone:Yes
 			End
        End