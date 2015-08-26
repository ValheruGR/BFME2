
	Draw = W3DScriptedModelDraw ModuleTag_01
	  
		OkToChangeModelColor = Yes
	  
		StaticModelLODMode = yes ; Will append M or L to the skin name depending on GameLOD

		RandomTexture	= GUHbtShfA.tga	0 GUHbtShfA.tga
		RandomTexture	= GUHbtShfB.tga	0 GUHbtShfA.tga
		RandomTexture	= GUHbtShfC.tga	0 GUHbtShfA.tga
		RandomTexture	= GUHbtShfD.tga	0 GUHbtShfA.tga
		RandomTexture	= GUHbtShfE.tga	0 GUHbtShfA.tga
		RandomTexture	= GUHbtShfF.tga	0 GUHbtShfA.tga
		RandomTexture	= GUHbtShfG.tga	0 GUHbtShfA.tga
		RandomTexture	= GUHbtShfH.tga	0 GUHbtShfA.tga

		DefaultModelConditionState
			Model               = hobshov_skn ; ; GUHbtShfA_SKN
			Skeleton            = GUHbtShf_SKL
			WeaponLaunchBone    = PRIMARY B_HANDR		;sometimes it's in primary sometimes in secondary.
			WeaponLaunchBone    = SECONDARY B_HANDR
		End
        		
;;--------------- DYING & FLYING --------------------------------------------------
;;======= DYING

		AnimationState					= STUNNED_FLAILING WEAPONSET_TOGGLE_1
			StateName					= STATE_Bored_Rocks
			Animation					= FLYA
				AnimationName			= GUHbtShfB_FLYA
				AnimationMode			= LOOP
				AnimationBlendTime		= 0
				AnimationSpeedFactorRange	= 0.4 0.6
			End
			Flags						= RANDOMSTART
		End
		AnimationState					= STUNNED_FLAILING 
			StateName					= STATE_Bored_Sword
			Animation					= FLYA
				AnimationName			= GUHbtShfS_FLYA
				AnimationMode			= LOOP
				AnimationBlendTime		= 0
				AnimationSpeedFactorRange	= 0.4 0.6
			End
			Flags						= RANDOMSTART
		End
		
		AnimationState					= PASSENGER FREEFALL 
			Animation
				AnimationName			= GUHbtShfB_FLLA
				AnimationMode			= LOOP
			End
		End

		AnimationState						= DYING DEATH_2 WEAPONSET_TOGGLE_1
			Animation
				AnimationName				= GUHbtShfB_IDLB
				AnimationMode				= LOOP
			End
		End
		AnimationState						= DYING DEATH_2 
			Animation
				AnimationName				= GUHbtShfS_IDLB
				AnimationMode				= LOOP
			End
		End

		AnimationState					= DYING BURNINGDEATH
			Animation
				AnimationName			= GUHbtShfB_DIEA
				AnimationMode			= ONCE
				AnimationBlendTime		= 10
			End
			Animation
				AnimationName			= GUHbtShfB_DIEB
				AnimationMode			= ONCE
				AnimationBlendTime		= 10
			End
			Animation
				AnimationName			= GUHbtShfB_DIEC
				AnimationMode			= ONCE
				AnimationBlendTime		= 10
			End
		End
		
		AnimationState					= DYING SPLATTED WEAPONSET_TOGGLE_1
			Animation					= LNDA
				AnimationName			= GUHbtShfB_LNDA
				AnimationMode			= ONCE
			End
		End
		AnimationState					= DYING SPLATTED
			Animation
				AnimationName			= GUHbtShfS_LNDA
				AnimationMode			= ONCE
			End
		End
		AnimationState					= DYING WEAPONSET_TOGGLE_1
			StateName					= STATE_Bored_Rocks
			Animation					= DIEA
				AnimationName			= GUHbtShfB_DIEA
				AnimationMode			= ONCE
			End
			Animation					= DIEA
				AnimationName			= GUHbtShfB_DIEB
				AnimationMode			= ONCE
			End
			Animation					= DIEA
				AnimationName			= GUHbtShfB_DIEC
				AnimationMode			= ONCE
			End
		End

		AnimationState					= DYING
			Animation
				AnimationName			= GUHbtShfS_DIEA
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfS_DIEB
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfS_DIEC

				AnimationMode			= ONCE
			End
		End

		AnimationState						= BURNINGDEATH
			Animation
				AnimationName				= GUHbtShfB_MFDA
				AnimationMode				= LOOP
				Distance					= 80
			End
		End

		AnimationState						= PARALYZED WEAPONSET_TOGGLE_1
			Animation
				AnimationName				= GUHbtShfB_IDLB
				AnimationMode				= LOOP
			End
		End
		AnimationState						= PARALYZED
			Animation
				AnimationName				= GUHbtShfS_IDLB
				AnimationMode				= LOOP
			End
		End

