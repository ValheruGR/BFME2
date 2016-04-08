	Draw = W3DScriptedModelDraw ModuleTag_01
  	  
		OkToChangeModelColor		= Yes
		ShowShadowWhileContained	= Yes
		StaticModelLODMode			= yes							;// Will append M or L to the skin name depending on GameLOD

		ExtraPublicBone				= TRUNK01

		DefaultModelConditionState
			Model = muctrlbtp2_skn ; ; MuCavTroll_SKN
			WeaponLaunchBone = PRIMARY Firepoint
		End

		RandomTexture = mucavtroll.tga 0 mucavtroll.tga
		RandomTexture = mucavtrolla1.tga 0 mucavtroll.tga
        RandomTexture = mucavtrollb1.tga 0 mucavtroll.tga
        RandomTexture = mucavtrollc1.tga 0 mucavtroll.tga
		
		;// Splatted death goes first, independant of death flags
		ModelConditionState    = DYING DECAY SPLATTED
			Model				= MUCavTroll_DISA
			RetainSubObjects	= Yes
		End
		 ModelConditionState        = USER_4 
            Model               = mucavtrlU2_skn ; ; 
           WeaponLaunchBone = PRIMARY Firepoint
		   RetainSubObjects = Yes
        End

		IdleAnimationState
			StateName				= Idle
			AllowRepeatInRandomPick	= Yes
			SimilarRestart			= Yes

			Animation = Breathe


				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLA 
				AnimationMode = ONCE
				AnimationPriority = 30
			End
			Animation = BellyScratch
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLC 
				AnimationMode = ONCE
				AnimationPriority = 5
			End
			Animation = RubHead
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLK 
				AnimationMode = ONCE
				AnimationPriority = 5
			End
			Animation = WipeNose
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLN 
				AnimationMode = ONCE
				AnimationPriority = 5
			End
			Animation = LittleRoar
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLM 
				AnimationMode = ONCE
				AnimationPriority = 5
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableHideSubObjectPermanently("ROCK")
			EndScript
		End
		
		
		AnimationState         = DYING DECAY SPLATTED 
			Animation            = dead1
				AnimationName       = MUCavTroll_DISA.MUCavTroll_DISA
				AnimationMode      = ONCE
			End
		End

		ModelConditionState    = DYING DECAY WEAPONSET_TOGGLE_1		; rock throwing always falls forward
			Model				= MUCavTroll_DISC
			RetainSubObjects	= Yes
		End;

		AnimationState         = DYING DECAY WEAPONSET_TOGGLE_1
			Animation            = dead1
				AnimationName       = MUCavTroll_DISC.MUCavTroll_DISC
				AnimationMode      = ONCE
			End
		End
		
		ModelConditionState    = DYING DECAY DEATH_1
			Model				= MUCavTroll_DISB
			RetainSubObjects	= Yes
		End;

		AnimationState         = DYING DECAY DEATH_1 

			Animation            = dead1
				AnimationName       = MUCavTroll_DISB.MUCavTroll_DISB
				AnimationMode      = ONCE
			End
		End

		ModelConditionState    = DYING DECAY DEATH_2
			Model                = MUCavTroll_DISC
			RetainSubObjects = Yes
		End;

		AnimationState         = DYING DECAY DEATH_2 
			Animation            = dead1
				AnimationName       = MUCavTroll_DISC.MUCavTroll_DISC
				AnimationMode      = ONCE
			End
		End

		;// Flailing must go before dying in case we are dead in the air
		AnimationState = STUNNED_FLAILING
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_FLYA
				AnimationMode = LOOP
			End
		End

		;//;; DYING ANIMATIONS ;;;
		AnimationState = DYING WEAPONSET_TOGGLE_1
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_DIEE
				AnimationMode = ONCE
			End
		End
		
		AnimationState = DYING SPLATTED
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_LNDA
				AnimationMode = ONCE
			End
		End

		AnimationState = DYING DEATH_1
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_DIEB
				AnimationMode = ONCE
			End

				ParticleSysBone = B_PELVIS TrollSplatDust
				ParticleSysBone = BAT_HEAD TrollSplatDust
		End

		AnimationState = DYING DEATH_2
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_DIEC
				AnimationMode = ONCE
			End

				ParticleSysBone = BAT_SPINE1 TrollSplatDust1
				ParticleSysBone = BAT_HEAD TrollSplatDust1
		End

		ModelConditionState = DYING USER_4
			Model =  muctrlbtp2_skn ; ; MuCavTroll_SKN		
		End
		AnimationState = DYING
			Animation
				AnimationName     =  MuCavTroll_SKL.MuCavTroll_DIEC
				AnimationMode     = ONCE
			End
		End

		
		ModelConditionState = STONED 
			Model			= muctrlbtp2_skn   ; ; MuCavTroll_SKN
			Texture			= MuCavTroll.tga MUCavTroll_R.tga
			Texture			= mucavtrolla1.tga MUCavTroll_R.tga
			Texture			= mucavtrollb1.tga MUCavTroll_R.tga
			Texture			= mucavtrollc1.tga MUCavTroll_R.tga
			
		End 		

		AnimationState		= STONED
			Animation			= Stoned
				AnimationName		= MuCavTroll_SKL.MuCavTroll_MFDA
				AnimationMode		= MANUAL
				AnimationBlendTime	= 40
			End
			Flags	= RANDOMSTART
		End
				
		AnimationState				= STUNNED_STANDING_UP
			Animation				= MuCavTroll_GTPA
				AnimationName		= MuCavTroll_SKL.MuCavTroll_GTPA
				AnimationMode		= ONCE
			End
		End	

		AnimationState				= STUNNED
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_LNDA
				AnimationMode = ONCE
			End
			ParticleSysBone = B_PELVIS TrollSplatDust2
			ParticleSysBone = BAT_HEAD TrollSplatDust2
		End
		
		AnimationState						= PARALYZED
			Animation
				AnimationName				= MuCavTroll_IDLA
				AnimationMode				= LOOP
			End
		End


		;//;; PASSENGER OF SIEGE TOWER ANIMS ;;;
