	//*** ART Parameters ***

	Draw = W3DScriptedModelDraw DustEffects
	    DefaultModelConditionState
	      Model = None
	    End
	    IdleAnimationState
	    End
	    AnimationState = MOUNTED MOVING WADING
			ParticleSysBone = None FootstepSlash
	    End
	    AnimationState = MOUNTED MOVING ACCELERATE
			ParticleSysBone = None GenericSiegeTrailDust
	    End
	    AnimationState = MOUNTED MOVING ACCELERATE
			ParticleSysBone = None GenericSiegeTrailDust
	    End
	    AnimationState = MOUNTED MOVING
	    End
	End
	
	// All faction icon.
	Draw = W3DScriptedModelDraw ModuleTag_IconDraw
		DefaultModelConditionState
			Model = None
	    End
		ModelConditionState = PREORDER CREATE_A_HERO_11		; Troll 1
			Model = IconLarge
		End
		ModelConditionState = PREORDER CREATE_A_HERO_10		; Troll 2
			Model = IconLarge
		End
		ModelConditionState = PREORDER
			Model = Icon
		End
	End

	// Upgrade_CHW01
//	Draw = W3DScriptedModelDraw Dwarf_Axe01
//		DefaultModelConditionState
//			Model = CH_Dwarf_Axe01
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW02
//	Draw = W3DScriptedModelDraw Belthronding
//		DefaultModelConditionState
//			Model = CUBelthronding
//		End
//		AttachToBoneInAnotherModule = B_HAND_L
//	End

	// Upgrade_CHW3
//	Draw = W3DScriptedModelDraw Gurthang
//		DefaultModelConditionState
//			Model = CUGurthang
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW4
//	Draw = W3DScriptedModelDraw WestronSword
//		DefaultModelConditionState
//			Model = CUWestronSword
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW5
//	Draw = W3DScriptedModelDraw TrollBane
//		DefaultModelConditionState
//			Model = CUTrollBane
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW6
//	Draw = W3DScriptedModelDraw FireBrand
//		DefaultModelConditionState
//			Model = CUFireBrand
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW7
//	Draw = W3DScriptedModelDraw WizardStaff01
//		DefaultModelConditionState
//			Model = CH_Staff01
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW8
//	Draw = W3DScriptedModelDraw MithlondBow
//		DefaultModelConditionState
//			Model = CUMithlondBow
//		End
//		AttachToBoneInAnotherModule = B_HAND_L
//	End

	// Upgrade_CHW9
//	Draw = W3DScriptedModelDraw WizardStaff02
//		DefaultModelConditionState
//			Model = CH_Staff02
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW10
//	Draw = W3DScriptedModelDraw WizardStaff03
//		DefaultModelConditionState
//			Model = CH_Staff03
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW11
//	Draw = W3DScriptedModelDraw WizardStaff04
//		DefaultModelConditionState
//			Model = CH_Staff04
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//		ExtraPublicBone = STAFF_ENDBONE
//	End

	// Upgrade_CHW12
//	Draw = W3DScriptedModelDraw TrollMace
//		DefaultModelConditionState
//			Model = CH_Troll_Mace
//		End
//		AttachToBoneInAnotherModule = TRUNK01
//	End

	// Upgrade_CHW13
//	Draw = W3DScriptedModelDraw TrollSword
//		DefaultModelConditionState
//			Model = CH_Troll_Sword
//		End
//		AttachToBoneInAnotherModule = TRUNK01
//	End

	// Upgrade_CHW14
//	Draw = W3DScriptedModelDraw TrollHammer
//		DefaultModelConditionState
//			Model = CH_Troll_Hmr
//		End
//		AttachToBoneInAnotherModule = TRUNK01
//	End

	// Upgrade_CHW15
//	Draw = W3DScriptedModelDraw TrollTree
//		DefaultModelConditionState
//			Model = CH_Troll_Tree
//		End
//		AttachToBoneInAnotherModule = TRUNK01
//	End
	// Currently linked to all of the wizard weapons
//	Draw = W3DScriptedModelDraw WizardSword
//		DefaultModelConditionState
//			Model = CH_wizardsword
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

//	// Currently linked to all of the wizard weapons
//	Draw = W3DScriptedModelDraw WizardSword_TempDwarf
//		DefaultModelConditionState
//			Model = CH_wizardsword
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Currently linked to all of the wizard weapons
	Draw = W3DScriptedModelDraw HeroOfTheWestShield
		DefaultModelConditionState
			Model = CH_Shield01
		End
		AttachToBoneInAnotherModule = B_HAND_L
	End
	
	// Upgrade_CHW18
//	Draw = W3DScriptedModelDraw Uruk_Sword_01
//		DefaultModelConditionState
//			Model = CHSS_UK_Swrd01
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW19
//	Draw = W3DScriptedModelDraw Uruk_Sword_02
//		DefaultModelConditionState
//			Model = CHSS_UK_Swrd02
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW20
//	Draw = W3DScriptedModelDraw Uruk_Sword_03
//		DefaultModelConditionState
//			Model = CHSS_UK_Swrd03
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End

	// Upgrade_CHW21
//	Draw = W3DScriptedModelDraw CMSword01
//		DefaultModelConditionState
//			Model = CHCM_SWD_01
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End
	
	// Upgrade_CHW22
//	Draw = W3DScriptedModelDraw CMSword02
//		DefaultModelConditionState
//			Model = CHCM_SWD_02
//		End
//		AttachToBoneInAnotherModule = B_HAND_R
//	End