;;======= STUNNED

		AnimationState					= STUNNED_STANDING_UP WEAPONSET_TOGGLE_1
			StateName					= STATE_Ready_Rocks
			Animation					= GTPA
				AnimationName			= GUHbtShfB_GTPA
				AnimationMode			= ONCE
				AnimationSpeedFactorRange = 1.5 1.5
			End
		End
		AnimationState					= STUNNED_STANDING_UP
			StateName					= STATE_Ready_Sword
			Animation
				AnimationName			= GUHbtShfS_GTPA
				AnimationMode			= ONCE
				AnimationSpeedFactorRange = 1.5 1.5
			End
		End		
		
		AnimationState					= STUNNED WEAPONSET_TOGGLE_1
			StateName					= STATE_Bored_Rocks
			Animation					= LNDA
				AnimationName			= GUHbtShfB_LNDA
				AnimationMode			= ONCE
			End
		End
		AnimationState					= STUNNED
			StateName					= STATE_Bored_Sword
			Animation					= LNDA
				AnimationName			= GUHbtShfS_LNDA
				AnimationMode			= ONCE
			End
		End
		
		

;;---------------- ATTAFIRING_OR_RELOADING_ACKING -----------------------------------------------------------------

		
		AnimationState        = MOVING FIRING_OR_PREATTACK_A
			ShareAnimation		= Yes
			Animation
				AnimationName       = GUHbtShfS_RUNC
				AnimationMode       = ONCE
			End
			Animation
				AnimationName       = GUHbtShfS_RUND
				AnimationMode       = ONCE
			End
			Flags               = RESTART_ANIM_WHEN_COMPLETE
		End
		
		AnimationState			= MOVING EMOTION_TERROR WEAPONSET_TOGGLE_1
			Animation
				AnimationName			= GUHbtShfB_RUNC
				AnimationMode			= LOOP
			End
		End
		AnimationState			= MOVING EMOTION_TERROR
			Animation
				AnimationName			= GUHbtShfS_RUNE
				AnimationMode			= LOOP
			End
		End
		
		
		AnimationState					= BETWEEN_FIRING_SHOTS_A WEAPONSET_TOGGLE_1
			StateName					= STATE_Ready_Rocks
			Animation					= IDLA
				AnimationName			= GUHbtShfB_IDLA
				AnimationMode			= LOOP
				AnimationBlendTime		= 20
			End
			BeginScript
				CurDrawableAllowToContinue()
			EndScript
		End
		

		AnimationState					= BETWEEN_FIRING_SHOTS_A
			StateName					= STATE_Ready_Sword
			Animation					= IDLB
				AnimationName			= GUHbtShfS_IDLA
				AnimationMode			= LOOP
				AnimationBlendTime		= 10
			End
			BeginScript
				CurDrawableAllowToContinue()
			EndScript
		End
		


		AnimationState					= FIRING_OR_PREATTACK_A WEAPONSET_TOGGLE_1
			StateName					= STATE_Ready_Rocks
			Animation					= THRA
				AnimationName			= GUHbtShfB_ATKA
				AnimationMode			= ONCE
				UseWeaponTiming			= Yes
			End
			FrameForPristineBonePositions = 21
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Ready_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Attention_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Running_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
			EndScript
		End
		
		AnimationState					= FIRING_OR_PREATTACK_A
			StateName					= STATE_Ready_Sword
			Animation					= ATKA
				AnimationName			= GUHbtShfS_ATKA
				AnimationMode			= ONCE
				UseWeaponTiming			= Yes
				AnimationBlendTime		= 10
			End
			Animation					= ATKB
				AnimationName			= GUHbtShfS_ATKB
				AnimationMode			= ONCE
				UseWeaponTiming			= Yes
				AnimationBlendTime		= 10
			End
			Animation					= ATKB
				AnimationName			= GUHbtShfS_ATKB
				AnimationMode			= ONCE
				UseWeaponTiming			= Yes
				AnimationBlendTime		= 10
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Ready_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Attention_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Running_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
			EndScript
		End

