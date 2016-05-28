
	Draw = W3DScriptedModelDraw ModuleTag_01


		; Some conditions and their meaning:

		;
		;	WEAPONSTATE_ONE			using tree as club
		;	WEAPONSET_TOGGLE_1		rock throwing mode
		;	SPECIAL_WEAPON_ONE		hitting a friendly troll
		;	USER_2					set from MordorMtTrollBored weapon, used when hitting a friendly troll
		;	USER_3						"				"					"					"

		WadingParticleSys		= EntRipples
		OkToChangeModelColor	= Yes		  
		StaticModelLODMode		= Yes					; Will append M or L to the skin name depending on GameLOD
	    
	    ExtraPublicBone			= Trunk					; For the tree to attach to.


		DefaultModelConditionState
			Model				= MUMntTroll_SKN4
			WeaponLaunchBone	= PRIMARY Firepoint
		End
		
		RandomTexture = mumnttroll.tga 0 mumnttroll.tga
		RandomTexture = mumnttroll3.tga 0 mumnttroll.tga
		RandomTexture = mumnttroll4.tga 0 mumnttroll.tga

		IdleAnimationState
			StateName				= Idle
			AllowRepeatInRandomPick = Yes
			SimilarRestart			= Yes
			
			Animation = IDLA
				AnimationName		= MUMntTroll_SKL.MUMntTroll_IDLA  ;JUST BREATHING
				AnimationMode		= ONCE
				AnimationBlendTime	= 10
				AnimationPriority	= 40
			End
			Animation = IDLC
				AnimationName		= MUMntTroll_SKL.MUMntTroll_IDLC  ;BELLY SCRATCH
				AnimationMode		= ONCE
				AnimationBlendTime	= 10
				AnimationPriority	= 10
			End
			Animation = IDLF
				AnimationName		= MUMntTroll_SKL.MUMntTroll_IDLF  ;BIG ROAR
				AnimationMode		= ONCE
				AnimationBlendTime	= 10
				AnimationPriority	= 7 ; ; 3
			End
			Animation = IDLH
				AnimationName		= MUMntTroll_SKL.MUMntTroll_IDLH  ;SHORT ROAR
				AnimationMode		= ONCE
				AnimationBlendTime	= 10
				AnimationPriority	= 10
			End
			Animation = IDLI
				AnimationName		= MUMntTroll_SKL.MUMntTroll_IDLI  ;NOSE WIPE
				AnimationMode		= ONCE
				AnimationBlendTime	= 10
				AnimationPriority	= 10
			End
			Flags					= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableHideSubObjectPermanently("ROCK")
			EndScript
		End

		; Splatted death goes first, independant of death flags
		ModelConditionState = DYING DECAY SPLATTED
			Model				= MUMntTroll_DISC
			RetainSubObjects	= Yes
		End;

		AnimationState = DYING DECAY SPLATTED 
			Animation = dead1
				AnimationName	= MUMntTroll_DISC.MUMntTroll_DISC
				AnimationMode	= ONCE
			End
		End

		ModelConditionState = DYING DECAY DEATH_1
			Model				= MUMntTroll_DISA
			RetainSubObjects	= Yes
		End

		AnimationState = DYING DECAY DEATH_1 
			Animation = dead1
				AnimationName	= MUMntTroll_DISA.MUMntTroll_DISA
				AnimationMode	= ONCE
			End
		End

		ModelConditionState = DYING DECAY DEATH_2
			Model				= MUMntTroll_DISB
			RetainSubObjects	= Yes
		End

		AnimationState = DYING DECAY DEATH_2 
			Animation = dead1
				AnimationName	= MUMntTroll_DISB.MUMntTroll_DISB
				AnimationMode	= ONCE
			End
		End

		AnimationState			= CHANT_FOR_GROND	; used for cine shot in-game.
			Animation			= playingDrums
				AnimationName	= MUMntTroll_SKL.MUMntTroll_DRMA
				AnimationMode	= ONCE
			End
		End

