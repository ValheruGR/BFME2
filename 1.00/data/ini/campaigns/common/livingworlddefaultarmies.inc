//-------------------------------------------------------------------------------------------------
//	Default army composition for each faction
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
// Men of the West
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	//SpawnAtActStart = No				// Default is "Yes". If set to "No", then this army will only be spawned if directed to do so elsewhere (such as when an Ownership spawns an army).
	SpawnForTemplates = PlayerMen			// Required for armies, not allowed for cities.
	HeroTemplateName = GondorAragornMP
	PlayerArmy = AragornPlayerArmy
	Icon = HeroAragornIcon
	; MoveSpeed = 15.0	;;; Each army can have a custom move speed (the default is in LivingWorld.ini)
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerMen
	HeroTemplateName = RohanTheoden
	PlayerArmy = TheodenPlayerArmy
	Icon = HeroTheodenIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorBoromir
	PlayerArmy = BoromirPlayerArmy
	Icon = HeroBoromirIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMen
	PlayerArmy = MenOfTheWest_StartingArmy
	Icon = MoWArmyIcon
End


//-------------------------------------------------------------------------------------------------
// Elves
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerElves
	HeroTemplateName = ElvenThranduil
	PlayerArmy = ThranduilPlayerArmy
	Icon = HeroThranduilIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerElves
	HeroTemplateName = ElvenElrond
	PlayerArmy = ElrondPlayerArmy
	Icon = HeroElrondIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerElves
	HeroTemplateName = ElvenHaldir
	PlayerArmy = HaldirPlayerArmy
	Icon = HeroHaldirIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerElves
	PlayerArmy = Elven_StartingArmy
	Icon = ElfArmyIcon
End


//-------------------------------------------------------------------------------------------------
// Dwarves
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenGimli
	PlayerArmy = GimliPlayerArmy
	Icon = HeroGimliIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenDain
	PlayerArmy = DainPlayerArmy
	Icon = HeroDainIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenGloin
	PlayerArmy = GloinPlayerArmy
	Icon = HeroGloinIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = Dwarven_StartingArmy
	Icon = DwarfArmyIcon
End


//-------------------------------------------------------------------------------------------------
// Mordor
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorWitchKingOnFellBeast
	PlayerArmy = WitchKingPlayerArmy
	Icon = HeroWitchKingIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorFellBeast
	PlayerArmy = FellBeast1PlayerArmy
	Icon = HeroFellBeast1Icon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorFellBeast
	PlayerArmy = FellBeast2PlayerArmy
	Icon = HeroFellBeast2Icon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End


//-------------------------------------------------------------------------------------------------
// Isengard
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerIsengard
	HeroTemplateName = IsengardSaruman
	PlayerArmy = SarumanPlayerArmy
	Icon = HeroSarumanIcon
	Banner = BannerIsengard
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerIsengard
	HeroTemplateName = IsengardLurtz
	PlayerArmy = LurtzPlayerArmy
	Icon = HeroLurtzIcon
	Banner = BannerIsengard
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerIsengard
	HeroTemplateName = IsengardSharku
	PlayerArmy = SharkuPlayerArmy
	Icon = HeroSharkuIcon
	Banner = BannerIsengard
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerIsengard
	PlayerArmy = Isengard_StartingArmy
	Icon = IsengardArmyIcon
End


//-------------------------------------------------------------------------------------------------
// Wild
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerWild
	HeroTemplateName = Drogoth
	PlayerArmy = DrogothPlayerArmy
	Icon = HeroDrogothIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerWild
	HeroTemplateName = WildShelob
	PlayerArmy = ShelobPlayerArmy
	Icon = HeroShelobIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerWild
	HeroTemplateName = WildGoblinKing
	PlayerArmy = GorkilPlayerArmy
	Icon = HeroGorkilIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerWild
	PlayerArmy = CorruptedWild_StartingArmy
	Icon = WildArmyIcon
End