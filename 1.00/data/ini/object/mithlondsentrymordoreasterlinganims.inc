//	Shared anims for mithlond sentry and mordor easterlings

	IdleAnimationState
		Animation = IDLA
			AnimationName		= EUMthlnd_SKL.EUMthlnd_IDLB
			AnimationMode		= ONCE
			AnimationPriority	= 30
			AnimationBlendTime	= 15
		End
		Animation = IDLB
			AnimationName		= EUMthlnd_SKL.EUMthlnd_IDLC
			AnimationMode		= ONCE
			AnimationPriority	= 10
			AnimationBlendTime	= 15
		End
		Animation = IDLC
			AnimationName		= EUMthlnd_SKL.EUMthlnd_IDLD
			AnimationMode		= ONCE
			AnimationBlendTime	= 15
		End
		Animation = IDLC
			AnimationName		= EUMthlnd_SKL.EUMthlnd_IDLE
			AnimationMode		= ONCE
			AnimationBlendTime	= 15
		End
		StateName = Bored
	BeginScript
		Prev = CurDrawablePrevAnimationState()
		if Prev == "STATE_Planted"	then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end
;		if Prev == "Selected" or Prev == "Trans_Down_To_Up" then CurDrawableSetTransitionAnimState("TRANS_SB_Normal") end
	EndScript
	End

    		
	AnimationState						= PASSENGER
		Animation						= Grabbed
			AnimationName				= EUMthlnd_SKL.EUMthlnd_FLYA
			AnimationMode				= LOOP
		End
	End
	
	AnimationState						= FREEFALL
		StateName						= STATE_Falling
		Animation						= Falling
			AnimationName				= EUMthlnd_SKL.EUMthlnd_FLYA
			AnimationMode				= LOOP
			AnimationBlendTime			= 10
		End
	End
	
		
		