; Flailing must go before dying in case we are dead in the air
		AnimationState = STUNNED_FLAILING
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_FLYA
				AnimationMode = LOOP
			End
		End

		AnimationState = DYING DEATH_3
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLA
				AnimationMode = LOOP
			End
		End
		AnimationState = DYING SPLATTED
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_LNDA
				AnimationMode = ONCE
			End
		End


		AnimationState = DYING DEATH_1
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_DIEA
				AnimationMode = ONCE
			End

			ParticleSysBone = B_PELVIS TrollSplatDust
			ParticleSysBone = BAT_HEAD TrollSplatDust
		End

		AnimationState = DYING DEATH_2
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_DIEB
				AnimationMode = ONCE
			End

			ParticleSysBone = BAT_SPINE1 TrollSplatDust1
			ParticleSysBone = BAT_HEAD TrollSplatDust1
		End

		ModelConditionState = DYING
			Model				= MUMntTroll_SKN			
		End

		AnimationState = DYING
			Animation
				AnimationName     =  MUMntTroll_SKL.MUMntTroll_DIEB
				AnimationMode     = ONCE
			End
		End

		//Stoned!
		ModelConditionState = STONED 
			Model			= MUMntTroll_SKN
			Texture			= MUMntTroll.tga MUMntTroll_R.tga
		End 			

		AnimationState		= STONED
			Animation			= Stoned
				AnimationName		= MUMntTroll_SKL.MUMntTroll_MFDA
				AnimationMode		= MANUAL
				AnimationBlendTime	= 40
			End
			Flags	= RANDOMSTART 
		End
		
		AnimationState = EATING
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_EATA
				AnimationMode = ONCE
			End
		End
	
; Flailing must go before dying in case we are dead in the air
		AnimationState = STUNNED_FLAILING
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_FLYA
				AnimationMode = LOOP
			End
		End

		AnimationState				= STUNNED_STANDING_UP
			Animation				= MUMntTroll_GTPA
				AnimationName		= MUMntTroll_SKL.MUMntTroll_GTPA
				AnimationMode		= ONCE

			End
		End	

		AnimationState				= STUNNED
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_LNDA
				AnimationMode = ONCE
			End
			ParticleSysBone = B_PELVIS TrollSplatDust2
			ParticleSysBone = BAT_HEAD TrollSplatDust2
		End


		AnimationState						= PARALYZED
			Animation
				AnimationName				= MUMntTroll_SKL.MUMntTroll_IDLA
				AnimationMode				= LOOP
			End
		End


		; --------- Just built ---------------------------------------------------------------------------------------------
	
		AnimationState = JUST_BUILT
			Animation
				AnimationName				= MUMntTroll_SKL.MUMntTroll_WLKC ; temp
				AnimationMode				= ONCE
				AnimationBlendTime			= 0
				AnimationSpeedFactorRange	= 0.9 0.9			
			End
			LuaEvent = Frame:1 Data: show_rock
			FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
			FXEvent	= Frame:16 FireWhenSkipped Name:FX_TrollLeftFootStep
			FXEvent	= Frame:30 FireWhenSkipped Name:FX_TrollRightFootStep
			FXEvent	= Frame:44 FireWhenSkipped Name:FX_TrollLeftFootStep
		End	

		;---bop our friends on the head 
		AnimationState = SPECIAL_WEAPON_ONE
			Animation = Punch
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKH
				AnimationMode = ONCE
			End
			Animation = Backhand
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKI
				AnimationMode = ONCE
			End			
		End
			
		;---drop a tree
		AnimationState = SPECIAL_WEAPON_TWO
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLE
				AnimationMode = ONCE
			End
		End
			

		;--Troll is angry
		AnimationState = WEAPONSET_RAMPAGE
			Animation = GetMad
				AnimationName = MUMntTroll_SKL.MUMntTroll_RPGC
				AnimationMode = LOOP
			End
		End

    ; --------- With Club ------------

		AnimationState = FIRING_OR_PREATTACK_A WEAPONSTATE_ONE
