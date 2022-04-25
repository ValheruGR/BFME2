
	//-----------------------------------------------------------------------------
		RemoveModule Draw_EvilHealEffect
   		;;-;;	Draw = W3DScriptedModelDraw Draw_EvilHealEffect
		;;-;;		ParticlesAttachedToAnimatedBones = yes
		;;-;;		ModelConditionState = NONE
		;;-;;			Model = None
		;;-;;		End
		;;-;;		AnimationState = USER_66 STUNNED_FLAILING
  		;;-;;		End
		;;-;;		AnimationState = USER_66 PASSENGER
  		;;-;;		End
		;;-;;		AnimationState = USER_66 DYING
		;;-;;		End
		;;-;;		AnimationState = USER_66 BURNINGDEATH
		;;-;;		End
 		;;-;;		AnimationState = USER_66
 		;;-;;			ParticleSysBone		= NONE UntamedAllegianceParticle1Small09v2 FollowBone:Yes
		;;-;;			ParticleSysBone		= NONE UntamedAllegianceParticle2Small09v2 FollowBone:Yes
 		;;-;;		End
		;;-;;	End
   		Draw = W3DScriptedModelDraw Draw_EvilHealEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			ModelConditionState = USER_66 STUNNED_FLAILING
				Model = None
  			End
			ModelConditionState = USER_66 PASSENGER
				Model = None
  			End
			ModelConditionState = USER_66 DYING
				Model = None
			End
			ModelConditionState = USER_66 BURNINGDEATH
				Model = None
			End
			ModelConditionState = USER_66
				Model = exmordorhealcav
				ParticleSysBone		= NONE SpellHealMordorMedium FollowBone:Yes
			End
 		End
	//-----------------------------------------------------------------------------
		RemoveModule Draw_DevastationParalyzeEffect
    	Draw = W3DScriptedModelDraw Draw_DevastationParalyzeEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_64 STUNNED_FLAILING
  			End
			AnimationState = USER_64 PASSENGER
  			End
			AnimationState = USER_64 DYING
			End
			AnimationState = USER_64 BURNINGDEATH
			End
			AnimationState = USER_64
 				ParticleSysBone		= NONE DevastationStunMedium09v2 FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
		RemoveModule Draw_DarknessEffect
		Draw = W3DScriptedModelDraw Draw_DarknessEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_69 STUNNED_FLAILING
  			End
			AnimationState = USER_69 PASSENGER
  			End
			AnimationState = USER_69 DYING
  			End
 			AnimationState = USER_69 BURNINGDEATH
  			End
			AnimationState = USER_69 //	SpellBookDarkness
				ParticleSysBone		= NONE DarknessParticleMedium09v2 FollowBone:Yes
  			End
        End
	//-----------------------------------------------------------------------------
		;RemoveModule Draw_ArmorStackLeadershipEffect
 		;Draw = W3DScriptedModelDraw Draw_ArmorStackLeadershipEffect
        ;    ParticlesAttachedToAnimatedBones = yes
		;	ModelConditionState = NONE
		;		Model = None
		;	End
		;	AnimationState = USER_71 STUNNED_FLAILING
  		;	End
		;	AnimationState = USER_71 PASSENGER
  		;	End
		;	AnimationState = USER_71 DYING
  		;	End
 		;	AnimationState = USER_71 BURNINGDEATH
  		;	End
		;	ModelConditionState = USER_71
		;		Model = explaceholder1
		;		Texture = explaceholder1.tga exlightaura02.tga
		;	End
        ;End
	//-----------------------------------------------------------------------------
		;RemoveModule Draw_DamageStackLeadershipEffect
		;Draw = W3DScriptedModelDraw Draw_DamageStackLeadershipEffect
        ;    ParticlesAttachedToAnimatedBones = yes
		;	ModelConditionState = NONE
		;		Model = None
		;	End
		;	AnimationState = USER_70 STUNNED_FLAILING
  		;	End
		;	AnimationState = USER_70 PASSENGER
  		;	End
		;	AnimationState = USER_70 DYING
  		;	End
 		;	AnimationState = USER_70 BURNINGDEATH
  		;	End
		;	ModelConditionState = USER_70
		;		Model = explaceholder1
		;		Texture = explaceholder1.tga exlnzflar1.tga
  		;	End
        ;End
	//-----------------------------------------------------------------------------
		RemoveModule Draw_ElrondElvenGraceBonusEffect
   		Draw = W3DScriptedModelDraw Draw_ElrondElvenGraceBonusEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_62 STUNNED_FLAILING
  			End
			AnimationState = USER_62 PASSENGER
  			End
			AnimationState = USER_62 DYING
			End
			AnimationState = USER_62 BURNINGDEATH
			End
			AnimationState = USER_62 // Draw_ElrondElvenGraceBonusEffect
 				ParticleSysBone		= NONE ElrondElvenGraceSparkleLeadershipMedium_NoSL FollowBone:Yes
 			End
		End