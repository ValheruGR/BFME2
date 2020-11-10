
	//-----------------------------------------------------------------------------
		RemoveModule Draw_EvilHeal
		
   		;;-;;	Draw = W3DScriptedModelDraw Draw_EvilHeal
		;;-;;		ParticlesAttachedToAnimatedBones = yes
		;;-;;		ModelConditionState 			= NONE
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
 		;;-;;		;;-;;	AnimationState = USER_66
 		;;-;;		;;-;;		ParticleSysBone		= NONE UntamedAllegianceParticle1Big09v2 FollowBone:Yes
		;;-;;		;;-;;		ParticleSysBone		= NONE UntamedAllegianceParticle2Big09v2 FollowBone:Yes
 		;;-;;		;;-;;	End
		;;-;;	End
   		Draw = W3DScriptedModelDraw Draw_EvilHeal
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_66 STUNNED_FLAILING
  			End
			AnimationState = USER_66 PASSENGER
  			End
			AnimationState = USER_66 DYING
			End
			AnimationState = USER_66 BURNINGDEATH
			End
			ModelConditionState = USER_66
				Model = exmordorhealcav
				ParticleSysBone		= NONE SpellHealMordorBig FollowBone:Yes
			End
 		End
	//-----------------------------------------------------------------------------
		RemoveModule Draw_DevastationParalyze
		
    	Draw = W3DScriptedModelDraw Draw_DevastationParalyze
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
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
 				ParticleSysBone		= NONE DevastationStunBig09v2 FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
		RemoveModule Draw_DarknessEffect
		
		Draw = W3DScriptedModelDraw Draw_DarknessEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
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
				ParticleSysBone		= NONE DarknessParticleBig09v2 FollowBone:Yes
  			End
        End
	//-----------------------------------------------------------------------------
		RemoveModule Draw_GenericStackArmorEffect
		
 		Draw = W3DScriptedModelDraw Draw_GenericStackArmorEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_71 STUNNED_FLAILING
  			End
			AnimationState = USER_71 PASSENGER
  			End
			AnimationState = USER_71 DYING
  			End
 			AnimationState = USER_71 BURNINGDEATH
  			End
			ModelConditionState = USER_70
				Model = explaceholder1
				Texture = explaceholder1.tga exlightaura02.tga
			End
        End
	//-----------------------------------------------------------------------------
		RemoveModule Draw_GenericStackDamageEffect
		
		Draw = W3DScriptedModelDraw Draw_GenericStackDamageEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_70 STUNNED_FLAILING
  			End
			AnimationState = USER_70 PASSENGER
  			End
			AnimationState = USER_70 DYING
  			End
 			AnimationState = USER_70 BURNINGDEATH
  			End
			ModelConditionState = USER_70
				Model = explaceholder1
				Texture = explaceholder1.tga exlnzflar1.tga
  			End
        End
	//-----------------------------------------------------------------------------