;			Animation
;				; Taking this one out since it doesn't work with the logic of the attack, which is a 180 knockback (this one is vertical clubbing, could be used as anti-monster anim, not anti bunch of inf)
;				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKB
;			End
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKC
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
				AnimationPriority   = 25
			End
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKD
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
				AnimationPriority   = 25
			End
	
	

		End

		;Running attack
		AnimationState = FIRING_OR_PREATTACK_B WEAPONSTATE_ONE
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKF ; ; MUMntTroll_SKL.MUMntTroll_ATRA
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
		End
			
		AnimationState = TURN_LEFT WEAPONSTATE_ONE
			Animation = Moving
				AnimationName = MUMntTroll_SKL.MUMntTroll_TRNL
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
				AnimationName = MUMntTroll_SKL.MUMntTroll_TRNR
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails
			BeginScript ; Here since normal Packing state can be skipped with a fast click.
				CurDrawableShowSubObjectPermanently("Trunk01")
			EndScript
		End

		AnimationState = MOVING WEAPONSTATE_ONE			; ATTACKING
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_RUNA  ; Running with club
				AnimationMode = LOOP
				;AnimationSpeedFactorRange = 0.77 0.77
			End
			Flags               = RANDOMSTART
			ParticleSysBone     = None InfantryDustTrails
			FXEvent	= Frame:5 FireWhenSkipped Name:FX_TrollRightFootStep
			FXEvent	= Frame:17 FireWhenSkipped Name:FX_TrollLeftFootStep
		End

		;AnimationState = MOVING WEAPONSTATE_ONE DAMAGED
		;	Animation
		;		AnimationName = MUMntTroll_SKL.MUMntTroll_WLKB ; Walking with club
		;		AnimationMode = LOOP
		;		AnimationSpeedFactorRange = 1.3 1.3
		;	End
		;	Flags               = RANDOMSTART
		;	ParticleSysBone     = None InfantryDustTrails
		;	FXEvent	= Frame:22 FireWhenSkipped Name:FX_TrollLeftFootStep
		;	FXEvent	= Frame:45 FireWhenSkipped Name:FX_TrollRightFootStep
		;End

		;AnimationState = MOVING WEAPONSTATE_ONE
		;	Animation
		;		AnimationName = MUMntTroll_SKL.MUMntTroll_WLKB ; Walking with club 
		;		AnimationMode = LOOP
		;		AnimationSpeedFactorRange = 1.36 1.36
		;	End
      	;	Flags               = RANDOMSTART
      	;	ParticleSysBone     = None InfantryDustTrails
		;	FXEvent	= Frame:22 FireWhenSkipped Name:FX_TrollLeftFootStep
		;	FXEvent	= Frame:45 FireWhenSkipped Name:FX_TrollRightFootStep	
		;
		;	BeginScript ; Here since normal Packing state can be skipped with a fast click.
		;		CurDrawableShowSubObjectPermanently("Trunk01")
		;	EndScript
		;End

		AnimationState = PREPARING									; Smash contained object on ground to remove leaves. note, WEAPONSTATE_ONE has 
			Animation												; not yet been set yet, so assume it's a tree.
				AnimationName = MUMntTroll_SKL.MUMntTroll_GRBC
				AnimationMode = ONCE
			End
		End

		AnimationState = PACKING WEAPONSTATE_ONE
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_GRBD
				AnimationMode = ONCE
			End
			BeginScript
				CurDrawableShowSubObjectPermanently("Trunk01")
			EndScript
		End

		AnimationState = EMOTION_CELEBRATING WEAPONSTATE_ONE
			Animation
				AnimationName	=	MUMntTroll_SKL.MUMntTroll_IDLF
				AnimationMode	=	LOOP
			End
		End

		AnimationState = USER_2 WEAPONSTATE_ONE
			Animation = ReactToTrollPoke ; The two comes from the special TrollBored weapon
				AnimationName = MUMntTroll_SKL.MUMntTroll_HITE
				AnimationMode = ONCE
			End
		End

		AnimationState = USER_3 WEAPONSTATE_ONE
			Animation = ExpectAnotherPoke ; The three comes from the special TrollBored weapon, and lasts longer than 2
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLJ
				AnimationMode = LOOP
			End
		End

		AnimationState					= EMOTION_TAUNTING WEAPONSTATE_ONE
			Animation
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLB

				AnimationMode			= ONCE
				AnimationPriority		= 20
			End
			Animation					= Taunting3
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLH
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
			AllowRepeatInRandomPick = Yes
			SimilarRestart			= Yes
		
			Animation = BreathWithClub
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLB
				AnimationMode = ONCE
				AnimationPriority = 30
				AnimationSpeedFactorRange = 0.8 1.0
			End
			Animation = BreathWithClub
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLB
				AnimationMode = ONCE
				AnimationPriority = 30
				AnimationSpeedFactorRange = 0.8 1.0
			End
			Animation = IDLE
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLE  ;ROAR THEN HIT GROUND (holding club only)
				AnimationMode = ONCE
				AnimationBlendTime = 10
				AnimationPriority = 5
			End
			Animation = IDLG
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLG  ;BUTT SCRATCH THEN BURP
				AnimationMode = ONCE
				AnimationBlendTime = 10
				AnimationPriority = 10
			End
			Flags = RESTART_ANIM_WHEN_COMPLETE
			BeginScript ; Here since normal Packing state can be skipped with a fast click.
				CurDrawableShowSubObjectPermanently("Trunk01")
			EndScript
		End

		; --------- With rock or infantry ----------------------------------------------------------------------------------

		;AnimationState = MOVING WEAPONSET_TOGGLE_1		; ATTACKING
		;	Animation
		;		AnimationName = MUMntTroll_SKL.MUMntTroll_RUNA 
		;		AnimationMode = LOOP
		;		;AnimationSpeedFactorRange = 0.77 0.77
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:5 FireWhenSkipped Name:FX_TrollRightFootStep
		;	FXEvent	= Frame:17 FireWhenSkipped Name:FX_TrollLeftFootStep
		;End

		;AnimationState = MOVING WEAPONSET_TOGGLE_1 DAMAGED
		;	Animation
		;		AnimationName = MUMntTroll_SKL.MUMntTroll_WLKB 
		;		AnimationMode = LOOP
		;		AnimationSpeedFactorRange = 1.3 1.3
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:22 FireWhenSkipped Name:FX_TrollLeftFootStep
		;	FXEvent	= Frame:45 FireWhenSkipped Name:FX_TrollRightFootStep
		;End

		;AnimationState = MOVING WEAPONSET_TOGGLE_1
		;	Animation
		;		AnimationName = MUMntTroll_SKL.MUMntTroll_WLKB 
		;		AnimationMode = LOOP

		;		AnimationSpeedFactorRange = 1.36 1.36
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:22 FireWhenSkipped Name:FX_TrollLeftFootStep
		;	FXEvent	= Frame:45 FireWhenSkipped Name:FX_TrollRightFootStep
		;End