;------special pikeman porcupine formation animations-----------------------------------	
	
	AnimationState = ALTERNATE_FORMATION FIRING_OR_PREATTACK_A
	 	Animation = ATKC
			AnimationName		= EUMthlnd_SKL.EUMthlnd_ATKA
			AnimationMode		= LOOP
			UseWeaponTiming		= Yes	
		End
	End
	
	AnimationState = ALTERNATE_FORMATION FIRING_OR_PREATTACK_A WEAPONSTATE_CLOSE_RANGE ;TEMP
		Animation = ATKC
			AnimationName		= EUMthlnd_SKL.EUMthlnd_ATKA
			AnimationMode		= ONCE
			UseWeaponTiming		= Yes
		End
		StateName = PikeUp
	End
	
    AnimationState = ALTERNATE_FORMATION MOVING BACKING_UP
		Animation = Moving_Back
			AnimationName = EUMthlnd_SKL.EUMthlnd_BAKA	
		    AnimationMode = LOOP
		End	
    End
	
	AnimationState = ALTERNATE_FORMATION MOVING
	 	Animation = ATKC
			AnimationName		= EUMthlnd_SKL.EUMthlnd_RUNB
			AnimationMode		= LOOP
		End
	End
	
	AnimationState						= DYING SPLATTED
 		Animation						= Splat
			AnimationName				= EUMthlnd_SKL.EUMthlnd_LNDA
			AnimationMode				= ONCE
		End
    End

	AnimationState	= DYING BURNINGDEATH
		Animation
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEA
			AnimationMode = ONCE
			AnimationBlendTime = 10
		End
		Animation
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEB
			AnimationMode = ONCE
			AnimationBlendTime = 10
		End
		Animation
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEC
			AnimationMode = ONCE
			AnimationBlendTime = 10
		End
	End
	

     AnimationState = ALTERNATE_FORMATION DYING AFLAME
		Animation = Flaming_Death
			AnimationName = EUMthlnd_SKL.EUMthlnd_MFDA
		    AnimationMode = ONCE
		End
    End

    AnimationState =  ALTERNATE_FORMATION DYING 
		Animation = Dying_1
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEA
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
		Animation = Dying_2
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEB
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
		Animation = Dying_3
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEC
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
    End
 
    ; --- stunned anims
	 AnimationState = ALTERNATE_FORMATION PORCUPINE
	 	Animation = ATKC
			AnimationName		= EUMthlnd_SKL.EUMthlnd_PLTB
			AnimationMode		= LOOP
		End
		StateName = STATE_Planted
		BeginScript
			Prev = CurDrawablePrevAnimationState()
			if Prev ~= "STATE_Planted"	and Prev ~= "Trans_Up_To_Down" then CurDrawableSetTransitionAnimState("Trans_Up_To_Down") return end
		EndScript
	End

    
	
	 AnimationState = ALTERNATE_FORMATION
	 	Animation = ATKC
			AnimationName		= EUMthlnd_SKL.EUMthlnd_IDLA
			AnimationMode		= LOOP
		End
	End
	

 ;--------------------normal animations---------------------------

    
    ; --- stunned anims --- ;
    
    AnimationState = STUNNED_FLAILING
		Animation
			AnimationName = EUMthlnd_SKL.EUMthlnd_FLYA
			AnimationMode = LOOP
		End
   End
    
	; --- death anims --- ;

     AnimationState = DYING AFLAME
		Animation = Flaming_Death
			AnimationName = EUMthlnd_SKL.EUMthlnd_MFDA
		    AnimationMode = ONCE
		End
	End
    
    AnimationState = DYING EMOTION_ALERT
		Animation = Dying_1
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEA
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
		Animation = Dying_2
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEB
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
		Animation = Dying_3
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEC
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
    End

    AnimationState = DYING
		Animation = Dying_1
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEA
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
		Animation = Dying_2
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEB
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
		Animation = Dying_3
			AnimationName = EUMthlnd_SKL.EUMthlnd_DIEC
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
	End

		AnimationState						= BURNINGDEATH
			Animation
				AnimationName				= EUMthlnd_SKL.EUMthlnd_MFDA
				AnimationMode				= LOOP
				Distance					= 110
			End
		End

		AnimationState						= PARALYZED
			Animation
				AnimationName				= EUMthlnd_SKL.EUMthlnd_IDLA
				AnimationMode				= LOOP
			End
		End


    AnimationState = STUNNED_STANDING_UP
		Animation
			AnimationName = EUMthlnd_SKL.EUMthlnd_GTPA
			AnimationMode = ONCE
		End
    End

    AnimationState						= STUNNED
		Animation
			AnimationName				= EUMthlnd_SKL.EUMthlnd_LNDA
			AnimationMode				= ONCE
		End
    End

	
	AnimationState  = COMING_OUT_OF_FACTORY
		Animation = Being_Built
			AnimationName		= EUMthlnd_SKL.EUMthlnd_RUNC
			AnimationMode		= LOOP
			AnimationBlendTime	= 0
		End
	End	
	
	
	AnimationState = MOVING FIRING_OR_PREATTACK_A
		Animation = TrotAndFire
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUNC
		    AnimationMode = LOOP
		End
		Animation = TrotAndFire2
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUND
		    AnimationMode = LOOP
		End
		Flags = RANDOMSTART
		;ParticleSysBone = None InfantryDustTrails
    End
    	
		
    AnimationState = MOVING BACKING_UP
		Animation = Moving_Back
			AnimationName = EUMthlnd_SKL.EUMthlnd_BAKA
		    AnimationMode = LOOP
		End	
    End
    
    AnimationState = MOVING EMOTION_AFRAID
		Animation = Moving_1
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUNE
		    AnimationMode = LOOP
		End
		Flags = MAINTAIN_FRAME_ACROSS_STATES
		ParticleSysBone = None InfantryDustTrails
    End
    
    AnimationState = MOVING EMOTION_ALERT
		Animation = TrotAndFire
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUNC
		    AnimationMode = LOOP
		End
		Animation = TrotAndFire2
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUND
		    AnimationMode = LOOP
		End
		Flags = MAINTAIN_FRAME_ACROSS_STATES
		ParticleSysBone = None InfantryDustTrails
    End
    
    AnimationState = MOVING ATTACKING
		Animation = TrotAndFire
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUNC
		    AnimationMode = LOOP
		End
		Animation = TrotAndFire2
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUND
		    AnimationMode = LOOP
		End
		Flags = MAINTAIN_FRAME_ACROSS_STATES
		ParticleSysBone = None InfantryDustTrails
    End
    
    AnimationState = MOVING ENGAGED
		Animation = TrotAndFire
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUNC
		    AnimationMode = LOOP
		End
		Animation = TrotAndFire2
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUND
		    AnimationMode = LOOP
		End
		Flags = MAINTAIN_FRAME_ACROSS_STATES
		ParticleSysBone = None InfantryDustTrails
    End

    AnimationState = MOVING
		Animation = TrotAndFire
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUNA
		    AnimationMode = LOOP
		End
		Animation = TrotAndFire2
			AnimationName = EUMthlnd_SKL.EUMthlnd_RUNB
		    AnimationMode = LOOP
		End
		ParticleSysBone = None InfantryDustTrails
    End
    

    ; --- Attacking --- ;

	AnimationState =  FIRING_OR_PREATTACK_A
		Animation = KickSinceWeAreMelee
			AnimationName		= EUMthlnd_SKL.EUMthlnd_ATKA
			AnimationMode		= ONCE
			UseWeaponTiming		= Yes	
		End
		Animation = KickSinceWeAreMelee
			AnimationName		= EUMthlnd_SKL.EUMthlnd_ATKB
			AnimationMode		= ONCE
			UseWeaponTiming		= Yes	
		End
		Animation = KickSinceWeAreMelee
			AnimationName		= EUMthlnd_SKL.EUMthlnd_ATKC
			AnimationMode		= ONCE
			UseWeaponTiming		= Yes	
		End
	End

	; --- emotions --- ;

    AnimationState							= WAR_CHANT
		Animation							= Chant
			AnimationName					= EUMthlnd_SKL.EUMthlnd_CHRA
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
		Animation							= Chant
			AnimationName					= EUMthlnd_SKL.EUMthlnd_CHRB
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
		Animation							= Chant
			AnimationName					= EUMthlnd_SKL.EUMthlnd_CHRC
			AnimationMode = ONCE
			AnimationBlendTime			= 15
		End
		Flags								= RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
	End			