;		AnimationState = PASSENGER MOVING BACKING_UP ;// pulling the seige tower or grond
;				Animation = Passenger_moving
;				AnimationName = MuCavTroll_SKL.MuCavTroll_PSHA ;// MuCavTroll_PSHA

;				AnimationMode = LOOP_BACKWARDS
;				AnimationSpeedFactorRange = 2.0 2.0
;			End
;			Flags = RANDOMSTART
;		End
;
;		AnimationState = PASSENGER MOVING ;// pushing the seige tower
;				Animation = Passenger_moving
;				AnimationName = MuCavTroll_SKL.MuCavTroll_PSHA
;				AnimationMode = LOOP
;				AnimationSpeedFactorRange = 1.5 1.5
;			End
;			Flags = RANDOMSTART
;		End
;
;		AnimationState = PASSENGER ;// idling by the grond
;			Animation = Passenger
;				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLD
;				AnimationMode = LOOP
;				AnimationBlendTime = 15
;			End
;			Flags = RANDOMSTART
;		End

		;//--- bop our friends on the head
		AnimationState = SPECIAL_WEAPON_ONE
			Animation = Punch
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKF
				AnimationMode = ONCE
			End
			Animation = Backhand
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKG
				AnimationMode = ONCE
			End			
		End
					
		;//--Troll is angry
		AnimationState = WEAPONSET_RAMPAGE
			Animation = GetMad
					AnimationName = MuCavTroll_SKL.MuCavTroll_RPGC
					AnimationMode = LOOP
				End
			End

		;// --------- With Club ------------

		AnimationState = FIRING_OR_PREATTACK_A WEAPONSTATE_ONE
	;//		Animation
	;//			;// Taking this one out since it doesn't work with the logic of the attack, which is a 180 knockback (this one is vertical clubbing, could be used as anti-monster anim, not anti bunch of inf)
	;//			AnimationName = MuCavTroll_SKL.MuCavTroll_ATKB
	;//			AnimationMode = ONCE
	;//			UseWeaponTiming		= Yes
	;//		End
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKC
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKD
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
		End


		AnimationState = TURN_LEFT WEAPONSTATE_ONE						; WEAPONSTATE_ONE = tree as club
			Animation = Moving
				AnimationName = MuCavTroll_SKL.MuCavTroll_TRNL
				AnimationMode = LOOP
				AnimationBlendTime = 10

			End
			ParticleSysBone = None InfantryDustTrails
			BeginScript ; Here since normal Packing state can be skipped with a fast click.
				CurDrawableShowSubObjectPermanently("Trunk01")
			EndScript
		End

		AnimationState = TURN_RIGHT WEAPONSTATE_ONE

			Animation = Moving
				AnimationName = MuCavTroll_SKL.MuCavTroll_TRNR
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails
			BeginScript ; Here since normal Packing state can be skipped with a fast click.
				CurDrawableShowSubObjectPermanently("Trunk01")
			EndScript
		End

		AnimationState = MOVING WEAPONSTATE_ONE					; ATTACKING
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_RUNA  ; Running with club
				AnimationMode = LOOP
				;AnimationSpeedFactorRange = 0.77 0.77
			End
			Flags               = RANDOMSTART
			ParticleSysBone     = None InfantryDustTrails
			FXEvent	= Frame:5 FireWhenSkipped Name:FX_TrollRightFootStep
			FXEvent	= Frame:18 FireWhenSkipped Name:FX_TrollLeftFootStep
		End

		;AnimationState = MOVING WEAPONSTATE_ONE DAMAGED
		;	Animation
		;		AnimationName = MuCavTroll_SKL.MuCavTroll_WLKB ; Walking with club
		;		AnimationMode = LOOP
		;		AnimationSpeedFactorRange = 1.3 1.3
		;	End
		;	Flags               = RANDOMSTART
		;	ParticleSysBone     = None InfantryDustTrails
		;	FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
		;	FXEvent	= Frame:20 FireWhenSkipped Name:FX_TrollLeftFootStep
		;End

		;AnimationState = MOVING WEAPONSTATE_ONE
		;	Animation
		;		AnimationName = MuCavTroll_SKL.MuCavTroll_RUNA  ; Running with club
	    ;  		AnimationName = MuCavTroll_SKL.MuCavTroll_WLKD ; Walking with club 
		;    	AnimationMode = LOOP
	    ;  		AnimationSpeedFactorRange = 1.36 1.36
		;	End
		;	Flags               = RANDOMSTART
		;	ParticleSysBone     = None InfantryDustTrails
		;	FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
		;	FXEvent	= Frame:23 FireWhenSkipped Name:FX_TrollLeftFootStep
		;
		;
		;	BeginScript ; Here since normal Packing state can be skipped with a fast click.
		;		CurDrawableShowSubObjectPermanently("Trunk01")
		;	EndScript
		;End

		AnimationState = FIRING_OR_PREATTACK_A WEAPONSTATE_ONE
	;//		Animation
	;//			;// Taking this one out since it doesn't work with the logic of the attack, which is a 180 knockback (this one is vertical clubbing, could be used as anti-monster anim, not anti bunch of inf)
	;//			AnimationName = MuCavTroll_SKL.MuCavTroll_ATKB
	;//			AnimationMode = ONCE

	;//			UseWeaponTiming		= Yes
	;//		End
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKC
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKD
				AnimationMode = ONCE

				UseWeaponTiming		= Yes
			End
		End

		;Running attack
		AnimationState = FIRING_OR_PREATTACK_B WEAPONSTATE_ONE
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKJ ; ; MuCavTroll_SKL.MuCavTroll_ATRA
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
		End
			
		AnimationState = PREPARING											; WEAPONSTATE_ONE not yet set.
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_GRBC
				AnimationMode = ONCE
			End
		End

		AnimationState = PACKING WEAPONSTATE_ONE
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_GRBD
				AnimationMode = ONCE
			End
			BeginScript 
				CurDrawableShowSubObjectPermanently("Trunk01")
			EndScript
		End

		AnimationState = EMOTION_CELEBRATING WEAPONSTATE_ONE
			Animation = DeepRoar
				AnimationName	=	MuCavTroll_SKL.MuCavTroll_IDLF
				AnimationMode	=	LOOP
			End
		End

		AnimationState = USER_2 WEAPONSTATE_ONE
 			Animation = ReactToTrollPoke ; The two comes from the special TrollBored weapon
 				AnimationName = MuCavTroll_SKL.MuCavTroll_HITD
 				AnimationMode = ONCE
 			End
		End
	 
		AnimationState					= EMOTION_TAUNTING WEAPONSTATE_ONE
			Animation
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLB
				AnimationMode			= ONCE
				AnimationPriority		= 20
			End

			Animation					= Taunting3
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLM
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
			Animation					= Taunting4
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLE
				AnimationMode			= ONCE
				AnimationPriority		= 5
			End
		End
	
	AnimationState = WEAPONSTATE_ONE	;Idle with club
			AllowRepeatInRandomPick	= Yes
			SimilarRestart			= Yes
		
			Animation = BreathWithClub
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLB
				AnimationMode = ONCE
				AnimationPriority = 30
				AnimationSpeedFactorRange = 0.8 1.0
			End
			Animation = BreathWithClub
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLA ; ; MuCavTroll_SKL.MuCavTroll_IDLB
				AnimationMode = ONCE
				AnimationPriority = 10
				AnimationSpeedFactorRange = 0.8 1.0
			End
			Animation = RoarAndThumpClub
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLE  
				AnimationMode = ONCE
				AnimationPriority = 6
				AnimationBlendTime = 3
			End
			Animation = ScratchButt
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLG  
				AnimationMode = ONCE
				AnimationPriority = 7
				AnimationBlendTime = 3
			End
			Animation = ScratchButt
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLK  
				AnimationMode = ONCE
				AnimationPriority = 10
				AnimationSpeedFactorRange = .74 .74 
				;AnimationBlendTime = 3
			End
		
			Flags = RESTART_ANIM_WHEN_COMPLETE
			BeginScript ; Here since normal Packing state can be skipped with a fast click.
				CurDrawableShowSubObjectPermanently("Trunk01")
			EndScript
		End


	;// --------- With Rock ------------

		;AnimationState = MOVING WEAPONSET_TOGGLE_1 ATTACKING
		;	Animation
		;		AnimationName = MuCavTroll_SKL.MuCavTroll_RUNA 
		;		AnimationMode = LOOP
		;		AnimationSpeedFactorRange = 0.77 0.77
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:5 FireWhenSkipped Name:FX_TrollRightFootStep
		;	FXEvent	= Frame:18 FireWhenSkipped Name:FX_TrollLeftFootStep

		;End