;		AnimationState = FIRING_OR_PREATTACK_A USING_WEAPON_A
;			Animation
;				AnimationName		= MUMntTroll_SKL.MUMntTroll_THRW
;				AnimationMode		= ONCE
;				AnimationBlendTime	= 0
;				UseWeaponTiming		= Yes
;			End
;			FrameForPristineBonePositions = 16
;			StateName = Throw
;		End
	
		AnimationState = FIRING_OR_PREATTACK_A WEAPONSET_TOGGLE_1			; Throw rock.
			StateName = Throw
			Animation
				AnimationName		= MUMntTroll_SKL.MUMntTroll_THRA
				AnimationMode		= ONCE
;				AnimationBlendTime	= 0
				UseWeaponTiming		= Yes
			End
			LuaEvent = Frame:23 Data: hide_rock
			FrameForPristineBonePositions = 23
		End
		
		AnimationState = RELOADING_A WEAPONSET_TOGGLE_1						; Pickup rock.
			StateName = STATE_Reload
			Animation
				AnimationName		= MUMntTroll_SKL.MUMntTroll_GRBE ;MUMntTroll_SKL.MUMntTroll_GRBB
				AnimationMode		= ONCE
			End		
			LuaEvent = Frame:35 Data: show_rock
;			BeginScript
;				Prev = CurDrawablePrevAnimationState()
;				if Prev ~= "STATE_Reload" and Prev ~= "TRANS_SnatchRock"
;					then CurDrawableSetTransitionAnimState("TRANS_SnatchRock") end
;			EndScript
		End
		
