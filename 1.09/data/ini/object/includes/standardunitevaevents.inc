	; All the standard EVA events for a 'normal' unit

	EvaEventDamagedOwner	= UnitUnderAttack 		;Eva event to trigger when unit is damaged
	EvaEventDamagedFromShroudedSourceOwner = UnitUnderAttackFromShroudedUnit 
	EvaEventDamagedByFireOwner  = GenericUnitBeingBurned  ; Special reaction to fire damage
	EvaEventAmbushed = UnitAmbushed ; Special damaged event when not in combat and enemy is stealthed
	EvaEventSecondDamageFarFromFirstOwner = UnitUnderAttackAgain ; Eva event to trigger when we are under attack far away from the first attack, while normal UnitUnderAttack is still timing out

	; Control settings for EvaEventSecondDamageFarFromFirstOwner
	EvaEventSecondDamageFarFromFirstScanRange = 600    ; What 'far' means. Note that each unit damaged blocks the second-damage callout within this range, not just the first damaged unit
	EvaEventSecondDamageFarFromFirstTimeoutMS = 31000  ; When the first damaged event plays, the unit must wait this long before trying second. Generally should >= timeout on event

    EvaEnemyObjectSightedEvent	= GenericEnemyUnitSighted ; Normal response to enemy units

	
//-----------------------------------------------------------------------------


	//	Lazy method to reach to every unit.
	//	Would be ideal to use it as an InheritableModule in object.ini
	//	but then the first Draw module of any object is invisible.... 
	//	which means everything on Worldbuilder becomes invisible
	
	
	
	
	//-----------------------------------------------------------------------------
			//USER_68	// Draw_GloriousChargeEffect
			//USER_69	// Draw_DarknessEffect
			//USER_74	// Draw_HighTierHeroLeadershipEffect
			//USER_73	// Draw_MightRageEffect
			//USER_72	// Draw_DoubtEffect
			//USER_71	// Draw_ArmorStackLeadershipEffect
			//USER_70	// Draw_DamageStackLeadershipEffect
			//USER_67	// Draw_HordeBonusEffect
			//USER_64	// Draw_DevastationParalyzeEffect
			//USER_63	// Draw_ElrondFarsightEffect
			//USER_62	// Draw_ElrondElvenGraceBonusEffect
			//USER_65	// Draw_ElrondElvenGraceHealEffect
			//USER_66	// Draw_EvilHealEffect
			//USER_61	// Draw_ElvenWoodEffect
			//USER_60	// Draw_ArmorVanillaLeadershipEffect
			//USER_59	// Draw_DamageVanillaLeadershipEffect
			//USER_58	// LEADERSHIP + BUFF killer
			//USER_57	// SPELL killer
	//-----------------------------------------------------------------------------
 	//-//Draw_HighTierHeroLeadershipEffect
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
 	//-//Draw_ArmorStackLeadershipEffect
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
 	//-//Draw_DamageStackLeadershipEffect
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
 	//-//Draw_MightRageEffect
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
 	//-//Draw_DarknessEffect
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
 	//-//Draw_DoubtEffect
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
	//Draw_GloriousChargeEffect
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
				EnteringStateFX = FX_TheodenGloriousChargeFX
 			End
		End
	//-----------------------------------------------------------------------------
	//Draw_HordeBonusEffect
	//-//	This will stop the FX stacking at least.
		Draw = W3DScriptedModelDraw Draw_HordeBonusEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_67 STUNNED_FLAILING
  			End
			AnimationState = USER_67 PASSENGER
  			End
			AnimationState = USER_67 DYING
			End
			AnimationState = USER_67 BURNINGDEATH
			End
			AnimationState = USER_67	// Draw_HordeBonusEffect
				ParticleSysBone = NONE HordeBonusExperiment09v2 FollowBone:Yes
 			End
		End
	;;-;;	//-----------------------------------------------------------------------------
	;;-;;	//Draw_EvilHealEffect
	;;-;;	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
	;;-;;	//Draw_EvilHealEffect
	;;-;;	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
	//Draw_EvilHealEffect
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
	//Draw_ElrondElvenGraceHealEffect
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
	//Draw_ElrondElvenGraceBonusEffect
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
 				ParticleSysBone		= NONE ElrondElvenGrace04_NoSL FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
	//Draw_DevastationParalyzeEffect
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
	//Draw_ElrondFarsightEffect
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
	//Draw_ElvenWoodEffect
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
	//Draw_ArmorVanillaLeadershipEffect
 		Draw = W3DScriptedModelDraw Draw_ArmorVanillaLeadershipEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			ModelConditionState = USER_60 STUNNED_FLAILING
				Model = None
			End
			ModelConditionState = USER_60 PASSENGER
				Model = None
			End
			ModelConditionState = USER_60 DYING
				Model = None
			End
			ModelConditionState = USER_60 BURNINGDEATH
				Model = None
			End
			ModelConditionState = USER_60 //Draw_ArmorVanillaLeadershipEffect
				Model = EXPosBuff
 			End
		End
	//-----------------------------------------------------------------------------
	//Draw_DamageVanillaLeadershipEffect
 		Draw = W3DScriptedModelDraw Draw_DamageVanillaLeadershipEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			ModelConditionState = USER_59 USER_58
				Model = None
			End
			ModelConditionState = USER_59 STUNNED_FLAILING
				Model = None
			End
			ModelConditionState = USER_59 PASSENGER
				Model = None
			End
			ModelConditionState = USER_59 DYING
				Model = None
			End
			ModelConditionState = USER_59 BURNINGDEATH
				Model = None
			End
			ModelConditionState = USER_59 //Draw_DamageVanillaLeadershipEffect
				Model = EXLeaderbuff
 			End
		End
	//-----------------------------------------------------------------------------
		
		
		
		
//-----------------------------------------------------------------------------