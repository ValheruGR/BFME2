//Bash with tree is supposed to deal same damage as original clubswing for balance reasons. So we use it's base damage & ensure to share scalars against structures.

// Originally this simply dealt 55% to buildings. But we want more damage on creeps and even less against fortress.
		DamageScalar	= 55% NONE +STRUCTURE -WargLair -BarrowWightLair -CaveTrollLair -SpiderLair -MoriarGoblinLair -COMMANDCENTER 
        DamageScalar	= 40% NONE +COMMANDCENTER ;;=;;
		DamageScalar	= 100% NONE +WargLair +BarrowWightLair +CaveTrollLair +SpiderLair +MoriarGoblinLair ;;=;;
		
		