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
			//USER_68	// GloriousCharge. Simple anti multi fx.
			//USER_69	// DarknessSparkle
			//USER_74	// BasicLeadership:HighTierHero
			//USER_73	// Mighyrage
			//USER_72	// Doubt
			//USER_71	// BasicLeadership:StackyArmor
			//USER_70	// BasicLeadership:StackyDamage
			;//USER_67	// Posible Horde Bonus. Nothing active currently.
			//USER_64	// IsengardDevasation/GloinStun
			//USER_63	// ElrondFarsightSparkle
			//USER_62	// ElronElvenGrace modifier
			//USER_65	// ElronElvenGrace heal
			//USER_66	// EvilHeal particles
	//-----------------------------------------------------------------------------
	;;-;;	// BasicLeadership:HighTierHero
	//-//	This is untouched but now multiple heroes won't stack the FX's causing lag.
		Draw = W3DScriptedModelDraw Draw_LeadershipEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
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
	;;-;;	//StackyArmorLeadership
	//-//	This is designed to be similrar to ElvenWood Nugget, slightly more green rather than gold.
		Draw = W3DScriptedModelDraw Draw_GenericStackArmorEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
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
	;;-;;	//StackyDamageLeadership
	//-//	This is designed to be similrar to RallyingCall Nugget, slightly more green rather than gold.
		Draw = W3DScriptedModelDraw Draw_GenericStackDamageEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
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
	;;-;;	// Mighyrage
	//-//	From five laggy particles to only none that creates the texture of the original nugget.
		Draw = W3DScriptedModelDraw Draw_MightRage
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_73 DYING
  			End
 			AnimationState = USER_73 BURNINGDEATH
  			End
			AnimationState = USER_73	// DainMightyRageBuff
				ParticleSysBone			= NONE MightyRageParticle_NoSLValTest FollowBone:Yes
   				;;-;;	ParticleSysBone		= NONE MightyRageParticle_NoSL FollowBone:Yes
 				;;-;;	ParticleSysBone		= NONE MightyRageParticle2_NoSL FollowBone:Yes
 				;;-;;	ParticleSysBone		= NONE MightyRageParticle3_NoSL FollowBone:Yes
 				;;-;;	ParticleSysBone		= NONE MightyRageParticle4_NoSL FollowBone:Yes
 				;;-;;	ParticleSysBone		= NONE MightyRageParticle5_NoSL FollowBone:Yes
 				;;-;;	ParticleSysBone		= NONE SpellMightyRage FollowBone:Yes
  			End
        End
	//-----------------------------------------------------------------------------
	;;-;;	//DarknessSparkle
	//-//	This is a reshaped Twinkle, similar to High Tier Hero.
		Draw = W3DScriptedModelDraw Draw_DarknessEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_69 DYING
  			End
 			AnimationState = USER_69 BURNINGDEATH
  			End
			AnimationState = USER_69 //	SpellBookDarkness
				ParticleSysBone		= NONE DarknessParticle09v2 FollowBone:Yes
  			End
        End
	//-----------------------------------------------------------------------------
	;;-;;	// Doubt
	//-//	This ons is actually pretty innecesary as it's a generic debuff modifier.
		Draw = W3DScriptedModelDraw Draw_WitchKingDebuff
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
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
	;;-;;	//HordeBonus
	;;-;;	//-//	Too annoying
	;;-;;	Draw = W3DScriptedModelDraw Draw_HordeBonus
    ;;-;;	    ParticlesAttachedToAnimatedBones = yes
	;;-;;		ModelConditionState 			= NONE
	;;-;;			Model = None
	;;-;;		End
	;;-;;		AnimationState = USER_67 DYING
  	;;-;;		End
 	;;-;;		AnimationState = USER_67 BURNINGDEATH
  	;;-;;		End
	;;-;;		AnimationState = USER_67	// MordorLargeGroupBonus
  	;;-;;			ParticleSysBone		= NONE placeholder FollowBone:Yes
 	;;-;;		End
    ;;-;;	End
	//-----------------------------------------------------------------------------
	//GloriousCharge
	//-//	This will stop the FX stacking at least.
		Draw = W3DScriptedModelDraw Draw_GloriousChargeEffect
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_68 DYING
			End
			AnimationState = USER_68 BURNINGDEATH
			End
			AnimationState = USER_68 //TheodenGloriousCharge
				EnteringStateFX = FX_TheodenGloriousChargeFX
 			End
		End
	//-----------------------------------------------------------------------------
	//Evil heal
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
 				ParticleSysBone		= NONE EvilHealParticleFlare09v2 FollowBone:Yes
 				ParticleSysBone		= NONE EvilHealParticleFlareHIGH09v2 FollowBone:Yes
				ParticleSysBone		= NONE EvilHealParticleBlast09v2 FollowBone:Yes
				ParticleSysBone		= NONE EvilHealParticleBlastHIGH9v2 FollowBone:Yes
				ParticleSysBone		= NONE EvilHealParticleHeal09v2 FollowBone:Yes
			End
		End
	//-----------------------------------------------------------------------------
	//Elrond ElvenGrace
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
  		Draw = W3DScriptedModelDraw Draw_ElrondElvenGraceHeal
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
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
  		Draw = W3DScriptedModelDraw Draw_ElrondElvenGraceBonus
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_62 DYING
			End
			AnimationState = USER_62 BURNINGDEATH
			End
			AnimationState = USER_62
 				ParticleSysBone		= NONE EvilHealParticleFlare09v2 FollowBone:Yes
 				ParticleSysBone		= NONE EvilHealParticleFlareHIGH09v2 FollowBone:Yes
			End
		End
	//-----------------------------------------------------------------------------
	//Devastation
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
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
 				ParticleSysBone		= NONE DevastationStunDrawStyleNoSM09v2 FollowBone:Yes
 			End
		End
	//-----------------------------------------------------------------------------
	//ElrondFarsightSparkle
	//-//	solves multi fx stacking. solves particles showing up on dead corpses. allows creating different FX's per specific object. For example mumakil.
  		Draw = W3DScriptedModelDraw Draw_ElrondFarsight
			ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
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
		
		
		
		
//-----------------------------------------------------------------------------