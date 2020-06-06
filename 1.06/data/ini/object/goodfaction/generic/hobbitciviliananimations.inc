
		AnimationState = STUNNED_FLAILING
			Animation
				AnimationName				= GUHbtShfs_FLYA
				AnimationMode				= LOOP
				AnimationBlendTime			= 0
			End
			Flags							= RANDOMSTART
		End

		AnimationState = DYING SPLATTED
			Animation
				AnimationName				= GUHbtShfs_LNDA
				AnimationMode				= ONCE
			End
		End

		AnimationState = DYING EMOTION_ALERT
			Animation
				AnimationName				= GUHbtShfs_DIEB
				AnimationMode				= ONCE
			End
		End

		AnimationState = DYING
			Animation
				AnimationName				= GUHbtShfs_DIEC
				AnimationMode				= ONCE
			End
		End

		AnimationState = STUNNED_STANDING_UP
			Animation
				AnimationName				= GUHbtShfs_GTPA
				AnimationMode				= ONCE
				AnimationSpeedFactorRange	= 1.5 1.5
			End
		End		
		
		AnimationState = STUNNED
			Animation
				AnimationName				= GUHbtShfs_LNDA
				AnimationMode				= ONCE
			End
		End

		AnimationState = MOVING EMOTION_ALERT
			Animation
				AnimationName				= GUHbtShfs_RUNA
				AnimationMode				= LOOP
			End
		End
		
		AnimationState = MOVING EMOTION_TERROR
			Animation
				AnimationName				= GUHbtShfS_RUNE
				AnimationMode				= LOOP
			End
		End
		
		AnimationState = MOVING
			Animation
				AnimationName				= GUHbtShfs_RUNB
				AnimationMode				= LOOP
			End
		End

		AnimationState = EMOTION_ALERT
			Animation
				AnimationName				= GUHbtShfs_IDLB
				AnimationMode				= LOOP
			End
		End
		
		AnimationState = SELECTED
			Animation
				AnimationName				= GUHbtShfs_ATNB
				AnimationMode				= LOOP
			End
		End

		AnimationState = JUST_BUILT
			Animation
				AnimationName				= GUHbtShfs_SMOA
				AnimationMode				= MANUAL
				AnimationBlendTime			= 0
			End
		End
		
		IdleAnimationState
			Animation
				AnimationName				= GUHbtShfs_IDLA
				AnimationMode				= ONCE
				AnimationPriority			= 100
			End
			Animation
				AnimationName				= GUHbtShfs_IDLB
				AnimationMode				= ONCE
				AnimationPriority			= 10
			End
			Animation
				AnimationName				= GUHbtShfs_IDLC
				AnimationMode				= ONCE
				AnimationPriority			= 1
			End
			Animation
				AnimationName				= GUHbtShfs_IDLD
				AnimationMode				= ONCE
				AnimationPriority			= 1
			End
			Animation
				AnimationName				= GUHbtShfs_IDLE
				AnimationMode				= ONCE
				AnimationPriority			= 1
			End
			Animation
				AnimationName				= GUHbtShfs_IDLF
				AnimationMode				= ONCE
				AnimationPriority			= 1
			End
			Animation
				AnimationName				= GUHbtShfs_IDLG
				AnimationMode				= ONCE
				AnimationPriority			= 1
			End
			Flags							= RESTART_ANIM_WHEN_COMPLETE
		End
