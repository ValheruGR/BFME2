	Behavior = InvisibilityUpdate ModuleTag_ElvenCloak ;;.;; Module on hobbits was called ModuleTag_StealthForEscape
		InvisibilityNugget
			InvisibilityType		= STEALTH
			ForbiddenConditions		= MOVING FIRING_ANY TAKING_DAMAGE
			BecomeStealthedFX       = FX_ElvenCloakOn
			ExitStealthFX           = FX_ElvenCloakOff
			Options					= UNTOGGLE_HIDDEN_WHEN_LEAVING_STEALTH
		End
		StartsActive				= No
		UpdatePeriod				= 2000
	End