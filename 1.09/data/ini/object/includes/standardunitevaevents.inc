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
		//------------------
		Draw = W3DScriptedModelDraw Draw_LeadershipEffect
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_74	// FX_GenericLeadership
  				ParticleSysBone		= ARRROW HighLevelLD_NoSL FollowBone:Yes
 			End
        End
		//------------------
		Draw = W3DScriptedModelDraw Draw_MightRage
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_73	// FX_DainMightyRageBuff09v2
  				ParticleSysBone		= ARRROW MightyRageParticle_NoSL FollowBone:Yes
 				ParticleSysBone		= ARRROW MightyRageParticle2_NoSL FollowBone:Yes
 				ParticleSysBone		= ARRROW MightyRageParticle3_NoSL FollowBone:Yes
 				ParticleSysBone		= ARRROW MightyRageParticle4_NoSL FollowBone:Yes
 				ParticleSysBone		= ARRROW MightyRageParticle5_NoSL FollowBone:Yes
			End
        End
		//------------------
		Draw = W3DScriptedModelDraw Draw_WitchKingDebuff
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_72	// FX_GenericDebuffWK09v2
  				ParticleSysBone		= ARRROW WitchkingDreadVisage FollowBone:Yes
 			End
        End
		//------------------
		Draw = W3DScriptedModelDraw Draw_EcthsTWBuff
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_71 //placeholder
  				ParticleSysBone		= ARRROW StunLarge_New FollowBone:Yes
 			End
        End
		//------------------
		Draw = W3DScriptedModelDraw Draw_ParticlePlaceHolder
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState 			= NONE
				Model = None
			End
			AnimationState = USER_70 //placeholder
  				ParticleSysBone		= ARRROW PLaceHolder01 FollowBone:Yes
 			End
        End
		//------------------
		
		
		
		
//-----------------------------------------------------------------------------