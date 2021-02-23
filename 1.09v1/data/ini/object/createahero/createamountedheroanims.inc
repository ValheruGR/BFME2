//================== MOUNTED ANIMATIONS =================================================================
AnimationState = MOUNTED DEBUG  ;shift delete to trigger
	Animation
		AnimationName =	#(MODEL)_M_IDLA	   
		AnimationMode =	ONCE
	End
	ParticleSysBone	= BAT_HHEAD	glowHorseGold FollowBone:Yes			
	ParticleSysBone	= B_HHIPL glowHorseRearGold	FollowBone:Yes
	ParticleSysBone	= BAT_SPINE2 glowGold FollowBone:Yes			
End




; --- stunned anims
AnimationState = MOUNTED FREEFALL 
	Animation  = freefall
		AnimationName =	#(MODEL)_M_FLYC
		AnimationMode =	LOOP
	End
	Flags =	RANDOMSTART
End

AnimationState = MOUNTED STUNNED_FLAILING 
	Animation =	JustDie
		AnimationName =	#(MODEL)_M_FLYC
		AnimationMode =	LOOP
	End
	Flags =	RANDOMSTART
End

AnimationState				=	MOUNTED PASSENGER
	Animation				=	grabbed
		AnimationName		=	#(MODEL)_M_GBDA
		AnimationMode		=	LOOP
	End
	Flags					=	RANDOMSTART
End



AnimationState				=	MOUNTED DYING SPLATTED
	Animation				=	Land
		AnimationName		=	#(MODEL)_M_LNDA
		AnimationMode		=	ONCE
		AnimationBlendTime  =   2
	End
	FXEvent	= Frame:2 Name:FX_SplatDust
End


; This is the no-spawn-horse type of death
AnimationState				=	MOUNTED DYING	; DEATH_2 Normally has DEATH_2, but just as a backup don't insist
	Animation				=	JustDie
		AnimationName		=	#(MODEL)_M_DIEA
		AnimationMode		=	ONCE
	End
End

AnimationState				=	MOUNTED STUNNED_STANDING_UP
	Animation				=	StandUp
		AnimationName		=	#(MODEL)_M_GTPA
		AnimationMode		=	ONCE
		AnimationSpeedFactorRange = 3.5 3.5
	End
End
		
AnimationState				=	MOUNTED STUNNED
	Animation				=	Land
		AnimationName		=	#(MODEL)_M_LNDA
		AnimationMode		=	ONCE
	End
End

// spear throw
AnimationState		  =	MOUNTED SPECIAL_WEAPON_ONE
	StateName		  =	Attacking
	Animation
		AnimationName =	#(MODEL)_M_SPCA
		AnimationMode =	ONCE
	End
End

// elendil
AnimationState		  =	MOUNTED SPECIAL_POWER_1
	Animation
		AnimationName =	#(MODEL)_M_LVLA
		AnimationMode =	LOOP
	End
	ParticleSysBone = B_HAND_R ElendilFlare FollowBone:yes
	ParticleSysBone = B_HAND_R ElendilSwordFlare FollowBone:yes
End


AnimationState        = MOUNTED MOVING FIRING_OR_PREATTACK_A
	ShareAnimation		= Yes
	Animation           = RunAndFire
		AnimationName       = #(MODEL)_M_ATRA
		AnimationMode       = LOOP
	End
	Flags               = RANDOMSTART 
End



; This is what happens when Theo gives his rousing speech
AnimationState				=	MOUNTED MOVING USING_SPECIAL_ABILITY
	Animation				=	RousingSpeech
		AnimationName		=	#(MODEL)_M_WLKB
		AnimationMode		=	LOOP
	End
	;;ParticleSysBone			=	None CalvaryDustTrails
End

AnimationState				=	MOUNTED TURN_LEFT_HIGH_SPEED
	Animation				=	TurnLeft
		AnimationName		=	#(MODEL)_M_TNL1
		AnimationMode		=	LOOP
		AnimationSpeedFactorRange= 1.2 1.2
		AnimationBlendTime	=	20
	End
End

AnimationState				=	MOUNTED TURN_RIGHT_HIGH_SPEED
	Animation				=	TurnLeft
		AnimationName		=	#(MODEL)_M_TNR1
		AnimationMode		=	LOOP
		AnimationSpeedFactorRange= 1.2 1.2
		AnimationBlendTime	=	20
	End
End


AnimationState				=	MOUNTED MOVING TURN_LEFT 
	Animation				=	TurnLeft
		AnimationName		=	#(MODEL)_M_TRNL
		AnimationMode		=	LOOP
	End
;			;ParticleSysBone			=	None CalvaryDustTrails
End

AnimationState				=	MOUNTED MOVING TURN_RIGHT 
	Animation				=	TurnRight
		AnimationName		=	#(MODEL)_M_TRNR
		AnimationMode		=	LOOP
	End
