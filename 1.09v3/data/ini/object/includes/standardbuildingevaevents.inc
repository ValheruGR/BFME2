	; All the standard EVA events for a 'normal' faction building [not a freestanding, non-aligned building, please!]

	EvaEventDamagedOwner	= StructureUnderAttack 		; Eva event to trigger when building is damaged
	
    EvaEnemyObjectSightedEvent	= EnemyCampSighted   ; Normal 'There's their camp' when any enemy building is seen

	
	
	
	
	//-----------------------------------------------------------------------------
			//USER_57	// Draw_GloinParalyzeStructure09v3
			
	//-----------------------------------------------------------------------------
		Draw = W3DScriptedModelDraw Draw_GloinParalyzeStructure09v3
            ParticlesAttachedToAnimatedBones = yes
			ModelConditionState = NONE
				Model = None
			End
			AnimationState = USER_57 STUNNED_FLAILING
  			End
			AnimationState = USER_57 PASSENGER
  			End
			AnimationState = USER_57 DYING
  			End
 			AnimationState = USER_57 BURNINGDEATH
  			End
			AnimationState = USER_57	// Draw_GloinParalyzeStructure09v3
  				ParticleSysBone		= NONE ShakeFoundationParalyze09v3 FollowBone:Yes
 			End
        End