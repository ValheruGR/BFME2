	Draw = W3DHordeModelDraw ModuleTag_01

		OkToChangeModelColor = Yes
		  
		StaticModelLODMode = Yes
		; specify options for static LODs
		LodOptions	= LOW
			AllowMultipleModels		=	ALLOW_MULTIPLE_MODELS_LOW
			MaxRandomTextures		=	MAX_RANDOM_TEXTURES_LOW
			MaxRandomAnimations		=	MAX_RANDOM_ANIMATIONS_LOW
			MaxAnimFrameDelta		=	MAX_ANIM_FRAME_DELTA_LOW
		End
		
		LodOptions	= MEDIUM
			AllowMultipleModels		=	ALLOW_MULTIPLE_MODELS_MED
			MaxRandomTextures		=	MAX_RANDOM_TEXTURES_MED
			MaxRandomAnimations		=	MAX_RANDOM_ANIMATIONS_MED
			MaxAnimFrameDelta		=	MAX_ANIM_FRAME_DELTA_MED
		End
		
		LodOptions	= HIGH
			AllowMultipleModels		=	ALLOW_MULTIPLE_MODELS_HIGH
			MaxRandomTextures		=	MAX_RANDOM_TEXTURES_HIGH
			MaxRandomAnimations		=	MAX_RANDOM_ANIMATIONS_HIGH
			MaxAnimFrameDelta		=	MAX_ANIM_FRAME_DELTA_HIGH
		End
	
		
		DefaultModelConditionState
			Model					= wargbtp3
			Skeleton				= IUWarg_SKL
		End

		; -------------- STUNNED ANIMS ----------------
		AnimationState						= PASSENGER
			Animation						= Grabbed
				AnimationName				= IUWarg_GBDA
				AnimationMode				= LOOP
			End
		End
		
		AnimationState						= FREEFALL
			Animation						= freefall
				AnimationName				= IUWarg_FLYA
				AnimationMode				= LOOP
				AnimationBlendTime			= 10
			End
		End
		
		AnimationState				=	DYING BURNINGDEATH
			Animation
				AnimationName		=	IUWarg_DIEA
				AnimationMode		=	ONCE
				AnimationBlendTime	=	10
			End
		End

		AnimationState				=	DYING SPLATTED
			Animation				=	splatted
				AnimationName		=	IUWarg_LNDA
				AnimationMode		=	ONCE
			End
		End
		
		AnimationState				=	STUNNED_FLAILING 
			Animation				=	JustDie
				AnimationName       =	IUWarg_FLYA
				AnimationMode       =	LOOP
			End
		End

		AnimationState				=	DYING
			Animation				=	JustDie
				AnimationName		=	IUWarg_DIEA
				AnimationMode		=	ONCE
			End
		End		

		AnimationState				=	BURNINGDEATH
			Animation
				AnimationName       =	IUWarg_MFDA
				AnimationMode       =	LOOP
				Distance			=	50
			End
		End

		AnimationState				=	STUNNED 
			Animation				=	Land
				AnimationName       =	IUWarg_LNDA
				AnimationMode       =	ONCE
			End
		End

		AnimationState				=	STUNNED_STANDING_UP
			Animation				=	StandUp
				AnimationName       =	IUWarg_GTPA
				AnimationMode       =	ONCE
			End
		End
		
		; -------------- MOVING ANIMS ---------------
		AnimationState				=	TURN_LEFT_HIGH_SPEED  
			Animation				=	MTurnLeft
				AnimationName		=	IUWarg_TNL1
				AnimationMode		=	LOOP
			End
		End

		AnimationState				=	TURN_RIGHT_HIGH_SPEED
			Animation				=	MTurnRight
				AnimationName		=	IUWarg_TNR1
				AnimationMode		=	LOOP
			End
		End
		
		AnimationState				=	TURN_LEFT  
			Animation				=	TurnRight
				AnimationName		=	IUWarg_TRNL
				AnimationMode		=	LOOP
				AnimationSpeedFactorRange = 2.0 2.0
			End
		End

		AnimationState				=	TURN_RIGHT 
			Animation				=	TurnRight
				AnimationName		=	IUWarg_TRNR
				AnimationMode		=	LOOP
				AnimationSpeedFactorRange = 2.0 2.0
			End
		End

		AnimationState				=	MOVING ACCELERATE 
			Animation				=	Accelerate
				AnimationName		=	IUWarg_ACCL
				AnimationMode		=	ONCE
			End
            ParticleSysBone				= None GenericSiegeTrailDust
		End
	
		AnimationState				=	MOVING DECELERATE
			Animation				=	Decelerate
				AnimationName		=	IUWarg_DECL
				AnimationMode		=	ONCE
			End
            ParticleSysBone				= None GenericSiegeTrailDust
		End
		
		AnimationState				=	MOVING BACKING_UP
			Animation				=	BackingUp
				AnimationName		=	IUWarg_BAKA
				AnimationMode		=	LOOP
			End
		End
		
		AnimationState				=	MOVING
			ShareAnimation			=	Yes
			Animation				=	RunA
				AnimationName		=	IUWarg_RUNA
				AnimationMode		=	LOOP
			End
			;ParticleSysBone			=	None CalvaryDustTrails  
		End
		
		; ----------- ATTACKING ANIMS --------------		
		AnimationState				=	BETWEEN_FIRING_SHOTS_A
			Animation				=	BetweenFiringShots
				AnimationName		=	IUWarg_IDLA
				AnimationMode		=	LOOP
				AnimationBlendTime	=   10
			End
		End

		AnimationState				=	FIRING_OR_PREATTACK_A
			Animation				=	AttackA3
				AnimationName		=	IUWarg_ATKA
				AnimationMode		=	ONCE
				UseWeaponTiming		=	Yes
				AnimationBlendTime  =	10
			End
		End
		
		AnimationState				=	ATTACKING
			Animation				=	AttackA3
				AnimationName		=	IUWarg_ATKA
				AnimationMode		=	LOOP
				AnimationBlendTime	=   10
			End
		End

		; ----------- WAR CHANT ANIMS -------------
		AnimationState = WAR_CHANT
			Animation = Chant
				AnimationName = IUWarg_TNTA
				AnimationMode = LOOP
			End
		End

		; ----------- EMOTION ANIMS ---------------
		AnimationState					= EMOTION_TAUNTING
			Animation					= TNTA
				AnimationName			= IUWarg_TNTA
				AnimationMode			= LOOP
			End
		End
		
		AnimationState					= EMOTION_CELEBRATING
			Animation                   = CHRA
				AnimationName			= IUWarg_CHRA
				AnimationMode			= ONCE
			End
		End

		
		; ----------- IDLE ANIMS ---------------
		AnimationState							= EMOTION_ALERT
			StateName							= STATE_Ready 
			Animation							= ALERT
				AnimationName					= IUWarg_IDLA
				AnimationMode					= LOOP
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Selected" then CurDrawableSetTransitionAnimState("Selected_to_Ready") end
			EndScript	
		End
		
		; ----------- SELECTED ANIMS --------------
		AnimationState				=	SELECTED
			SimilarRestart			=   Yes
			Animation				=	AtAttention
				AnimationName		=	IUWarg_ATNB
				AnimationMode		=	LOOP
			End
			StateName				= Selected
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Idle" then CurDrawableSetTransitionAnimState("Idle_to_Selected") end
				if Prev == "STATE_Ready" then CurDrawableSetTransitionAnimState("Ready_to_Selected") end
			EndScript
		End

		IdleAnimationState
			Animation
				AnimationName		=	IUWarg_IDLC
				AnimationMode		=	ONCE
				AnimationBlendTime	=	10
				AnimationPriority   =	20
			End
			Animation
				AnimationName		=	IUWarg_IDLB
				AnimationMode		=	ONCE
				AnimationBlendTime	=	10
				AnimationPriority   =	1
			End
			StateName				= Idle 
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Selected" then CurDrawableSetTransitionAnimState("Selected_to_Idle") end
			EndScript
		End

		;------------ TRANSITION ANIMS ----------------
		TransitionState       = Selected_to_Idle
			Animation           = ATNE
				AnimationName		=	IUWarg_ATNC
				AnimationMode		=	ONCE
				AnimationSpeedFactorRange = 0.7 1.3
			End
		End
		
		TransitionState       = Idle_to_Selected
			Animation           = ATND
				AnimationName     = IUWarg_ATNA
				AnimationMode   =	ONCE

				AnimationSpeedFactorRange = 0.7 1.3
			End
		End

	End