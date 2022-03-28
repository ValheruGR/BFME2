//-----------------------------------------------------------------------------

	//	Lazy method to reach to every building.
	//	Would be ideal to use it as an InheritableModule in object.ini
	//	but then the first Draw module of any object is invisible.... 
	//	which means everything on Worldbuilder becomes invisible
	
	#include "09v3attributedrawmoduleAllBuildings.inc" ;;.;; 
	
//-----------------------------------------------------------------------------

	; All the standard EVA events for a 'normal' faction building [not a freestanding, non-aligned building, please!]

	EvaEventDamagedOwner	= StructureUnderAttack 		; Eva event to trigger when building is damaged
	
    EvaEnemyObjectSightedEvent	= EnemyCampSighted   ; Normal 'There's their camp' when any enemy building is seen

	
	
	
	