;		AnimationState = MOVING WEAPONSET_TOGGLE_1 DAMAGED
;			Animation
;				AnimationName = MuCavTroll_SKL.MuCavTroll_WLKB 
;				AnimationMode = LOOP
;				AnimationSpeedFactorRange = 1.3 1.3
;			End
;			Flags = RANDOMSTART
;			ParticleSysBone = None InfantryDustTrails
;			FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
;			FXEvent	= Frame:20 FireWhenSkipped Name:FX_TrollLeftFootStep
;		End

;		AnimationState = MOVING WEAPONSET_TOGGLE_1
;			Animation
;				AnimationName		= MuCavTroll_SKL.MuCavTroll_WLKD
;				AnimationMode		= LOOP
;				Distance			= 35
;			End
;			Flags = RANDOMSTART
;			ParticleSysBone = None InfantryDustTrails
;			FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
;			FXEvent	= Frame:16 FireWhenSkipped Name:FX_TrollLeftFootStep
;		End

;		AnimationState = FIRING_OR_PREATTACK_A USING_WEAPON_A
;			Animation
;				AnimationName = MuCavTroll_SKL.MuCavTroll_THRA
;				AnimationMode = ONCE
;				UseWeaponTiming = Yes
;				AnimationBlendTime = 0
;			End
;			FrameForPristineBonePositions = 16
;			StateName = Throw
;		End
		
	
		AnimationState = FIRING_OR_PREATTACK_A WEAPONSET_TOGGLE_1			; throw rock
			StateName = Throw
			Animation
				AnimationName		= MuCavTroll_SKL.MuCavTroll_THRA
				AnimationMode		= ONCE
				UseWeaponTiming		= Yes
			End
			LuaEvent = Frame:24 Data: hide_rock
			FrameForPristineBonePositions = 24
		End

		AnimationState = RELOADING_A WEAPONSET_TOGGLE_1						; Pickup rock.
			Animation
				AnimationName		= MuCavTroll_SKL.MuCavTroll_GRBE
				AnimationMode		= ONCE
			End
			FXEvent	= Frame:21	Name: FX_CaveTrollRockGrab
			FXEvent	= Frame:38	Name: FX_CaveTrollRockYank
			LuaEvent = Frame:37 Data: show_rock
		End