;;--------------------- MOVING ---------------------------------------------------------------------
;;======= MOVING

		AnimationState					= MOVING WEAPONSET_TOGGLE_1
			StateName					= STATE_Running_Rocks
			Animation					= RUNA
				AnimationName			= GUHbtShfB_RUNA
				AnimationMode			= ONCE
			End
			Animation					= RUNA
				AnimationName			= GUHbtShfB_RUNB
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Running_Sword" then CurDrawableSetTransitionAnimState("TRANS_Running_SwordToRocks") end
			EndScript
		End

		AnimationState					= MOVING ATTACKING
			StateName					= STATE_Running_Sword
			Animation					= RUNA
				AnimationName			= GUHbtShfS_RUNC
				AnimationMode			= ONCE
			End
			Animation					= RUNA
				AnimationName			= GUHbtShfS_RUND
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Running_Rocks" then CurDrawableSetTransitionAnimState("TRANS_Running_RocksToSword") end
			EndScript
		End
		
		AnimationState					= MOVING BACKING_UP WEAPONSET_TOGGLE_1
			StateName					= STATE_Running_Rocks
			Animation
				AnimationName			= GUHbtShfB_BAKA
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfB_BAKB
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
		End

		AnimationState					= MOVING BACKING_UP 
			StateName					= STATE_Running_Sword
			Animation
				AnimationName			= GUHbtShfS_BAKA
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfS_BAKB
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
		End

		AnimationState					= MOVING 
			StateName					= STATE_Running_Sword
			Animation					= RUNA
				AnimationName			= GUHbtShfS_RUNB
				AnimationMode			= LOOP
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Running_Sword" then CurDrawableSetTransitionAnimState("TRANS_Running_RocksToSword") end
			EndScript
		End

;;---------------------- HIT REACTIONS ----------------------------------------------------------

;		AnimationState					= HIT_REACTION WEAPONSET_TOGGLE_1
;			Animation           

;				AnimationName			= GUHbtShfB_HITA
;				AnimationMode			= ONCE
;			End
;		End
;		AnimationState					= HIT_REACTION
;			Animation           
;				AnimationName			= GUHbtShfS_HITA
;				AnimationMode			= ONCE
;			End
;		End

;;---------------------- EMOTIONS ---------------------------------------------------------------

		AnimationState					= EMOTION_POINTING WEAPONSET_TOGGLE_1
			StateName					= STATE_Ready_Rocks
			Animation					= IDLA
				AnimationName			= GUHbtShfB_PNTA
				AnimationMode			= ONCE
			End
			Animation					= IDLA
				AnimationName			= GUHbtShfB_PNTB
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Ready_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Attention_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Running_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
			EndScript
		End
		AnimationState					= EMOTION_POINTING 
			StateName					= STATE_Ready_Sword
			Animation
				AnimationName			= GUHbtShfS_PNTA
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfS_PNTB
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Ready_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Attention_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Running_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
			EndScript
		End




		AnimationState					= EMOTION_TAUNTING WEAPONSET_TOGGLE_1
			StateName					= STATE_Ready_Rocks
			Animation
				AnimationName			= GUHbtShfB_TNTA
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfB_TNTB
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfB_TNTC
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Ready_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Attention_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Running_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
			EndScript
		End
		AnimationState					= EMOTION_TAUNTING 
			StateName					= STATE_Ready_Sword
			Animation
				AnimationName			= GUHbtShfS_TNTA
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfS_TNTB
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfS_TNTC
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Ready_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Attention_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Running_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
			EndScript
		End

		AnimationState					= EMOTION_AFRAID 
			Animation
				AnimationName			= GUHbtShfB_FERA
				AnimationMode			= LOOP
			End
		End

		AnimationState					= EMOTION_CELEBRATING WEAPONSET_TOGGLE_1
			StateName					= STATE_Ready_Rocks
			Animation
				AnimationName			= GUHbtShfB_CHRA
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfB_CHRB
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfB_CHRC
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Ready_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Attention_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Running_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
			EndScript
		End

		AnimationState					= EMOTION_CELEBRATING 
			StateName					= STATE_Ready_Sword
			Animation
				AnimationName			= GUHbtShfS_CHRA
				AnimationMode			= ONCE
			End
			Animation
				AnimationName			= GUHbtShfS_CHRB
				AnimationMode			= ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Ready_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Attention_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Running_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
			EndScript
		End



		
		AnimationState					= RAISING_FLAG WEAPONSET_TOGGLE_1
			StateName					= STATE_Ready_Rocks
			Animation
				AnimationName			= GUHbtShfB_CHRA
				AnimationMode			= ONCE
				AnimationSpeedFactorRange = 0.9 1.1
			End
			Animation
				AnimationName			= GUHbtShfB_CHRB
				AnimationMode			= ONCE
				AnimationSpeedFactorRange = 0.9 1.1
			End
			Animation
				AnimationName			= GUHbtShfB_CHRC
				AnimationMode			= ONCE
				AnimationSpeedFactorRange = 0.9 1.1
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
		End
		
