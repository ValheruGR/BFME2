
	;--------------- ElfMaleArcher (MenArcher) ---------------

	ClientBehavior = UpgradeSoundSelectorClientBehavior ModuleTag_TheGreatAndPowerfulSoundSelector		; Change selection sounds based on upgrades
		SoundUpgrade		= Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0			; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroMenArcherVoiceAttack
			VoiceAttackAir							= HeroMenArcherVoiceAttack
			VoiceAttackCharge 						= HeroMenArcherVoiceAttack
			VoiceAttackMachine 						= HeroMenArcherVoiceAttack
			VoiceAttackStructure 					= HeroMenArcherVoiceAttack
			VoiceCreated							= HeroMenArcherVoiceSalute
			VoiceFear								= HeroMenArcherVoiceHelpMe
			VoiceFullyCreated						= HeroMenArcherVoiceSalute
			VoiceGuard								= HeroMenArcherVoiceMove
			VoiceMove 								= HeroMenArcherVoiceMove
			VoiceMoveToCamp 						= HeroMenArcherVoiceMove
			VoiceMoveWhileAttacking 				= HeroMenArcherVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroMenArcherVoiceMove
			VoiceSelect 							= HeroMenArcherVoiceSelectMS
			VoiceSelectBattle  						= HeroMenArcherVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroMenArcherVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroMenArcherVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroMenArcherVoiceMove
				VoiceEnterUnitTransportShip			= HeroMenArcherVoiceMove
				VoiceGarrison						= HeroMenArcherVoiceMove
				VoiceInitiateCaptureBuilding		= HeroMenArcherVoiceCaptureBuilding
			End
		End

		;--------------- ElfFemale ---------------

		; Change attack voice when wielding bow
		SoundUpgrade		= Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1			; EVERYTHING on this line must be present
			RequiredModelConditions					= WEAPONSET_TOGGLE_1								; Bow out
			VoiceAttack 							= HeroElfFemaleVoiceAttackBow
  			VoiceAttackAir							= HeroElfFemaleVoiceAttackBow
			VoiceAttackMachine 						= HeroElfFemaleVoiceAttackBow
  			VoiceAttackStructure 					= HeroElfFemaleVoiceAttackBow
		End
		
		SoundUpgrade		= Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1			; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroElfFemaleVoiceAttack
			VoiceAttackAir							= HeroElfFemaleVoiceAttack
			VoiceAttackCharge 						= HeroElfFemaleVoiceAttackCharge
			VoiceAttackMachine 						= HeroElfFemaleVoiceAttack
			VoiceAttackStructure 					= HeroElfFemaleVoiceAttack
			VoiceCreated							= HeroElfFemaleArcherVoiceSalute
			VoiceFear								= HeroElfFemaleVoiceHelpMe
			VoiceFullyCreated						= HeroElfFemaleArcherVoiceSalute
			VoiceGuard								= HeroElfFemaleVoiceMove
			VoiceMove 								= HeroElfFemaleVoiceMove
			VoiceMoveToCamp 						= HeroElfFemaleVoiceMove
			VoiceMoveWhileAttacking 				= HeroElfFemaleVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroElfFemaleVoiceMove
			VoiceSelect 							= HeroElfFemaleVoiceSelectMS
			VoiceSelectBattle  						= HeroElfFemaleVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroElfFemaleVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroElfFemaleVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroElfFemaleVoiceMove
				VoiceEnterUnitTransportShip			= HeroElfFemaleVoiceMove
				VoiceGarrison						= HeroElfFemaleVoiceMove
				VoiceInitiateCaptureBuilding		= HeroElfFemaleVoiceCaptureBuilding
			End
		End

		;--------------- CorruptedMan1 (EvilMan) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0		; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroEvilManVoiceAttack
			VoiceAttackAir							= HeroEvilManVoiceAttack
			VoiceAttackCharge 						= HeroEvilManVoiceAttack
			VoiceAttackMachine 						= HeroEvilManVoiceAttack
			VoiceAttackStructure 					= HeroEvilManVoiceAttack
			VoiceCreated							= HeroEvilManVoiceSalute
			VoiceFear								= HeroEvilManVoiceHelpMe
			VoiceFullyCreated						= HeroEvilManVoiceSalute
			VoiceGuard								= HeroEvilManVoiceMove
			VoiceMove 								= HeroEvilManVoiceMove
			VoiceMoveToCamp 						= HeroEvilManVoiceMove
			VoiceMoveWhileAttacking 				= HeroEvilManVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroEvilManVoiceMove
			VoiceSelect 							= HeroEvilManVoiceSelectMS
			VoiceSelectBattle  						= HeroEvilManVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroEvilManVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroEvilManVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroEvilManVoiceMove
				VoiceEnterUnitTransportShip			= HeroEvilManVoiceMove
				VoiceGarrison						= HeroEvilManVoiceMove
				VoiceInitiateCaptureBuilding		= HeroEvilManVoiceCaptureBuilding
			End
		End
	
		;--------------- CorruptedMan2 (Easterling) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1		; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroEasterlingVoiceAttack
			VoiceAttackAir							= HeroEasterlingVoiceAttack
			VoiceAttackCharge 						= HeroEasterlingVoiceAttack
			VoiceAttackMachine 						= HeroEasterlingVoiceAttack
			VoiceAttackStructure 					= HeroEasterlingVoiceAttack
			VoiceCreated							= HeroEasterlingVoiceSalute
			VoiceFear								= HeroEasterlingVoiceHelpMe
			VoiceFullyCreated						= HeroEasterlingVoiceSalute
			VoiceGuard								= HeroEasterlingVoiceMove
			VoiceMove 								= HeroEasterlingVoiceMove
			VoiceMoveToCamp 						= HeroEasterlingVoiceMove
			VoiceMoveWhileAttacking 				= HeroEasterlingVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroEasterlingVoiceMove
			VoiceSelect 							= HeroEasterlingVoiceSelectMS
			VoiceSelectBattle  						= HeroEasterlingVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroEasterlingVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroEasterlingVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroEasterlingVoiceMove
				VoiceEnterUnitTransportShip			= HeroEasterlingVoiceMove
				VoiceGarrison						= HeroEasterlingVoiceMove
				VoiceInitiateCaptureBuilding		= HeroEasterlingVoiceCaptureBuilding
			End
		End

		;--------------- DwarfTaskmaster (Dwarf) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0				; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroDwarfVoiceAttack
			VoiceAttackAir							= HeroDwarfVoiceAttack
			VoiceAttackCharge 						= HeroDwarfVoiceAttack
			VoiceAttackMachine 						= HeroDwarfVoiceAttack
			VoiceAttackStructure 					= HeroDwarfVoiceAttack
			VoiceCreated							= HeroDwarfVoiceSalute
			VoiceFear								= HeroDwarfVoiceHelpMe
			VoiceFullyCreated						= HeroDwarfVoiceSalute
			VoiceGuard								= HeroDwarfVoiceMove
			VoiceMove 								= HeroDwarfVoiceMove
			VoiceMoveToCamp 						= HeroDwarfVoiceMove
			VoiceMoveWhileAttacking 				= HeroDwarfVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroDwarfVoiceMove
			VoiceSelect 							= HeroDwarfVoiceSelectMS
			VoiceSelectBattle  						= HeroDwarfVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroDwarfVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroDwarfVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroDwarfVoiceMove
				VoiceEnterUnitTransportShip			= HeroDwarfVoiceMove
				VoiceGarrison						= HeroDwarfVoiceMove
				VoiceInitiateCaptureBuilding		= HeroDwarfVoiceCaptureBuilding
			End
		End

		;--------------- DwarfSage (Dwarf) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1				; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroDwarfVoiceAttack
			VoiceAttackAir							= HeroDwarfVoiceAttack
			VoiceAttackCharge 						= HeroDwarfVoiceAttack
			VoiceAttackMachine 						= HeroDwarfVoiceAttack
			VoiceAttackStructure 					= HeroDwarfVoiceAttack
			VoiceCreated							= HeroDwarfSageVoiceSalute
			VoiceFear								= HeroDwarfVoiceHelpMe
			VoiceFullyCreated						= HeroDwarfSageVoiceSalute
			VoiceGuard								= HeroDwarfVoiceMove
			VoiceMove 								= HeroDwarfVoiceMove
			VoiceMoveToCamp 						= HeroDwarfVoiceMove
			VoiceMoveWhileAttacking 				= HeroDwarfVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroDwarfVoiceMove
			VoiceSelect 							= HeroDwarfVoiceSelectMS
			VoiceSelectBattle  						= HeroDwarfVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroDwarfVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroDwarfVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroDwarfVoiceMove
				VoiceEnterUnitTransportShip			= HeroDwarfVoiceMove
				VoiceGarrison						= HeroDwarfVoiceMove
				VoiceInitiateCaptureBuilding		= HeroDwarfVoiceCaptureBuilding
			End
		End

		;--------------- CaptainOfGondor (WestMale) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0		; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroWestMaleVoiceAttack
			VoiceAttackAir							= HeroWestMaleVoiceAttack
			VoiceAttackCharge 						= HeroWestMaleVoiceAttackCharge
			VoiceAttackMachine 						= HeroWestMaleVoiceAttack
			VoiceAttackStructure 					= HeroWestMaleVoiceAttackBuilding
			VoiceCreated							= HeroWestMaleVoiceSalute
			VoiceFear								= HeroWestMaleVoiceHelpMe
			VoiceFullyCreated						= HeroWestMaleVoiceSalute
			VoiceGuard								= HeroWestMaleVoiceMove
			VoiceMove 								= HeroWestMaleVoiceMove
			VoiceMoveToCamp 						= HeroWestMaleVoiceMoveCamp
			VoiceMoveWhileAttacking 				= HeroWestMaleVoiceDisengage
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroWestMaleVoiceRetreat
			VoiceSelect 							= HeroWestMaleVoiceSelectMS
			VoiceSelectBattle  						= HeroWestMaleVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroWestMaleVoiceMoveShip
				VoiceEnterUnitMordorMumakil			= HeroWestMaleVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroWestMaleVoiceMove
				VoiceEnterUnitTransportShip			= HeroWestMaleVoiceMove
				VoiceGarrison						= HeroWestMaleVoiceMoveGarrison
				VoiceInitiateCaptureBuilding		= HeroWestMaleVoiceCaptureBuilding
			End
		End

		;--------------- ShieldMaiden (WestFemale) ---------------

		; Change attack voice when wielding bow
		SoundUpgrade		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1		; EVERYTHING on this line must be present
			RequiredModelConditions					= WEAPONSET_TOGGLE_1								; Bow out
			VoiceAttack 							= HeroWestFemaleVoiceAttackBow
			VoiceAttackAir 							= HeroWestFemaleVoiceAttackBow
			VoiceAttackMachine						= HeroWestFemaleVoiceAttackBow
			VoiceAttackStructure					= HeroWestFemaleVoiceAttackBow
		End
	
		; Change move voice when on a horse
		SoundUpgrade		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1		; EVERYTHING on this line must be present
			RequiredModelConditions					= MOUNTED											; On horse
			VoiceMove	 							= HeroWestFemaleVoiceMoveMount
			VoiceGuard								= HeroWestFemaleVoiceMoveMount
			VoiceMoveToCamp							= HeroWestFemaleVoiceMoveMount
			VoiceMoveWhileAttacking					= HeroWestFemaleVoiceMoveMount
			VoiceRetreatToCastle					= HeroWestFemaleVoiceMoveMount
			UnitSpecificSounds
  				VoiceEnterUnitElvenTransportShip	= HeroWestFemaleVoiceMoveMount
  				VoiceEnterUnitMordorMumakil			= HeroWestFemaleVoiceMoveMount
  				VoiceEnterUnitSlaughterHouse		= HeroWestFemaleVoiceMoveMount
  				VoiceEnterUnitTransportShip			= HeroWestFemaleVoiceMoveMount
				VoiceGarrison						= HeroWestFemaleVoiceMoveMount
			End
		End

		SoundUpgrade		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1		; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroWestFemaleVoiceAttack
			VoiceAttackAir							= HeroWestFemaleVoiceAttack
			VoiceAttackCharge 						= HeroWestFemaleVoiceAttackCharge
			VoiceAttackMachine 						= HeroWestFemaleVoiceAttack
			VoiceAttackStructure 					= HeroWestFemaleVoiceAttack
			VoiceCreated							= HeroWestFemaleVoiceSalute
			VoiceFear								= HeroWestFemaleVoiceHelpMe
			VoiceFullyCreated						= HeroWestFemaleVoiceSalute
			VoiceGuard								= HeroWestFemaleVoiceMove
			VoiceMove 								= HeroWestFemaleVoiceMove
			VoiceMoveToCamp 						= HeroWestFemaleVoiceMove
			VoiceMoveWhileAttacking 				= HeroWestFemaleVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroWestFemaleVoiceMove
			VoiceSelect 							= HeroWestFemaleVoiceSelectMS
			VoiceSelectBattle  						= HeroWestFemaleVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroWestFemaleVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroWestFemaleVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroWestFemaleVoiceMove
				VoiceEnterUnitTransportShip			= HeroWestFemaleVoiceMove
				VoiceGarrison						= HeroWestFemaleVoiceMove
				VoiceInitiateCaptureBuilding		= HeroWestFemaleVoiceCaptureBuilding
			End
		End

		;--------------- YoungWizard (Wizard, Wanderer) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0		; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroWizardVoiceAttack
			VoiceAttackAir							= HeroWizardVoiceAttack
			VoiceAttackCharge 						= HeroWizardVoiceAttack
			VoiceAttackMachine 						= HeroWizardVoiceAttack
			VoiceAttackStructure 					= HeroWizardVoiceAttack
			VoiceCreated							= HeroWizardVoiceWandererSalute
			VoiceFear								= HeroWizardVoiceHelpMe
			VoiceFullyCreated						= HeroWizardVoiceWandererSalute
			VoiceGuard								= HeroWizardVoiceMove
			VoiceMove 								= HeroWizardVoiceMove
			VoiceMoveToCamp 						= HeroWizardVoiceMove
			VoiceMoveWhileAttacking 				= HeroWizardVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroWizardVoiceMove
			VoiceSelect 							= HeroWizardVoiceSelectMS
			VoiceSelectBattle  						= HeroWizardVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceAttackFireball					= HeroWizardVoiceAttack
				VoiceEnterUnitElvenTransportShip	= HeroWizardVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroWizardVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroWizardVoiceMove
				VoiceEnterUnitTransportShip			= HeroWizardVoiceMove
				VoiceGarrison						= HeroWizardVoiceMove
				VoiceInitiateCaptureBuilding		= HeroWizardVoiceCaptureBuilding
			End
		End

		;--------------- AvatarWizard (Wizard, Avatar) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1		; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroWizardVoiceAttack
			VoiceAttackAir							= HeroWizardVoiceAttack
			VoiceAttackCharge 						= HeroWizardVoiceAttack
			VoiceAttackMachine 						= HeroWizardVoiceAttack
			VoiceAttackStructure 					= HeroWizardVoiceAttack
			VoiceCreated							= HeroWizardVoiceAvatarSalute
			VoiceFear								= HeroWizardVoiceHelpMe
			VoiceFullyCreated						= HeroWizardVoiceAvatarSalute
			VoiceGuard								= HeroWizardVoiceMove
			VoiceMove 								= HeroWizardVoiceMove
			VoiceMoveToCamp 						= HeroWizardVoiceMove
			VoiceMoveWhileAttacking 				= HeroWizardVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroWizardVoiceMove
			VoiceSelect 							= HeroWizardVoiceSelectMS
			VoiceSelectBattle  						= HeroWizardVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceAttackFireball					= HeroWizardVoiceAttack
				VoiceEnterUnitElvenTransportShip	= HeroWizardVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroWizardVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroWizardVoiceMove
				VoiceEnterUnitTransportShip			= HeroWizardVoiceMove
				VoiceGarrison						= HeroWizardVoiceMove
				VoiceInitiateCaptureBuilding		= HeroWizardVoiceCaptureBuilding
			End
		End
	
		;--------------- HermitWizard (Wizard, Hermit) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2		; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroWizardVoiceAttack
			VoiceAttackAir							= HeroWizardVoiceAttack
			VoiceAttackCharge 						= HeroWizardVoiceAttack
			VoiceAttackMachine 						= HeroWizardVoiceAttack
			VoiceAttackStructure 					= HeroWizardVoiceAttack
			VoiceCreated							= HeroWizardVoiceHermitSalute
			VoiceFear								= HeroWizardVoiceHelpMe
			VoiceFullyCreated						= HeroWizardVoiceHermitSalute
			VoiceGuard								= HeroWizardVoiceMove
			VoiceMove 								= HeroWizardVoiceMove
			VoiceMoveToCamp 						= HeroWizardVoiceMove
			VoiceMoveWhileAttacking 				= HeroWizardVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroWizardVoiceMove
			VoiceSelect 							= HeroWizardVoiceSelectMS
			VoiceSelectBattle  						= HeroWizardVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceAttackFireball					= HeroWizardVoiceAttack
				VoiceEnterUnitElvenTransportShip	= HeroWizardVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroWizardVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroWizardVoiceMove
				VoiceEnterUnitTransportShip			= HeroWizardVoiceMove
				VoiceGarrison						= HeroWizardVoiceMove
				VoiceInitiateCaptureBuilding		= HeroWizardVoiceCaptureBuilding
			End
		End

		;--------------- Troll ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_0	; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= TrollVoiceAttack
			VoiceAttackAir							= TrollVoiceAttack
			VoiceAttackCharge 						= TrollVoiceAttack
			VoiceAttackMachine 						= TrollVoiceAttack
			VoiceAttackStructure 					= TrollVoiceAttack
			VoiceCreated							= TrollVoiceAttack
			VoiceFear								= TrollDie
			VoiceFullyCreated						= TrollVoiceAttack
			VoiceGuard								= TrollVoiceMove
			VoiceMove 								= TrollVoiceMove
			VoiceMoveToCamp 						= TrollVoiceMove
			VoiceMoveWhileAttacking 				= TrollVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= TrollVoiceMove
			VoiceSelect 							= AttackTrollVoiceSelectMS
			VoiceSelectBattle  						= AttackTrollVoiceSelectMS
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= TrollVoiceMove
				VoiceEnterUnitMordorMumakil			= TrollVoiceMove
				VoiceEnterUnitSlaughterHouse		= TrollVoiceMove
				VoiceEnterUnitTransportShip			= TrollVoiceMove
				VoiceGarrison						= TrollVoiceMove
				VoiceInitiateCaptureBuilding		= TrollVoiceMove
			End
		End

		;--------------- OrcRaider (Orc) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2	; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroOrcVoiceAttack
			VoiceAttackAir							= HeroOrcVoiceAttack
			VoiceAttackCharge 						= HeroOrcVoiceAttack
			VoiceAttackMachine 						= HeroOrcVoiceAttack
			VoiceAttackStructure 					= HeroOrcVoiceAttack
			VoiceCreated							= HeroOrcVoiceSalute
			VoiceFear								= HeroOrcVoiceHelpMe
			VoiceFullyCreated						= HeroOrcVoiceSalute
			VoiceGuard								= HeroOrcVoiceMove
			VoiceMove 								= HeroOrcVoiceMove
			VoiceMoveToCamp 						= HeroOrcVoiceMove
			VoiceMoveWhileAttacking 				= HeroOrcVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroOrcVoiceMove
			VoiceSelect 							= HeroOrcVoiceSelectMS
			VoiceSelectBattle  						= HeroOrcVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroOrcVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroOrcVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroOrcVoiceMove
				VoiceEnterUnitTransportShip			= HeroOrcVoiceMove
				VoiceGarrison						= HeroOrcVoiceMove
				VoiceInitiateCaptureBuilding		= HeroOrcVoiceCaptureBuilding
			End
		End

		;--------------- Uruk (UrukHai) ---------------

		SoundUpgrade		= Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3	; EVERYTHING on this line must be present
		;ExcludedUpgrades	= Upgrade_OpenGarrison Upgrade_TrebuchetTurret								; NOTHING on this line can be present
			VoiceAttack 							= HeroUrukHaiVoiceAttack
			VoiceAttackAir							= HeroUrukHaiVoiceAttack
			VoiceAttackCharge 						= HeroUrukHaiVoiceAttack
			VoiceAttackMachine 						= HeroUrukHaiVoiceAttack
			VoiceAttackStructure 					= HeroUrukHaiVoiceAttack
			VoiceCreated							= HeroUrukHaiVoiceSalute
			VoiceFear								= HeroUrukHaiVoiceHelpMe
			VoiceFullyCreated						= HeroUrukHaiVoiceSalute
			VoiceGuard								= HeroUrukHaiVoiceMove
			VoiceMove 								= HeroUrukHaiVoiceMove
			VoiceMoveToCamp 						= HeroUrukHaiVoiceMove
			VoiceMoveWhileAttacking 				= HeroUrukHaiVoiceMove
			VoicePriority							= 95
			VoiceRetreatToCastle 					= HeroUrukHaiVoiceMove
			VoiceSelect 							= HeroUrukHaiVoiceSelectMS
			VoiceSelectBattle  						= HeroUrukHaiVoiceSelectBattle
		
			SoundImpact								= ImpactHorse
		
			UnitSpecificSounds
				VoiceEnterUnitElvenTransportShip	= HeroUrukHaiVoiceMove
				VoiceEnterUnitMordorMumakil			= HeroUrukHaiVoiceMove
				VoiceEnterUnitSlaughterHouse		= HeroUrukHaiVoiceMove
				VoiceEnterUnitTransportShip			= HeroUrukHaiVoiceMove
				VoiceGarrison						= HeroUrukHaiVoiceMove
				VoiceInitiateCaptureBuilding		= HeroUrukHaiVoiceCaptureBuilding
			End
		End
	End

	;--------------------------------------------------------------------------------------------

    #include "..\includes\StandardUnitEvaEvents.inc"
		
	;CrowdResponseKey = ElfHero
	;EvaEventDieOwner = FaramirDie	;Eva event to trigger on unit's death. NOTICE THAT this is only for permanent deaths

	Behavior = LargeGroupAudioUpdate ModuleTag_LGAU
		Key = Hero
	End

		;--------------- AnimationSound ---------------

	ClientBehavior = AnimationSoundClientBehavior ModuleTag_AnimAudioBehavior
		MaxUpdateRangeCap = 800

		;----------- CaptainOfGondor (WestMale) ----------

		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_MW_M_SKL.CHHW_MW_M_ACCL	Frames:16
		;AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_MW_M_SKL.CHHW_MW_M_ATRA	Frames:16	;walking
		AnimationSound = Sound:HorseWhinny				Animation:CHHW_MW_M_SKL.CHHW_MW_M_CHRA	Frames:7
		AnimationSound = Sound:HorseDieForHero			Animation:CHHW_MW_M_SKL.CHHW_MW_M_DIEA	Frames:1
		AnimationSound = Sound:BodyFallGenericNoArmor	Animation:CHHW_MW_M_SKL.CHHW_MW_M_DIEA	Frames:6
		AnimationSound = Sound:BodyFallSoldier			Animation:CHHW_MW_M_SKL.CHHW_MW_M_DIEA	Frames:45
		AnimationSound = Sound:BodyFallSoldier			Animation:CHHW_MW_M_SKL.CHHW_MW_M_LNDA	Frames:2
		AnimationSound = Sound:HorseWhinny				Animation:CHHW_MW_M_SKL.CHHW_MW_M_LVLA	Frames:7
		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_MW_M_SKL.CHHW_MW_M_MFDA	Frames:4
		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_MW_M_SKL.CHHW_MW_M_RUNA	Frames:4
		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_MW_M_SKL.CHHW_MW_M_TNL1	Frames:5
		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_MW_M_SKL.CHHW_MW_M_TNR1	Frames:5

		;--------------- ShieldMaiden (WestFemale) ---------------

		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_SM_M_SKL.CHHW_SM_M_ACCL	Frames:18 36
		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_SM_M_SKL.CHHW_SM_M_ATRA	Frames:11 27
		AnimationSound = Sound:HorseDieForHero			Animation:CHHW_SM_M_SKL.CHHW_SM_M_DIEA	Frames:1
		AnimationSound = Sound:BodyFallGenericNoArmor	Animation:CHHW_SM_M_SKL.CHHW_SM_M_DIEA	Frames:6
		AnimationSound = Sound:BodyFallSoldier			Animation:CHHW_SM_M_SKL.CHHW_SM_M_DIEA	Frames:45
		AnimationSound = Sound:BodyFallSoldier			Animation:CHHW_SM_M_SKL.CHHW_SM_M_LNDA	Frames:2 12
		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_SM_M_SKL.CHHW_SM_M_MFDA	Frames:10
		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_SM_M_SKL.CHHW_SM_M_RUNA	Frames:10
		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_SM_M_SKL.CHHW_SM_M_TNL1	Frames:10
		AnimationSound = Sound:HorseMoveFootsteps		Animation:CHHW_SM_M_SKL.CHHW_SM_M_TNR1	Frames:10
		AnimationSound = Sound:TauntHumanHitShield		Animation:CHHW_SM_M_SKL.CHHW_SM_M_TNTA	Frames:11 27

		;------------------------------

;		AnimationSound = Sound:FootstepDirtA			Animation:RUEowyn_SKL.RUEowyn_RUNA			Frames:7 19 30 41
;		AnimationSound = Sound:FootstepDirtA			Animation:RUEowyn_SKL.RUEowyn_RUNB			Frames:9 19 29 40
;		AnimationSound = Sound:SwordIntoScabbard1		Animation:RUEowyn_SKL.RUEowyn_ATKD	    	Frames:1
;		AnimationSound = Sound:EowynVoiceAttackSmite	Animation:RUEowyn_SKL.RUEowyn_ATKD	    	Frames:35
;		AnimationSound = Sound:SwordShingClean1			Animation:RUEowyn_SKL.RUEowyn_ATKD	    	Frames:59
;		AnimationSound = Sound:BodyFallGenericNoArmor	Animation:RUEowyn_SKL.RUEowyn_DIEA	    	Frames:30
;		AnimationSound = Sound:EowynVoiceAttackSmite	Animation:RUEwnHrHrs_SKL.RUEwnHrHrs_SPRA	Frames:40

End