;		AnimationState = FIRING_OR_PREATTACK_B WEAPONSTATE_TWO
;			Animation
;				AnimationName = MuCavTroll_SKL.MuCavTroll_THRA
;				AnimationMode = ONCE
;				UseWeaponTiming = Yes
;				AnimationBlendTime = 0
;			End
;			FrameForPristineBonePositions = 21
;			StateName = Throw
;		End

;		AnimationState = PACKING WEAPONSTATE_TWO
;			Animation
;				AnimationName = MuCavTroll_SKL.MuCavTroll_GRBB
;				AnimationMode = ONCE
;			End
;			ParticleSysBone	= BAT_HANDR TrollRockBounceSmall FollowBone:no
;			ParticleSysBone	= BAT_HANDR TrollRockPickup FollowBone:no
;		End

		;//Building attack, which you can do with a rock in yo hand
		AnimationState = FIRING_OR_PREATTACK_B WEAPONSET_TOGGLE_1
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKJ
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
		End

		AnimationState = TURN_LEFT WEAPONSET_TOGGLE_1
			Animation = Moving
				AnimationName = MUCavTroll_SKL.MUCavTroll_TRNL
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails
		End

		AnimationState = TURN_RIGHT WEAPONSET_TOGGLE_1
			Animation = Moving
				AnimationName = MUCavTroll_SKL.MUCavTroll_TRNR
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails

		End

		AnimationState = MOVING WEAPONSET_TOGGLE_1
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_RUNA 
				AnimationMode = LOOP
				;AnimationSpeedFactorRange = 0.77 0.77
			End
			Flags = RANDOMSTART
			ParticleSysBone = None InfantryDustTrails
			FXEvent	= Frame:5 FireWhenSkipped Name:FX_TrollRightFootStep
			FXEvent	= Frame:18 FireWhenSkipped Name:FX_TrollLeftFootStep
		End

		;AnimationState = MOVING WEAPONSET_TOGGLE_1
		;	Animation
		;		AnimationName		= MuCavTroll_SKL.MuCavTroll_WLKD
		;		AnimationMode		= LOOP
		;		Distance			= 35
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
		;	FXEvent	= Frame:16 FireWhenSkipped Name:FX_TrollLeftFootStep
		;End

		;// --------- Click and Hit Reactions with Rock ------------			
		AnimationState = HIT_REACTION HIT_LEVEL_1 WEAPONSET_TOGGLE_1
			Animation = Hit_Level_1_a
				AnimationName = MuCavTroll_SKL.MuCavTroll_HITD
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION HIT_LEVEL_2 WEAPONSET_TOGGLE_1
			Animation = Hit_Level_2
				AnimationName = MuCavTroll_SKL.MuCavTroll_HITC
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION HIT_LEVEL_3 WEAPONSET_TOGGLE_1
			Animation = Hit_Level_3
				AnimationName = MuCavTroll_SKL.MuCavTroll_HITA
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_1 WEAPONSET_TOGGLE_1
			Animation = Click_React_1
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTA
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_2 WEAPONSET_TOGGLE_1
			Animation = Click_React_2
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTB
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_3 WEAPONSET_TOGGLE_1
			Animation = Click_React_3
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTC
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_4 WEAPONSET_TOGGLE_1
			Animation = Click_React_4
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTD
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_5 WEAPONSET_TOGGLE_1
			Animation = Click_React_5
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTE
				AnimationMode = ONCE
			End
		End
	    
		AnimationState = USER_2 WEAPONSET_TOGGLE_1
 			Animation = ReactToTrollPoke ; The two comes from the special TrollBored weapon
 				AnimationName = MuCavTroll_SKL.MuCavTroll_HITD
 				AnimationMode = ONCE
 			End
		End
	 
		AnimationState = SWAPPING_TO_WEAPONSET_1 WEAPONSET_TOGGLE_1			; toggling to rock throwing. This get's the unit into a nice
			Animation														; pose to blend from, rather than playing an idle for one frame.
				AnimationName	= MuCavTroll_SKL.MuCavTroll_GRBE
				AnimationMode	= MANUAL
			End
		End
	 
		AnimationState					= EMOTION_TAUNTING WEAPONSET_TOGGLE_1
			Animation
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLB
				AnimationMode			= ONCE
				AnimationPriority		= 20
			End
			Animation					= Taunting3
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLM
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
		End
			
		AnimationState = WEAPONSET_TOGGLE_1
			AllowRepeatInRandomPick			= Yes
			SimilarRestart					= Yes
		
			Animation = BreatheWithRock
				AnimationName				= MuCavTroll_SKL.MuCavTroll_IDLB
				AnimationMode				= ONCE
				AnimationPriority			= 10
				AnimationSpeedFactorRange	= 0.8 1.2
			End