;		TransitionState = TRANS_SnatchRock
;			Animation
;				AnimationName = MUMntTroll_SKL.MUMntTroll_GRBE
;				AnimationMode = ONCE
;			End
;		End
	
;		AnimationState = FIRING_OR_PREATTACK_B WEAPONSTATE_TWO
;			Animation
;				AnimationName		= MUMntTroll_SKL.MUMntTroll_THRW
;				AnimationMode		= ONCE
;				AnimationBlendTime	= 0
;				UseWeaponTiming		= Yes
;			End
;			FrameForPristineBonePositions = 21
;			StateName = Throw
;		End

;		AnimationState = PACKING WEAPONSTATE_TWO
;			Animation
;				AnimationName = MUMntTroll_SKL.MUMntTroll_GRBB
;				AnimationMode = ONCE
;			End
;			ParticleSysBone	= BAT_HANDR TrollRockBounceSmall FollowBone:no
;			ParticleSysBone	= BAT_HANDR TrollRockPickup FollowBone:no
;		End

		;Building attack, which you can do with a rock in yo hand
		AnimationState = FIRING_OR_PREATTACK_C WEAPONSET_TOGGLE_1
			Animation
				AnimationName	= MUMntTroll_SKL.MUMntTroll_ATKF
				AnimationMode	= ONCE
				UseWeaponTiming	= Yes
			End
		End

		AnimationState = TURN_LEFT WEAPONSET_TOGGLE_1
			Animation = Moving
				AnimationName = MUMntTroll_SKL.MUMntTroll_TRNL
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails
		End

		AnimationState = TURN_RIGHT WEAPONSET_TOGGLE_1
			Animation = Moving
				AnimationName = MUMntTroll_SKL.MUMntTroll_TRNR
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails
		End

		AnimationState = MOVING WEAPONSET_TOGGLE_1
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_RUNA 
				AnimationMode = LOOP
				;AnimationSpeedFactorRange = 0.77 0.77
			End
			Flags = RANDOMSTART
			ParticleSysBone = None InfantryDustTrails
			FXEvent	= Frame:5 FireWhenSkipped Name:FX_TrollRightFootStep
			FXEvent	= Frame:17 FireWhenSkipped Name:FX_TrollLeftFootStep
		End
		
		; --------- Click and Hit Reactions with Rock ----------------------------------------------------------------------------------
		
		AnimationState = HIT_REACTION HIT_LEVEL_1 WEAPONSET_TOGGLE_1
			Animation = Hit_Level_1_a
				AnimationName = MUMntTroll_SKL.MUMntTroll_HITC
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION HIT_LEVEL_2 WEAPONSET_TOGGLE_1
			Animation = Hit_Level_2
				AnimationName = MUMntTroll_SKL.MUMntTroll_HITB
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION HIT_LEVEL_3 WEAPONSET_TOGGLE_1
			Animation = Hit_Level_3
				AnimationName = MUMntTroll_SKL.MUMntTroll_HITA
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_1 WEAPONSET_TOGGLE_1
			Animation = Click_React_1
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTA
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_2 WEAPONSET_TOGGLE_1
			Animation = Click_React_2
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTB
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_3 WEAPONSET_TOGGLE_1
			Animation = Click_React_3
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTC
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_4 WEAPONSET_TOGGLE_1
			Animation = Click_React_4
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTD
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_5 WEAPONSET_TOGGLE_1
			Animation = Click_React_5
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTE
				AnimationMode = ONCE
			End
		End
	    
		AnimationState = USER_2 WEAPONSET_TOGGLE_1
			Animation = ReactToTrollPoke ; The two comes from the special TrollBored weapon
				AnimationName = MUMntTroll_SKL.MUMntTroll_HITE
				AnimationMode = ONCE
			End
		End

		AnimationState = USER_3 WEAPONSET_TOGGLE_1
			Animation = ExpectAnotherPoke ; The three comes from the special TrollBored weapon, and lasts longer than 2
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLJ
				AnimationMode = LOOP
			End
		End

		AnimationState = SWAPPING_TO_WEAPONSET_1 WEAPONSET_TOGGLE_1			; toggling to rock throwing. This get's the unit into a nice
			Animation														; pose to blend from, rather than playing an idle for one frame.
				AnimationName	= MUMntTroll_SKL.MUMntTroll_GRBE
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
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLH
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
		End
	
		AnimationState = WEAPONSET_TOGGLE_1												; Rock throwing
			AllowRepeatInRandomPick = Yes
			SimilarRestart			= Yes
			Animation
				AnimationName				= MUMntTroll_SKL.MUMntTroll_IDLB			; sway
				AnimationMode				= ONCE
				AnimationPriority			= 10
				AnimationSpeedFactorRange	= 0.8 1.0
			End
