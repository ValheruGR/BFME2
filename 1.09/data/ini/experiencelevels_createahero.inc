;--------------------------------------------------------------------
; Create A Hero Experience Template. This is used to set the default
; values for the CreateAHero.
;--------------------------------------------------------------------

;----------------------	CreateAHero	---------------------------------
ExperienceLevel	CreateAHeroLevel1
	TargetNames			 = CreateAHero
	RequiredExperience	 = 1   
	ExperienceAward		 = CREATE_A_HERO_LVL1_EXP_AWARD 
	Rank				 = 1
;	Upgrades			 = CreateAHero_Dummy_not_used_reset_in_code_at_runtime
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End	
End	

ExperienceLevel	CreateAHeroLevel2
	TargetNames			 = CreateAHero
	RequiredExperience	 = CREATE_A_HERO_LVL2_EXP_NEEDED
	ExperienceAward		 = CREATE_A_HERO_LVL2_EXP_AWARD
	LevelUpFx			 = FX:GandalfLevelUp1FX
	;LevelUpOCL			 = OCL_GandalfLevelUp1OCL
	Rank				 = 2
	AttributeModifiers	 = CAHeroLevelUpDamage1
;	Upgrades			 = CreateAHero_Dummy_not_used_reset_in_code_at_runtime
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End	
End	

ExperienceLevel	CreateAHeroLevel3
	TargetNames			 = CreateAHero
	RequiredExperience	 = CREATE_A_HERO_LVL3_EXP_NEEDED
	ExperienceAward		 = CREATE_A_HERO_LVL3_EXP_AWARD
	LevelUpFx			 = FX:GandalfLevelUp1FX
	;LevelUpOCL			 = OCL_GandalfLevelUp1OCL
	Rank				 = 3
	AttributeModifiers	 = CAHeroLevelUpDamage2
;	Upgrades			 = CreateAHero_Dummy_not_used_reset_in_code_at_runtime
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End	
End	

ExperienceLevel	CreateAHeroLevel4
	TargetNames			 = CreateAHero
	RequiredExperience	 = CREATE_A_HERO_LVL4_EXP_NEEDED
	ExperienceAward		 = CREATE_A_HERO_LVL4_EXP_AWARD
	LevelUpFx			 = FX:GandalfLevelUp1FX
	;LevelUpOCL			 = OCL_GandalfLevelUp1OCL
	Rank				 = 4
	Upgrades			 = Upgrade_CreateAHeroGloriousCharge
	AttributeModifiers	 = CAHeroLevelUpDamage3
;	Upgrades			 = CreateAHero_Dummy_not_used_reset_in_code_at_runtime
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End
End	

ExperienceLevel	CreateAHeroLevel5
	TargetNames			 = CreateAHero
	RequiredExperience	 = CREATE_A_HERO_LVL5_EXP_NEEDED
	ExperienceAward		 = CREATE_A_HERO_LVL5_EXP_AWARD
	LevelUpFx			 = FX:GandalfLevelUp1FX
	;LevelUpOCL			 = OCL_GandalfLevelUp1OCL

	Rank				 = 5
	AttributeModifiers	 = CAHeroLevelUpDamage4
;	Upgrades			 = CreateAHero_Dummy_not_used_reset_in_code_at_runtime
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End	
End	

ExperienceLevel	CreateAHeroLevel6
	TargetNames			 = CreateAHero
	RequiredExperience	 = CREATE_A_HERO_LVL6_EXP_NEEDED
	ExperienceAward		 = CREATE_A_HERO_LVL6_EXP_AWARD
	LevelUpFx			 = FX:GandalfLevelUp1FX
	;LevelUpOCL			 = OCL_GandalfLevelUp1OCL
	Rank				 = 6
	Upgrades			 = Upgrade_CreateAHeroKingsFavor
	AttributeModifiers	 = CAHeroLevelUpDamage5
;	Upgrades			 = CreateAHero_Dummy_not_used_reset_in_code_at_runtime
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End
End	

ExperienceLevel	CreateAHeroLevel7
	TargetNames			 = CreateAHero
	RequiredExperience	 = CREATE_A_HERO_LVL7_EXP_NEEDED
	ExperienceAward		 = CREATE_A_HERO_LVL7_EXP_AWARD
	LevelUpFx			 = FX:GandalfLevelUp1FX
	;LevelUpOCL			 = OCL_GandalfLevelUp1OCL
	Rank				 = 7
	AttributeModifiers	 = CAHeroLevelUpDamage6
;	Upgrades			 = CreateAHero_Dummy_not_used_reset_in_code_at_runtime
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End
End	

ExperienceLevel	CreateAHeroLevel8
	TargetNames			 = CreateAHero
	RequiredExperience	 = CREATE_A_HERO_LVL8_EXP_NEEDED
	ExperienceAward		 = CREATE_A_HERO_LVL8_EXP_AWARD
	LevelUpFx			 = FX:GandalfLevelUp1FX
	;LevelUpOCL			 = OCL_GandalfLevelUp1OCL
	Rank				 = 8
	AttributeModifiers	 = CAHeroLevelUpDamage7
;	Upgrades			 = CreateAHero
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End
End	

ExperienceLevel	CreateAHeroLevel9
	TargetNames			 = CreateAHero
	RequiredExperience	 = CREATE_A_HERO_LVL9_EXP_NEEDED
	ExperienceAward		 = CREATE_A_HERO_LVL9_EXP_AWARD
	LevelUpFx			 = FX:GandalfLevelUp1FX
	;LevelUpOCL			 = OCL_GandalfLevelUp1OCL
	Rank				 = 9
	AttributeModifiers	 = CAHeroLevelUpDamage8
;	Upgrades			 = CreateAHero_Dummy_not_used_reset_in_code_at_runtime
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End
End	

ExperienceLevel	CreateAHeroLevel10
	TargetNames			 = CreateAHero
	RequiredExperience	 = CREATE_A_HERO_LVL10_EXP_NEEDED
	ExperienceAward		 = CREATE_A_HERO_LVL10_EXP_AWARD
	LevelUpFx			 = FX:GandalfLevelUp1FX
	;LevelUpOCL			 = OCL_GandalfLevelUp1OCL
	Rank				 = 10
	AttributeModifiers	 = CAHeroLevelUpDamage9
;	Upgrades			 = CreateAHero_Dummy_not_used_reset_in_code_at_runtime
	SelectionDecal
		Texture			 = decal_hero_good
		Style			 = SHADOW_ALPHA_DECAL
		OpacityMin		 = 50% 
		OpacityMax		 = 100%
		MinRadius		 = 40 ;16
		MaxRadius		 = 200 ;16
		MaxSelectedUnits = 40 ;1
	End
End	


