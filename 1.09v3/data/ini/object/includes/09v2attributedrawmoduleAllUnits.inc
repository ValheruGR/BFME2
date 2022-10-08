
	
//-----------------------------------------------------------------------------


	//	Lazy method to reach to every unit.
	//	Would be ideal to use it as an InheritableModule in object.ini
	//	but then the first Draw module of any object is invisible.... 
	//	which means everything on Worldbuilder becomes invisible
	
	
	
	
	//-----------------------------------------------------------------------------
	
			//USER_74	// Draw_HighTierHeroLeadershipEffect
			//USER_73	// Draw_MightRageEffect
			//USER_72	// Draw_DoubtEffect
			//USER_71	// Draw_ArmorStackLeadershipEffect
			//USER_70	// Draw_DamageStackLeadershipEffect
			//USER_69	// Draw_DarknessEffect
			//USER_68	// Draw_GloriousChargeEffect
			//USER_67	// Draw_HordeBonusEffect
			//USER_66	// Draw_EvilHealEffect
			//USER_65	// Draw_ElrondElvenGraceHealEffect
			//USER_64	// Draw_DevastationParalyzeEffect
			//USER_63	// Draw_ElrondFarsightEffect ;;NotUsed;;
			//USER_62	// Draw_ElrondElvenGraceBonusEffect
			//USER_61	// Draw_ElvenWoodEffect
			//USER_60	// Draw_PlaceHolder01 ;;NotUsed;;
			//USER_59	// Draw_PlaceHolder02 ;;NotUsed;;
			//USER_58	// This is used to "mark" units under debuff. Obsolete.
			
	//-----------------------------------------------------------------------------
		Draw = W3DScriptedModelDraw Draw_HighTierHeroLeadershipEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_74 STUNNED_FLAILING
  			End
			AnimationState = USER_74 PASSENGER
  			End
			AnimationState = USER_74 DYING
  			End
 			AnimationState = USER_74 BURNINGDEATH
  			End
			AnimationState = USER_74	// Draw_HighTierHeroLeadershipEffect
  				ParticleSysBone		= NONE HighLevelLD_NoSL FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
		Draw = W3DScriptedModelDraw Draw_ArmorStackLeadershipEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
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
			AnimationState = USER_71 // Draw_ArmorStackLeadershipEffect
  				ParticleSysBone		= NONE GenericArmorStackPseudoNugget09v2 FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
		Draw = W3DScriptedModelDraw Draw_DamageStackLeadershipEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
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
			AnimationState = USER_70	// Draw_DamageStackLeadershipEffect
  				ParticleSysBone		= NONE GenericDamageStackPseudoNugget09v2 FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
		Draw = W3DScriptedModelDraw Draw_MightRageEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_73 STUNNED_FLAILING
  			End
			AnimationState = USER_73 PASSENGER
  			End
			AnimationState = USER_73 DYING
  			End
 			AnimationState = USER_73 BURNINGDEATH
  			End
			AnimationState = USER_73	// Draw_MightRageEffect
				ParticleSysBone			= NONE MightyRageParticle_NoSLValTest FollowBone:Yes
  			End
        End
	//-----------------------------------------------------------------------------
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
			AnimationState = USER_69 //	Draw_DarknessEffect
				ParticleSysBone		= NONE DarknessParticleSmall09v2 FollowBone:Yes
  			End
        End
	//-----------------------------------------------------------------------------
		Draw = W3DScriptedModelDraw Draw_DoubtEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_72 STUNNED_FLAILING
  			End
			AnimationState = USER_72 PASSENGER
  			End
			AnimationState = USER_72 DYING
  			End
 			AnimationState = USER_72 BURNINGDEATH
  			End
			AnimationState = USER_72	// Draw_DoubtEffect
  				ParticleSysBone		= NONE MoSDoubtUniqueParticle_NoSM FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
	//-//	This will stop the FX stacking at least.
		Draw = W3DScriptedModelDraw Draw_GloriousChargeEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_68 STUNNED_FLAILING
  			End
			AnimationState = USER_68 PASSENGER
  			End
			AnimationState = USER_68 DYING
			End
			AnimationState = USER_68 BURNINGDEATH
			End
			AnimationState = USER_68 //Draw_GloriousChargeEffect
				ParticleSysBone		= BAT_HHEAD GCglowHorseNonHumanCavalryWhite_NoSL09v2 FollowBone:Yes ;;-;;GCglowHorseWhite_NoSL09v2 
				ParticleSysBone		= B_HHIPL GCglowNonHumanCavalryRearWhite_NoSL09v2 FollowBone:Yes ;;-;; GCglowHorseRearWhite_NoSL09v2
				ParticleSysBone		= BAT_SPINE2 GCglowWhiteNonHumanCavalry_NoSL09v2 FollowBone:Yes ;;-;;GCglowWhite_NoSL09v2
  			End
		End
	//-----------------------------------------------------------------------------
 		;;-;;	Draw = W3DScriptedModelDraw Draw_HordeBonusEffect
		;;-;;		ParticlesAttachedToAnimatedBones = yes
		;;-;;		ModelConditionState = NONE
		;;-;;			Model = None
		;;-;;		End
		;;-;;		AnimationState = USER_67 STUNNED_FLAILING
  		;;-;;		End
		;;-;;		AnimationState = USER_67 PASSENGER
  		;;-;;		End
		;;-;;		AnimationState = USER_67 DYING
		;;-;;		End
		;;-;;		AnimationState = USER_67 BURNINGDEATH
		;;-;;		End
		;;-;;		AnimationState = USER_67	// Draw_HordeBonusEffect
		;;-;;			ParticleSysBone = NONE HordeBonusExperiment09v2 FollowBone:Yes
 		;;-;;		End
		;;-;;	End
 		;;.;;	Draw = W3DScriptedModelDraw Draw_HordeBonusEffectNugget
		;;.;;		ParticlesAttachedToAnimatedBones = yes
		;;.;;		ModelConditionState = NONE
		;;.;;			Model = None
		;;.;;		End
		;;.;;		ModelConditionState = USER_67 STUNNED_FLAILING
		;;.;;			Model = None
  		;;.;;		End
		;;.;;		ModelConditionState = USER_67 PASSENGER
		;;.;;			Model = None
  		;;.;;		End
		;;.;;		ModelConditionState = USER_67 DYING
		;;.;;			Model = None
		;;.;;		End
		;;.;;		ModelConditionState = USER_67 BURNINGDEATH
		;;.;;			Model = None
		;;.;;		End
		;;.;;		ModelConditionState = USER_67	// Draw_HordeBonusEffectNugget
		;;.;;			Model = exorcbonus
 		;;.;;		End
		;;.;;	End
	;;-;;	//-----------------------------------------------------------------------------
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
	;;-;;		AnimationState = USER_66 // Draw_EvilHealEffect
 	;;-;;			ParticleSysBone		= NONE EvilHealParticleFlare09v2 FollowBone:Yes
 	;;-;;			ParticleSysBone		= NONE EvilHealParticleFlareHIGH09v2 FollowBone:Yes
	;;-;;			ParticleSysBone		= NONE EvilHealParticleBlast09v2 FollowBone:Yes
	;;-;;			ParticleSysBone		= NONE EvilHealParticleBlastHIGH9v2 FollowBone:Yes
	;;-;;			ParticleSysBone		= NONE EvilHealParticleHeal09v2 FollowBone:Yes
	;;-;;		End
	;;-;;	End
	;;-;;	//-----------------------------------------------------------------------------
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
	;;-;;		AnimationState = USER_66 // Draw_EvilHealEffect
 	;;-;;			ParticleSysBone		= NONE UntamedAllegianceParticle1Small09v2 FollowBone:Yes
 	;;-;;			ParticleSysBone		= NONE UntamedAllegianceParticle2Small09v2 FollowBone:Yes
	;;-;;		End
	;;-;;	End
	//-----------------------------------------------------------------------------
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
			ModelConditionState = USER_66 //Draw_EvilHealEffect
				Model = exmordorheal
				ParticleSysBone		= NONE SpellHealMordorSmall FollowBone:Yes
			End
		End
	//-----------------------------------------------------------------------------
   		Draw = W3DScriptedModelDraw Draw_ElrondElvenGraceHealEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_65 STUNNED_FLAILING
  			End
			AnimationState = USER_65 PASSENGER
  			End
			AnimationState = USER_65 DYING
			End
			AnimationState = USER_65 BURNINGDEATH
			End
			AnimationState = USER_65 // Draw_ElrondElvenGraceHealEffect
 				EnteringStateFX = FX_ElrondElvenGrace09v2
			End
		End
	//-----------------------------------------------------------------------------
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
 				ParticleSysBone		= NONE ElrondElvenGraceSparkleLeadership_NoSL FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
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
			AnimationState = USER_64 // Draw_DevastationParalyzeEffect
 				ParticleSysBone		= NONE DevastationStunSmall09v2 FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
   		Draw = W3DScriptedModelDraw Draw_ElrondFarsightEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_63 STUNNED_FLAILING
  			End
			AnimationState = USER_63 PASSENGER
  			End
			AnimationState = USER_63 DYING
			End
			AnimationState = USER_63 BURNINGDEATH
			End
			AnimationState = USER_63 // Draw_ElrondFarsightEffect
 				ParticleSysBone		= NONE HighLevelLDElrondShroud_NoSL FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
   		Draw = W3DScriptedModelDraw Draw_ElvenWoodEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			ModelConditionState = USER_61 STUNNED_FLAILING
				Model = None
  			End
			ModelConditionState = USER_61 PASSENGER
				Model = None
  			End
			ModelConditionState = USER_61 DYING
				Model = None
			End
			ModelConditionState = USER_61 BURNINGDEATH
				Model = None
			End
			ModelConditionState = USER_61 // Draw_ElvenWoodEffect
				;Model = explaceholder1 ;; explaceholder2
				Model = None
 				ParticleSysBone		= NONE UniqueArmorPseudoNugget09v2 FollowBone:Yes
  			End
		End
	//-----------------------------------------------------------------------------
 		Draw = W3DScriptedModelDraw Draw_PlaceHolder01
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_60 STUNNED_FLAILING
  			End
			AnimationState = USER_60 PASSENGER
  			End
			AnimationState = USER_60 DYING
  			End
 			AnimationState = USER_60 BURNINGDEATH
  			End
			AnimationState = USER_60	// Draw_PlaceHolder01
  				ParticleSysBone		= NONE Particle1PlaceHolder09v2 FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
 		Draw = W3DScriptedModelDraw Draw_PlaceHolder02
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_59 STUNNED_FLAILING
  			End
			AnimationState = USER_59 PASSENGER
  			End
			AnimationState = USER_59 DYING
  			End
 			AnimationState = USER_59 BURNINGDEATH
  			End
			AnimationState = USER_59	// Draw_PlaceHolder02
  				ParticleSysBone		= NONE Particle2PlaceHolder09v2 FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
		
		
		
		
//-----------------------------------------------------------------------------