;	AnimationState							= EMOTION_AFRAID	these units are immune to fear
;		Animation							= FERA
;			AnimationName					= EUMthlnd_SKL.EUMthlnd_FERA
;			AnimationMode					= LOOP
;		End
;		Flags = RANDOMSTART
;	End
	
	AnimationState							= EMOTION_CELEBRATING
		Animation							= CHRA
			AnimationName					= EUMthlnd_SKL.EUMthlnd_CHRA
			AnimationMode					= ONCE
			AnimationBlendTime				= 10
		End
		Animation							= CHRB
			AnimationName					= EUMthlnd_SKL.EUMthlnd_CHRB
			AnimationMode					= ONCE
			AnimationBlendTime				= 10
		End
		Animation							= TNTA
			AnimationName					= EUMthlnd_SKL.EUMthlnd_TNTA
			AnimationMode					= ONCE
			AnimationBlendTime				= 10
		End
		Flags				= RESTART_ANIM_WHEN_COMPLETE
		BeginScript
			Prev = CurDrawablePrevAnimationState()
			if Prev == "STATE_Planted"	then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end
		EndScript
	End
	
	AnimationState							= EMOTION_TAUNTING
		Animation							= TNTA
			AnimationName					= EUMthlnd_SKL.EUMthlnd_TNTA
			AnimationMode					= ONCE
		End
		Animation							= TNTB
			AnimationName					= EUMthlnd_SKL.EUMthlnd_TNTB
			AnimationMode					= ONCE
		End
		Animation							= TNTB
			AnimationName					= EUMthlnd_SKL.EUMthlnd_TNTB
			AnimationMode					= ONCE
		End
		Flags								= RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
		BeginScript
			Prev = CurDrawablePrevAnimationState()
			if Prev == "STATE_Planted"	then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end
		EndScript
	End
	
	AnimationState							= EMOTION_POINTING
		Animation							= Pointing1
			AnimationName					= EUMthlnd_SKL.EUMthlnd_PNTA
			AnimationMode					= ONCE
		End
		Animation							= Pointing1
			AnimationName					= EUMthlnd_SKL.EUMthlnd_PNTb
			AnimationMode					= ONCE
		End
		Flags								= RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
		BeginScript
			Prev = CurDrawablePrevAnimationState()
			if Prev == "STATE_Planted"	then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end
		EndScript
	End

	AnimationState							= EMOTION_ALERT
		Animation							= ALERT
			AnimationName					= EUMthlnd_SKL.EUMthlnd_IDLA
			AnimationMode					= LOOP
		End
		Flags								= RESTART_ANIM_WHEN_COMPLETE MAINTAIN_FRAME_ACROSS_STATES2
		BeginScript
			Prev = CurDrawablePrevAnimationState()
			if Prev == "STATE_Planted"	then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end
		EndScript
	End
		
	AnimationState							= ATTACKING
		Animation							= ALERT
			AnimationName					= EUMthlnd_SKL.EUMthlnd_IDLA
			AnimationMode					= LOOP
		End
		Flags								= RESTART_ANIM_WHEN_COMPLETE MAINTAIN_FRAME_ACROSS_STATES2
		BeginScript
			Prev = CurDrawablePrevAnimationState()
			if Prev == "STATE_Planted"	then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end
		EndScript
	End
	
	AnimationState							= ENGAGED
		Animation							= ALERT
			AnimationName					= EUMthlnd_SKL.EUMthlnd_IDLA
			AnimationMode					= LOOP
		End
		Flags								= RESTART_ANIM_WHEN_COMPLETE MAINTAIN_FRAME_ACROSS_STATES2
		BeginScript
			Prev = CurDrawablePrevAnimationState()
			if Prev == "STATE_Planted"	then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end
		EndScript
	End
	