;			Animation
;				AnimationName				= MUMntTroll_SKL.MUMntTroll_IDLE			; roar and pummel ground
;				AnimationMode				= ONCE
;				AnimationPriority			= 1
;				AnimationSpeedFactorRange	= 0.8 1.0
;			End
			Flags = RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableShowSubObjectPermanently("ROCK")
			EndScript
		End



		
		;// --------- With Bare Hands ------------

		AnimationState = UNPACKING									; Reach for a tree.
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_GRBA
				AnimationMode = ONCE
			End
		End

		AnimationState = TURN_LEFT
			Animation = Moving
				AnimationName = MUMntTroll_SKL.MUMntTroll_TRNL
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails
		End

		AnimationState = TURN_RIGHT
			Animation = Moving
				AnimationName = MUMntTroll_SKL.MUMntTroll_TRNR
				AnimationMode = LOOP
				AnimationBlendTime = 10
			End
			ParticleSysBone = None InfantryDustTrails
		End

		;AnimationState = MOVING ATTACKING
		;	Animation = Charging
		;		AnimationName = MUMntTroll_SKL.MUMntTroll_RUNB
		;		AnimationMode = LOOP
		;		AnimationSpeedFactorRange = 0.8 0.8
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:6 FireWhenSkipped Name:FX_TrollRightFootStep
		;	FXEvent	= Frame:17 FireWhenSkipped Name:FX_TrollLeftFootStep
		;End



		; Normal fist attacks
		AnimationState = FIRING_OR_PREATTACK_A
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKA
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKE
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKG
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
		End

		;Building attack
		AnimationState = FIRING_OR_PREATTACK_B
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKF
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
		End

		;Running attack
		AnimationState = FIRING_OR_PREATTACK_C
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_ATRB
				AnimationMode = ONCE
				UseWeaponTiming		= Yes
			End
		End
			
		AnimationState				= MOVING PANICKING
			Animation				= RUNM
				AnimationName		=  MUMntTroll_SKL.MUMntTroll_MFDA
				AnimationMode		= LOOP
			End
			Flags					= RANDOMSTART
		End
		
		;AnimationState = MOVING DAMAGED
		;	Animation = Moving_Damaged
		;		AnimationName = MUMntTroll_SKL.MUMntTroll_WLKA
		;		AnimationMode = LOOP
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
		;	FXEvent	= Frame:16 FireWhenSkipped Name:FX_TrollLeftFootStep
		;End

		;AnimationState = MOVING
		;	Animation = Moving
		;		AnimationName		= MUMntTroll_SKL.MUMntTroll_WLKA
		;		AnimationMode		= LOOP
		;		AnimationBlendTime	= 10
		;	End
		;	Flags = RANDOMSTART
		;	ParticleSysBone = None InfantryDustTrails
		;	FXEvent	= Frame:16 FireWhenSkipped Name:FX_TrollLeftFootStep
		;	FXEvent	= Frame:0 FireWhenSkipped Name:FX_TrollRightFootStep
		;End

		AnimationState = MOVING
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_RUNB
				AnimationMode = LOOP
				;AnimationSpeedFactorRange = 0.8 0.8
			End
			Flags = RANDOMSTART
			ParticleSysBone = None InfantryDustTrails
			FXEvent	= Frame:6 FireWhenSkipped Name:FX_TrollRightFootStep
			FXEvent	= Frame:17 FireWhenSkipped Name:FX_TrollLeftFootStep
		End

		AnimationState = ENGAGED
			Animation
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLA
				AnimationMode = LOOP
			End
			;BeginScript
			;	Prev = CurDrawablePrevAnimationState()
			;	if Prev == "Throw"	then CurDrawableSetTransitionAnimState("Trans_Throwing_To_Ready") return end	
			;EndScript
		End
	