;;------------------ SELECTED STATE -------------------------------------------------------------

		AnimationState					= SELECTED WEAPONSET_TOGGLE_1
			StateName					= STATE_Attention_Rocks
			Animation					= IDLA
				AnimationName			= GUHbtShfB_ATNB
				AnimationMode			= LOOP

			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Ready_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Attention_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Running_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Bored_Rocks" then CurDrawableSetTransitionAnimState("TRANS_BoredToAttention_Rocks") end
			EndScript
		End

		AnimationState					= RAISING_FLAG
			StateName					= STATE_Ready_Sword
			Animation
				AnimationName			= GUHbtShfS_CHRA
				AnimationMode			= ONCE
				AnimationSpeedFactorRange = 0.9 1.1
			End
			Animation
				AnimationName			= GUHbtShfS_CHRB
				AnimationMode			= ONCE
				AnimationSpeedFactorRange = 0.9 1.1
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
		End

		AnimationState					= SELECTED 
			StateName					= STATE_Attention_Sword
			Animation					= IDLA
				AnimationName			= GUHbtShfS_ATNB
				AnimationMode			= LOOP
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Ready_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Attention_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Running_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Bored_Sword" then CurDrawableSetTransitionAnimState("TRANS_BoredToAttention_Sword") end
			EndScript
		End

;;------------------ IDLE STATES ----------------------------------------------------------------
		AnimationState					= WEAPONSET_TOGGLE_1
			StateName					= STATE_Bored_Rocks
			Animation
				AnimationName			= GUHbtShfB_IDLB
				AnimationMode			= ONCE
				AnimationPriority		= 100
			End
			Animation
				AnimationName			= GUHbtShfB_IDLC
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
			Animation
				AnimationName			= GUHbtShfB_IDLD
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
			Animation
				AnimationName			= GUHbtShfB_IDLE
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Ready_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Attention_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Running_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToRocks") end
				if Prev == "STATE_Attention_Rocks" then CurDrawableSetTransitionAnimState("TRANS_AttentionToBored_Rocks") end
			EndScript
		End

		IdleAnimationState
			StateName					= STATE_Bored_Sword
			Animation					= IDLA
				AnimationName			= GUHbtShfS_IDLB
				AnimationMode			= ONCE
				AnimationPriority		= 100
			End
			Animation
				AnimationName			= GUHbtShfS_IDLC
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
			Animation
				AnimationName			= GUHbtShfS_IDLD
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
			Animation
				AnimationName			= GUHbtShfS_IDLE
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
			Animation
				AnimationName			= GUHbtShfS_IDLF
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
			Animation
				AnimationName			= GUHbtShfS_IDLG
				AnimationMode			= ONCE
				AnimationPriority		= 10
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bored_Sword" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Ready_Sword" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Running_Sword" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Attention_Rocks" then CurDrawableSetTransitionAnimState("TRANS_RocksToSword") end
				if Prev == "STATE_Attention_Sword" then CurDrawableSetTransitionAnimState("TRANS_AttentionToBored_Sword") end
			EndScript
		End

;;------------------ TRANSITIONS ----------------------------------------------------------------

;;====== GETTING SWORD
		TransitionState					= TRANS_RocksToSword
			Animation					= STHA
				AnimationName			= GUHbtShfB_STHB
				AnimationMode			= ONCE
			End
		End
		TransitionState					= TRANS_Running_RocksToSword
			Animation					= STHA
				AnimationName			= GUHbtShfB_STHD
				AnimationMode			= ONCE
			End
		End

		TransitionState					= TRANS_SwordToRocks
			Animation					= STHA
				AnimationName			= GUHbtShfB_STHA
				AnimationMode			= ONCE
			End
		End
		TransitionState					= TRANS_Running_SwordToRocks
			Animation					= STHA
				AnimationName			= GUHbtShfB_STHC
				AnimationMode			= ONCE
			End
		End
		TransitionState					= TRANS_BoredToAttention_Rocks
			Animation					= ATNA
				AnimationName			= GUHbtShfB_ATNA

				AnimationMode			= ONCE
			End
		End
		TransitionState					= TRANS_AttentionToBored_Rocks
			Animation					= ATNC
				AnimationName			= GUHbtShfB_ATNC
				AnimationMode			= ONCE
			End
		End

		TransitionState					= TRANS_BoredToAttention_Sword
			Animation					= ATNA
				AnimationName			= GUHbtShfS_ATNA
				AnimationMode			= ONCE
			End
		End
		TransitionState					= TRANS_AttentionToBored_Sword
			Animation					= ATNC
				AnimationName			= GUHbtShfBS_ATNC
				AnimationMode			= ONCE
			End
		End

	End