;    AnimationState  = JUST_BUILT
;      Animation = Being_Built
;        AnimationName		= EUMthlnd_SKL.EUMthlnd_BLDA
;        AnimationMode		= ONCE
;        AnimationBlendTime	= 0
;      End
;    End

	AnimationState						= RAISING_FLAG
		Animation						= CHRA
			AnimationName				= EUMthlnd_SKL.EUMthlnd_CHRA
			AnimationMode				= ONCE
			AnimationSpeedFactorRange	= 0.9 1.1
		End
		Animation						= CHRB
			AnimationName				= EUMthlnd_SKL.EUMthlnd_CHRB
			AnimationMode				= ONCE
			AnimationSpeedFactorRange	= 0.9 1.1
		End
		Flags							= RESTART_ANIM_WHEN_COMPLETE
	End
	
	AnimationState = SELECTED
		Animation				= Selected_Loop
			AnimationName		= EUMthlnd_SKL.EUMthlnd_ATNB
			AnimationMode		= LOOP
			AnimationBlendTime	= 10
		End
		StateName				= Selected
		BeginScript
			Prev = CurDrawablePrevAnimationState()
			if Prev == "STATE_Planted"	then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end			
			if Prev == "Bored" then CurDrawableSetTransitionAnimState("TRANS_BS_Normal") end
		EndScript
		Flags = RESTART_ANIM_WHEN_COMPLETE
	End
	

	; --- transition states --- ;
	
    TransitionState = Trans_Down_To_Up
		Animation = Transition
			AnimationName = EUMthlnd_SKL.EUMthlnd_PLTC
			AnimationMode = ONCE
		End
    End
    
    TransitionState = Trans_Up_To_Down
		Animation = Transition
			AnimationName = EUMthlnd_SKL.EUMthlnd_PLTA
			AnimationMode = ONCE
		End
    End
    
;    TransitionState = TRANS_MovingToDown_Alt
;		Animation = Transition
;			AnimationName = EUMthlnd_SKL.EUMthlnd_PLTC
;			AnimationMode = ONCE
;		End
;    End
    
;    TransitionState = TRANS_SR_Normal
;		Animation = Transition
;			AnimationName = EUMthlnd_SKL.EUMthlnd_IDLF
;			AnimationMode = ONCE
;		End
;    End
    
;    TransitionState = TRANS_RS_Normal
;		Animation = Transition
;			AnimationName = EUMthlnd_SKL.EUMthlnd_IDLF
;			AnimationMode = ONCE_BACKWARDS
;		End
;		Flags = START_FRAME_LAST
;    End
        
    TransitionState = TRANS_BS_Normal
		Animation = Transition
			AnimationName				= EUMthlnd_SKL.EUMthlnd_ATNA
			AnimationMode				= ONCE
			AnimationBlendTime			= 10
			AnimationMustCompleteBlend	= yes
		End
    End
    
;    TransitionState = TRANS_SB_Normal
;		Animation = Transition
;			AnimationName				= EUMthlnd_SKL.EUMthlnd_IDLA
;			AnimationMode				= ONCE
;			AnimationBlendTime			= 10
;			AnimationMustCompleteBlend	= yes
;		End
;    End
    
;    TransitionState = TRANS_BR_Normal
;		Animation = Transition
;			AnimationName = EUMthlnd_SKL.EUMthlnd_IDLF
;			AnimationMode = ONCE
;		End
;    End
    
;    TransitionState = TRANS_RB_Normal
;		Animation = Transition
;			AnimationName = EUMthlnd_SKL.EUMthlnd_IDLF
;			AnimationMode = ONCE_BACKWARDS
;		End
;		Flags = START_FRAME_LAST
;    End
    
    
    
    TransitionState = TRANS_SR_Alt
    End
    
    TransitionState = TRANS_RS_Alt
    End
    
    TransitionState = TRANS_BS_Alt
    End
    
    TransitionState = TRANS_SB_Alt
    End
    
    TransitionState = TRANS_BR_Alt
    End
    
    TransitionState = TRANS_RB_Alt
    End