
		;//------ANIMATIONS------
 		;;.;;
		AnimationState				=	SELECTED
			StateName				=	AtAttentionIdle
			SimilarRestart			=   Yes			
			Animation				=	ATNB
				AnimationName		=	 DUBtlWagon_ATNA
				AnimationMode		=	LOOP
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Idle" then CurDrawableSetTransitionAnimState("TRANS_Select") end
				if Prev == "AtAttentionIdle" then CurDrawableSetTransitionAnimState("TRANS_Select") end
			EndScript
		End
		
		IdleAnimationState 
			Animation			= IDLA  
				AnimationName		= DUBtlWagon_IDLA
				AnimationPriority	= 5	;// will be chosen 5 times more often than a default (1) priority animation.
			End
 		;;.;;
			Animation = IDLB 
				AnimationName = DUBtlWagon_IDLB
				AnimationPriority	= 1	
			End
 		;;.;;			
			Animation
				AnimationName				= DUBtlWagon_CHRA
				AnimationMode				= LOOP
				AnimationPriority	= 1	;// will be chosen 5 times more often than a default (1) priority animation.
			End						
		;;	Flags							= RANDOMSTART
			StateName = Idle
		End
	   
		AnimationState         = DYING
			Animation            = DIEA
				AnimationName      = DUBtlWagon_DIEA
				AnimationMode      = ONCE
				AnimationBlendTime = 0
			End
		End
		
 		;;.;;
		AnimationState						= FREEFALL
			Animation						= freefall
				AnimationName				= DUBtlWagon_IDLA
				AnimationMode				= LOOP
				AnimationBlendTime			= 10
			End
		End
		
 		;;.;;
		AnimationState						= STUNNED_FLAILING
			Animation						= freefall
				AnimationName				= DUBtlWagon_IDLA
				AnimationMode				= LOOP
				AnimationBlendTime			= 10
			End
		End


		AnimationState						= PARALYZED
			Animation
				AnimationName				= DUBtlWagon_IDLA
				AnimationMode				= LOOP
			End
		End
		
 		;;.;;
		AnimationState					= EMOTION_UNCONTROLLABLY_AFRAID
			Animation					= FERA
				AnimationName			= DUBtlWagon_FERA
				AnimationMode			= LOOP
			End
		End
		
 		;;.;;
		AnimationState					= EMOTION_AFRAID ;coming soon
			Animation					= FERA
				AnimationName			= DUBtlWagon_FERA
				AnimationMode			= LOOP
			End
		End

;-----------Just Built animation
	    
		AnimationState  = JUST_BUILT
			Animation			= Being_Built
				AnimationName		= DUBtlWagon_BLDA
				AnimationMode		= ONCE
				AnimationBlendTime = 0		; Can't blend here, as this anim is offset from the object position.
			End
		End

		;//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		;// Moving animations
		;//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		AnimationState			= MOVING TURN_LEFT
			Animation			= Turn
				AnimationName		= DUBtlWagon_TNLA
				AnimationMode       = LOOP
				AnimationBlendTime  = 10
			End
		End
		
		AnimationState	= MOVING TURN_RIGHT
			Animation		= Turn
				AnimationName		= DUBtlWagon_TNRA
				AnimationMode       = LOOP
				AnimationBlendTime  = 10
			End
		End	
	    
		AnimationState			= TURN_LEFT
			Animation			= Turn
				AnimationName		= DUBtlWagon_TNLB
				AnimationMode       = LOOP
				AnimationBlendTime  = 10
			End
		End
		
		AnimationState	= TURN_RIGHT
			Animation		= Turn
				AnimationName		= DUBtlWagon_TNRB
				AnimationMode       = LOOP
				AnimationBlendTime  = 10
			End
		End	

		AnimationState	= MOVING BACKING_UP
			Animation		= BackingUp
				AnimationName		=	DUBtlWagon_BAKA
				AnimationMode		=	LOOP
			End
			Flags					=	RANDOMSTART
		End	

		AnimationState	= MOVING			
			ShareAnimation	= Yes;
			Animation			= RUNB
				AnimationName			= DUBtlWagon_RUNA
				AnimationMode			= LOOP
				Distance				= 30
				AnimationBlendTime		= 10
			End
			Flags			= RANDOMSTART			
		End

;;		AnimationState						= ATTACKING_STRUCTURE FIRING_OR_PREATTACK_A  ; Melee attack for ranged units

		AnimationState						= ATTACKING FIRING_OR_PREATTACK_A  ; Melee attack for ranged units
			Animation						= ATKB
				AnimationName				= DUBtlWagon_ATKA
				AnimationMode				= ONCE
				UseWeaponTiming				= Yes
			End
		End
		
 		;;.;;
		AnimationState = HIT_REACTION
			Animation = Hit_Level_1_a
				AnimationName = DUBtlWagon_HITA
				AnimationMode = ONCE
			End
		End
		
 		;;.;;
		AnimationState			= RAISING_FLAG
			Animation           = CHRA
				AnimationName   = DUDain_CHRA
				AnimationMode   = LOOP
			End
		End
		

 		;;.;;
		AnimationState				= LEVELED 						; This state clears itself in 3 seconds
			Animation				= LevelUp
				AnimationName		= DUBtlWagon_CHRA
				AnimationMode		= ONCE
			End
		End
		
		AnimationState						= EMOTION_CELEBRATING
			Animation
				AnimationName				= DUBtlWagon_CHRA
				AnimationMode				= LOOP
			End						
			Flags							= RANDOMSTART
		End
		
		
 		;;.;;
		TransitionState				=	TRANS_Select
			Animation				=	ATNA
				AnimationName		=	DUBtlWagon_ATNA
				AnimationMode		=	ONCE

			End
		End