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
			;//USER_67	// Draw_HordeBonus
			//USER_64	// Draw_DevastationParalyzeEffect
			//USER_63	// Draw_ElrondFarsightEffect
			//USER_62	// Draw_ElrondElvenGraceBonusEffect
			//USER_65	// Draw_ElrondElvenGraceHealEffect
			//USER_66	// Draw_EvilHealEffect
			//USER_61	// Draw_ElvenWoodEffect
	//-----------------------------------------------------------------------------
 	//-//	This is untouched but now multiple heroes won't stack the FX's causing lag.
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
			AnimationState = USER_74	// GenericHeroLeadership // SharkuLeadership
  				ParticleSysBone		= NONE HighLevelLD_NoSL FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
 	//-//	This is designed to be similrar to ElvenWood Nugget, slightly more green rather than gold.
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
			AnimationState = USER_71 // GenericArmorStackLeadership
  				ParticleSysBone		= NONE GenericArmorStackPseudoNugget09v2 FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
 	//-//	This is designed to be similrar to RallyingCall Nugget, slightly more green rather than gold.
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
			AnimationState = USER_70	// GenericDamageStackLeadership
  				ParticleSysBone		= NONE GenericDamageStackPseudoNugget09v2 FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
 	//-//	From five laggy particles to only none that creates the texture of the original nugget.
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
			AnimationState = USER_73	// DainMightyRageBuff
				ParticleSysBone			= NONE MightyRageParticle_NoSLValTest FollowBone:Yes
  			End
        End
	//-----------------------------------------------------------------------------
 	//-//	This is a reshaped Twinkle, similar to High Tier Hero.
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
				ParticleSysBone		= NONE DarknessParticleSmall09v2 FollowBone:Yes
  			End
        End
	//-----------------------------------------------------------------------------
 	//-//	This ons is actually pretty innecesary as it's a generic debuff modifier.
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
			AnimationState = USER_72	// Doubt
  				ParticleSysBone		= NONE MoSDoubtUniqueParticle_NoSM FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
	//GloriousCharge
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
			AnimationState = USER_68 //TheodenGloriousCharge
				EnteringStateFX = FX_TheodenGloriousChargeFX
 			End
		End
	;;-;;	//-----------------------------------------------------------------------------
	;;-;;	//EvilHeal
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
	;;-;;		AnimationState = USER_66
 	;;-;;			ParticleSysBone		= NONE EvilHealParticleFlare09v2 FollowBone:Yes
 	;;-;;			ParticleSysBone		= NONE EvilHealParticleFlareHIGH09v2 FollowBone:Yes
	;;-;;			ParticleSysBone		= NONE EvilHealParticleBlast09v2 FollowBone:Yes
	;;-;;			ParticleSysBone		= NONE EvilHealParticleBlastHIGH9v2 FollowBone:Yes
	;;-;;			ParticleSysBone		= NONE EvilHealParticleHeal09v2 FollowBone:Yes
	;;-;;		End
	;;-;;	End
	;;-;;	//-----------------------------------------------------------------------------
	;;-;;	//EvilHeal
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
	;;-;;		AnimationState = USER_66
 	;;-;;			ParticleSysBone		= NONE UntamedAllegianceParticle1Small09v2 FollowBone:Yes
 	;;-;;			ParticleSysBone		= NONE UntamedAllegianceParticle2Small09v2 FollowBone:Yes
	;;-;;		End
	;;-;;	End
	//-----------------------------------------------------------------------------
	//EvilHeal
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
			ModelConditionState = USER_66
				Model = exmordorheal
				ParticleSysBone		= NONE SpellHealMordorSmall FollowBone:Yes
			End
		End
	//-----------------------------------------------------------------------------
	//Elrond ElvenGrace
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
			AnimationState = USER_65
 				EnteringStateFX = FX_ElrondElvenGrace09v2
			End
		End
	//-----------------------------------------------------------------------------
	//Elrond ElvenGrace
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
			AnimationState = USER_62
 				ParticleSysBone		= NONE ElrondElvenGrace04_NoSL FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
	//Devastation
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
			AnimationState = USER_64
 				ParticleSysBone		= NONE DevastationStunSmall09v2 FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
	//ElrondFarsightSparkle
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
			AnimationState = USER_63
 				ParticleSysBone		= NONE HighLevelLDElrondShroud_NoSL FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
	//ElvenWoodUnique
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
			ModelConditionState = USER_61
				Model = explaceholder1 ;; explaceholder2
  			End
		End
	//-----------------------------------------------------------------------------
		
		
		
		
//-----------------------------------------------------------------------------