;		AnimationState = DESTROYED_WEAPON    this is no longer coded
;			Animation
;				AnimationName = MUMntTroll_SKL.MUMntTroll_ATKA
;				AnimationMode = ONCE
;			End
;		End
		
		; --------- Click and Hit Reactions ----------------------------------------------------------------------------------
		
		AnimationState = HIT_REACTION HIT_LEVEL_1
			Animation = Hit_Level_1_a
				AnimationName = MUMntTroll_SKL.MUMntTroll_HITC
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION HIT_LEVEL_2
			Animation = Hit_Level_2
				AnimationName = MUMntTroll_SKL.MUMntTroll_HITB
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION HIT_LEVEL_3
			Animation = Hit_Level_3
				AnimationName = MUMntTroll_SKL.MUMntTroll_HITA
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_1
			Animation = Click_React_1
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTA
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_2
			Animation = Click_React_2
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTB
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_3
			Animation = Click_React_3
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTC
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_4
			Animation = Click_React_4
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTD
				AnimationMode = ONCE
			End
		End

		AnimationState = REACT_5
			Animation = Click_React_5
				AnimationName = MUMntTroll_SKL.MUMntTroll_RCTE

				AnimationMode = ONCE
			End
		End
	    
		AnimationState = USER_2
			Animation = ReactToTrollPoke ; The two comes from the special TrollBored weapon
				AnimationName = MUMntTroll_SKL.MUMntTroll_HITE
				AnimationMode = ONCE
			End
		End

		AnimationState = USER_3 
			Animation = ExpectAnotherPoke ; The three comes from the special TrollBored weapon, and lasts longer than 2
				AnimationName = MUMntTroll_SKL.MUMntTroll_IDLJ
				AnimationMode = LOOP
			End
		End

		;--------------------------------------------------------------------------------------------------------------------------------------------
		;Emotions

		AnimationState = EMOTION_CELEBRATING
			Animation
				AnimationName	=	MUMntTroll_SKL.MUMntTroll_IDLF
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
				AnimationName			= MUMntTroll_SKL.MUMntTroll_IDLH
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
		End

	End	; draw
	
	Draw = W3DScriptedModelDraw DustEffects
	    DefaultModelConditionState
	      Model = None
	    End
	    IdleAnimationState
	    End
	    AnimationState =  MOVING WADING
			ParticleSysBone = None FootstepSlash
	    End
	    AnimationState = MOVING ACCELERATE
			ParticleSysBone = None GenericSiegeTrailDust
	    End
	    AnimationState =  MOVING ACCELERATE
			ParticleSysBone = None GenericSiegeTrailDust
	    End
	    AnimationState = MOUNTED MOVING
	    End
	End
	
	