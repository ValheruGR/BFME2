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
	;//Basic Leadership System
		//Warchant
		//Land
		//HighTierHero
		//StackyDamage
		//StackyArmor
		
		//USER_74	// 3k hero
		//USER_73	// mighyrage
		//USER_72	// wk debuff. Innecesary tho.
		//USER_71	// stacky armor
		//USER_70	// stacky damage
		//USER_69	// darkness
		//USER_68	// Glorious charge. Doesnt workk tho. Disabled.
		//USER_67	// Posible Horde Bonus. Nothing there tho.
		Draw = W3DScriptedModelDraw Draw_LeadershipEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_74	// GenericHeroLeadership // SharkuLeadership
  				ParticleSysBone		= NONE HighLevelLD_NoSL FollowBone:Yes
 			End
        End
		//------------------
		Draw = W3DScriptedModelDraw Draw_GenericStackArmorEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_71 // GenericArmorStackLeadership
  				ParticleSysBone		= NONE GenericArmorStackPseudoNugget09v2 FollowBone:Yes
 			End
        End
		//------------------
		Draw = W3DScriptedModelDraw Draw_GenericStackDamageEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_70	// GenericDamageStackLeadership
  				ParticleSysBone		= NONE GenericDamageStackPseudoNugget09v2 FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
	;//Unique Spells
		Draw = W3DScriptedModelDraw Draw_MightRage
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_73	// DainMightyRageBuff
				ParticleSysBone			= BAT_RIBS MightyRageParticle_NoSLValTest FollowBone:Yes
				
  				;ParticleSysBone		= NONE MightyRageParticle_NoSL FollowBone:Yes
 				;ParticleSysBone		= NONE MightyRageParticle2_NoSL FollowBone:Yes
 				;ParticleSysBone		= NONE MightyRageParticle3_NoSL FollowBone:Yes
 				;ParticleSysBone		= NONE MightyRageParticle4_NoSL FollowBone:Yes
 				;ParticleSysBone		= NONE MightyRageParticle5_NoSL FollowBone:Yes
  			End
        End
		//------------------
		Draw = W3DScriptedModelDraw Draw_DarknessEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_69 //	SpellBookDarkness
  				;;-;; ParticleSysBone		= NONE DarknessPseudoNugget09v2 FollowBone:Yes
  				ParticleSysBone		= NONE HighLevelLD_DarknessNoSL FollowBone:Yes
 			End
        End
		//------------------
		;;-;; DoesntReadBones ;;-;; Draw = W3DScriptedModelDraw Draw_GloriousChargeEffect
		;;-;; DoesntReadBones ;;-;; 	ParticlesAttachedToAnimatedBones = yes
		;;-;; DoesntReadBones ;;-;; 	ModelConditionState 			= NONE
		;;-;; DoesntReadBones ;;-;; 		Model = None
		;;-;; DoesntReadBones ;;-;; 	End
		;;-;; DoesntReadBones ;;-;; 	AnimationState = USER_68 //TheodenGloriousCharge
		;;-;; DoesntReadBones ;;-;; 		;doesnt work;EnteringStateFX = FX_TheodenGloriousChargeFX
  		;;-;; DoesntReadBones ;;-;; 		;ParticleSysBone		= BAT_HHEAD GCglowWhite_NoSM FollowBone:Yes
  		;;-;; DoesntReadBones ;;-;; 		;ParticleSysBone		= B_HHIPL GCglowHorseRearWhite_NoSM FollowBone:Yes
  		;;-;; DoesntReadBones ;;-;; 		;ParticleSysBone		= BAT_SPINE2 GCglowHorseWhite_NoSM FollowBone:Yes
 		;;-;; DoesntReadBones ;;-;; 	End
        ;;-;; DoesntReadBones ;;-;; End
	//-----------------------------------------------------------------------------
	;//Unique Debuff
		Draw = W3DScriptedModelDraw Draw_WitchKingDebuff
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_72	// GenericDebuffWK
  				ParticleSysBone		= NONE WitchkingDreadVisage FollowBone:Yes
 			End
        End
	//-----------------------------------------------------------------------------
	;//HordeBonus
		;Draw = W3DScriptedModelDraw Draw_HordeBonus
        ;    ParticlesAttachedToAnimatedBones = yes
		;	ModelConditionState 			= NONE
		;		Model = None
		;	End
		;	AnimationState = USER_67	// MordorLargeGroupBonus
  		;		ParticleSysBone		= NONE placeholder FollowBone:Yes
 		;	End
        ;End
		
		
		
		
//-----------------------------------------------------------------------------