;			;ParticleSysBone			=	None CalvaryDustTrails
End

AnimationState				=	MOUNTED MOVING ACCELERATE
	Animation				=	Accelerate
		AnimationName		=	#(MODEL)_M_ACCL
		AnimationMode		=	LOOP
	End
	;ParticleSysBone			=	None CalvaryDustTrails
End

AnimationState				=	MOUNTED MOVING DECELERATE
	Animation				=	Decelerate
		AnimationName		=	#(MODEL)_M_DECL
		AnimationMode		=	ONCE
	End
	;ParticleSysBone			=	None CalvaryDustTrails
End

AnimationState				=	MOUNTED MOVING WALKING
	Animation				=	Walk
		AnimationName		=	#(MODEL)_M_WLKA
		AnimationMode		=	LOOP
	End
	;ParticleSysBone			=	None InfantryDustTrails  
End

AnimationState				=	MOUNTED MOVING BACKING_UP
	Animation				=	BackingUp
		AnimationName		=	#(MODEL)_M_BAKA
		AnimationMode		=	LOOP
	End
	;ParticleSysBone			=	None InfantryDustTrails  
End


AnimationState				=	MOUNTED MOVING
	Animation				=	RunA
		AnimationName		=	#(MODEL)_M_RUNA
		AnimationMode		=	LOOP
	End
	;ParticleSysBone			=	None CalvaryDustTrails  
End

AnimationState						=	PACKING_TYPE_2 MOUNTED
	StateName						=	SPELL
	Animation						=	SPCC
		AnimationName				=	#(MODEL)_M_SPCA
		AnimationMode				=	ONCE
		AnimationBlendTime	=	20
	End
End

AnimationState						=	PACKING_TYPE_1 MOUNTED
	StateName						=	SPELL
	Animation						=	SPCC
		AnimationName				=	#(MODEL)_M_IDLB #(MODEL)_M_IDLA
		AnimationSpeedFactorRange	=	0.842 0.842
		AnimationMode				=	ONCE
	End		
End

AnimationState				=	MOUNTED FIRING_OR_PREATTACK_A
	Animation				=	AttackA
		AnimationName		=	#(MODEL)_M_ATKA
		AnimationMode		=	ONCE
		UseWeaponTiming		=	Yes
	End
	Animation				=	AttackB
		AnimationName		=	#(MODEL)_M_ATKB #(MODEL)_M_ATKA
		AnimationMode		=	ONCE
		UseWeaponTiming		=	Yes
	End
	Flags					=	RESTART_ANIM_WHEN_COMPLETE
End

AnimationState				=	MOUNTED ATTACKING
	Animation				=	AttackA
		AnimationName		=	#(MODEL)_M_ATKA
		AnimationMode		=	MANUAL
	End
End

AnimationState				= MOUNTED LEVELED  			; This state clears itself in 3 seconds
	StateName				= Idle
	Animation				= LevelUp
		AnimationName		= #(MODEL)_M_IDLB #(MODEL)_M_IDLA
		AnimationMode		= ONCE
		AnimationSpeedFactorRange	=	0.666 0.666
	End
End

AnimationState				=	MOUNTED SELECTED
	SimilarRestart			=   Yes			
	StateName				=	AtAttentionIdle
	Animation				=	ATNB
		AnimationName		=	#(MODEL)_M_IDLB #(MODEL)_M_IDLA
		AnimationMode		=	LOOP
	End
	BeginScript
		Prev = CurDrawablePrevAnimationState()
		if Prev == "Idle" then CurDrawableSetTransitionAnimState("TRANS_MountedSelect") end
		if Prev == "AtAttentionIdle" then CurDrawableSetTransitionAnimState("TRANS_MountedSelect") end
	EndScript
End

TransitionState				=	TRANS_MountedSelect
	Animation				=	ATNA
		AnimationName		=	#(MODEL)_M_ATNA
		AnimationMode		=	ONCE
	End
End

AnimationState			= MOUNTED
	StateName = Idle
	Animation	=	IdleA
		AnimationName		=	#(MODEL)_M_IDLA
		AnimationPriority	=	20
		AnimationMode		=	ONCE
		AnimationBlendTime	=	15
	End
	Animation				=	IdleB
		AnimationName		=	#(MODEL)_M_IDLB #(MODEL)_M_IDLA
		AnimationMode		=	ONCE
		AnimationBlendTime	=	15
	End
	Animation				=	IdleC
		AnimationName		=	#(MODEL)_M_IDLC #(MODEL)_M_IDLB #(MODEL)_M_IDLA
		AnimationMode		=	ONCE
		AnimationBlendTime	=	15
	End
	Flags					=	RESTART_ANIM_WHEN_COMPLETE
End