;			Animation = ScratchButt
;				AnimationName				= MuCavTroll_SKL.MuCavTroll_IDLG  
;				AnimationMode				= ONCE
;				AnimationPriority			= 1
;			End
			Flags = RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableShowSubObjectPermanently("ROCK")
			EndScript			
		End



		;// --------- With Bare Hands ------------
		AnimationState = UNPACKING
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_GRBA
				AnimationMode = ONCE
			End
			FrameForPristineBonePositions = 14
		End

		AnimationState = TURN_LEFT
			Animation = Moving
				AnimationName = MuCavTroll_SKL.MuCavTroll_TRNL
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails
		End

		AnimationState = TURN_RIGHT
			Animation = Moving
				AnimationName = MuCavTroll_SKL.MuCavTroll_TRNR
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails
		End

		;AnimationState = MOVING ATTACKING
		;	Animation = Charging
		;		AnimationName = MuCavTroll_SKL.MuCavTroll_RUNB
		;		AnimationMode = LOOP
		;		AnimationSpeedFactorRange = 0.8 0.8
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;		FXEvent	= Frame:5 FireWhenSkipped Name:FX_TrollRightFootStep
		;		FXEvent	= Frame:18 FireWhenSkipped Name:FX_TrollLeftFootStep
		;End

		;// Normal fist attacks
		AnimationState = FIRING_OR_PREATTACK_A
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKA
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKE
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
		End

		;Building attack
		AnimationState = FIRING_OR_PREATTACK_B
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKJ
				AnimationMode = ONCE
				UseWeaponTiming		= Yes

			End
		End
			
		;Running attack
		;Running attack
		AnimationState = FIRING_OR_PREATTACK_C
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_ATKJ ; ; MuCavTroll_SKL.MuCavTroll_ATRB
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
		End
			
		AnimationState				= MOVING PANICKING
			Animation				= RUNM
				AnimationName		=  MuCavTroll_SKL.MuCavTroll_MFDA
				AnimationMode		= LOOP
			End
			Flags					= RANDOMSTART
		End
		
		;AnimationState = MOVING DAMAGED
		;	Animation = Moving_Damaged
		;		AnimationName = MuCavTroll_SKL.MuCavTroll_WLKB
		;		AnimationMode = LOOP
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
		;	FXEvent	= Frame:20 FireWhenSkipped Name:FX_TrollLeftFootStep
		;End

		;AnimationState = MOVING
		;	Animation = Moving
		;		AnimationName		= MuCavTroll_SKL.MuCavTroll_WLKB
		;		AnimationMode		= LOOP
		;		Distance			= 35
		;		AnimationBlendTime	= 10
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
		;	FXEvent	= Frame:20 FireWhenSkipped Name:FX_TrollLeftFootStep
		;End

		AnimationState = MOVING
			Animation = Charging
				AnimationName = MuCavTroll_SKL.MuCavTroll_RUNB
				AnimationMode = LOOP
				;AnimationSpeedFactorRange = 0.8 0.8
			End
			Flags = RANDOMSTART
			ParticleSysBone = None InfantryDustTrails
				FXEvent	= Frame:5 FireWhenSkipped Name:FX_TrollRightFootStep
				FXEvent	= Frame:18 FireWhenSkipped Name:FX_TrollLeftFootStep
		End

		AnimationState = ENGAGED
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_IDLA
				AnimationMode = LOOP
			End
		End
		
		;// --------- Just built ------------			
		AnimationState = JUST_BUILT
			Animation
				AnimationName = MuCavTroll_SKL.MuCavTroll_WLKD
				AnimationMode = ONCE
				AnimationBlendTime = 0
				AnimationSpeedFactorRange = 0.9 0.9			
			End	
		End	

		;// --------- Click and Hit Reactions ------------			
		AnimationState = HIT_REACTION HIT_LEVEL_1
			Animation = Hit_Level_1_a
				AnimationName = MuCavTroll_SKL.MuCavTroll_HITD
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION HIT_LEVEL_2
			Animation = Hit_Level_2
				AnimationName = MuCavTroll_SKL.MuCavTroll_HITC
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION HIT_LEVEL_3
			Animation = Hit_Level_3
				AnimationName = MuCavTroll_SKL.MuCavTroll_HITA
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_1
			Animation = Click_React_1
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTA
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_2
			Animation = Click_React_2
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTB
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_3
			Animation = Click_React_3
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTC
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_4
			Animation = Click_React_4
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTD
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_5
			Animation = Click_React_5
				AnimationName = MuCavTroll_SKL.MuCavTroll_RCTE
				AnimationMode = ONCE
			End
		End
	    
		AnimationState = USER_2
			Animation = ReactToTrollPoke ; The two comes from the special TrollBored weapon
				AnimationName = MuCavTroll_SKL.MuCavTroll_HITA
				AnimationMode = ONCE
			End
		End

		;//-----------------------------------
		;//Emotion
		AnimationState = EMOTION_CELEBRATING
			Animation
				AnimationName	=	MuCavTroll_SKL.MuCavTroll_IDLF
				AnimationMode	=	LOOP
			End
		End
		
		AnimationState					= EMOTION_TAUNTING
			Animation
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLB
				AnimationMode			= ONCE
				AnimationPriority		= 20
			End
			Animation					= Taunting3
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLM
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
		End
				
		
	End
