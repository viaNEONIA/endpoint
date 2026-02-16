class CfgPatches
{
	class Comprehensive_Item_Tweak
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Tops",
			"DZ_Characters_Pants",
			"DZ_Characters_Vests",
			"DZ_Characters_Headgear",
			"DZ_Gear_Food",
			"DZ_Gear_Medical",
			"DZ_Gear_Tools",
			"DZ_Gear_Camping",
			"DZ_Gear_Construction",
			"DZ_Gear_Containers",
			"DZ_Gear_Drinks",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Melee",
			"DZ_Vehicles_Parts"
		};
	};
};

class CfgVehicles
{
	/* --- 1. バックパック (Backpacks) --- */
	class AliceBag_ColorBase;
	class AliceBag_ColorBase { itemSize[] = {4, 4}; itemsCargoSize[] = {10, 10}; };
	class FieldBag_ColorBase;
	class FieldBag_ColorBase { itemSize[] = {4, 5}; itemsCargoSize[] = {10, 15}; };
	class TortillaBag;
	class TortillaBag { itemSize[] = {4, 4}; itemsCargoSize[] = {8, 10}; };

	/* --- 2. 衣服 (Clothing: Tops & Pants) --- */
	class CargoPants_ColorBase;
	class CargoPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {8, 1}; };
	class BDUPants;
	class BDUPants { itemSize[] = {3, 2}; itemsCargoSize[] = {6, 1}; };
	class CanvasPants_ColorBase;
	class CanvasPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class FirefightersPants_ColorBase;
	class FirefightersPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class GorkaPants_ColorBase;
	class GorkaPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class JumpsuitPants_ColorBase;
	class JumpsuitPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class LeatherPants_ColorBase;
	class LeatherPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };	
	class HunterPants_ColorBase;
	class HunterPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };		
	class Jeans_ColorBase;
	class Jeans_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };	
	class MedicalScrubsPants_ColorBase;
	class MedicalScrubsPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };	
	class NBCPantsBase;
	class NBCPantsBase { itemSize[] = {3, 2}; itemsCargoSize[] = {2, 1}; };
	class ParamedicPants_ColorBase;
	class ParamedicPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class PolicePants;
	class PolicePants { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class PrisonUniformPants;
	class PrisonUniformPants { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class ShortJeans_ColorBase;
	class ShortJeans_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class Skirt_ColorBase;
	class Skirt_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class SlacksPants_ColorBase;
	class SlacksPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class TrackSuitPants_ColorBase;
	class TrackSuitPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class TTSKOPants;
	class TTSKOPants { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; }; // 修正: ループ削除
	class USMCPants_ColorBase;
	class USMCPants_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };

	/* --- Jacket (Jacket) --- */
	class M65Jacket_ColorBase;
	class M65Jacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {8, 1}; };
	class BDUJacket;
	class BDUJacket { itemSize[] = {3, 2}; itemsCargoSize[] = {8, 1}; }; // 修正: ループ削除
	class Blouse_ColorBase;
	class Blouse_ColorBase { itemSize[] = {2, 2}; itemsCargoSize[] = {2, 1}; };
	class BomberJacket_ColorBase;
	class BomberJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class ChernarusSportShirt;
	class ChernarusSportShirt { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class DenimJacket;
	class DenimJacket { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class FirefighterJacket_ColorBase;
	class FirefighterJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {6, 1}; };
	class GorkaEJacket_ColorBase;
	class GorkaEJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {8, 1}; };
	class HikingJacket_ColorBase;
	class HikingJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {5, 1}; };
	class Hoodie_ColorBase;
	class Hoodie_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class HuntingJacket_ColorBase;
	class HuntingJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {6, 1}; };
	class JumpsuitJacket_ColorBase;
	class JumpsuitJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class LabCoat;
	class LabCoat { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class LeatherJacket_ColorBase;
	class LeatherJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {5, 1}; };
	class LeatherShirt_ColorBase;
	class LeatherShirt_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class ManSuit_ColorBase;
	class ManSuit_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class MedicalScrubsShirt_ColorBase;
	class MedicalScrubsShirt_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class NBCJacketBase;
	class NBCJacketBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class NurseDress_ColorBase;
	class NurseDress_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class ParamedicJacket_ColorBase;
	class ParamedicJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class PoliceJacket;
	class PoliceJacket { itemSize[] = {3, 2}; itemsCargoSize[] = {5, 1}; };
	class PrisonUniformJacket;
	class PrisonUniformJacket { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class QuiltedJacket_ColorBase;
	class RickQuiltedJacket_ColorBase; // 必要な場合のみ
	class QuiltedJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {4, 1}; };
	class Raincoat_ColorBase;
	class Raincoat_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class RidersJacket_ColorBase;
	class RidersJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class Shirt_ColorBase;
	class Shirt_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {2, 1}; };
	class Sweater_ColorBase;
	class Sweater_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class TacticalShirt_ColorBase;
	class TacticalShirt_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class TelnyashkaShirt;
	class TelnyashkaShirt { itemSize[] = {3, 2}; itemsCargoSize[] = {2, 1}; };
	class TrackSuitJacket_ColorBase;
	class TrackSuitJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class TShirt_ColorBase;
	class TShirt_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class TTsKOJacket_ColorBase;
	class TTsKOJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class USMCJacket_ColorBase;
	class USMCJacket_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {8, 1}; };
	class WomanSuit_ColorBase;
	class WomanSuit_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };
	class WoolCoat_ColorBase;
	class WoolCoat_ColorBase { itemSize[] = {3, 2}; itemsCargoSize[] = {3, 1}; };

	/* --- 3. ベスト (Vests) --- */
	class PlateCarrierVest;
	class PlateCarrierVest { itemSize[] = {4, 4}; itemsCargoSize[] = {8, 1}; weight = 12000; };
	class HighCapacityVest_ColorBase;
	class HighCapacityVest_ColorBase { itemSize[] = {3, 3}; itemsCargoSize[] = {10, 1}; };
	class HuntingVest;
	class HuntingVest { itemSize[] = {3, 3}; itemsCargoSize[] = {8, 1}; };
	class UKAssVest_ColorBase;
	class UKAssVest_ColorBase { itemSize[] = {3, 3}; itemsCargoSize[] = {10, 1}; };
	class SmershVest;
	class SmershVest { itemSize[] = {3, 3}; itemsCargoSize[] = {8, 1}; };
	class PressVest_ColorBase;
	class PressVest_ColorBase { itemSize[] = {3, 3}; itemsCargoSize[] = {4, 1}; };
	class LeatherStorageVest_ColorBase;
	class LeatherStorageVest_ColorBase { itemSize[] = {3, 3}; itemsCargoSize[] = {6, 1}; };

	/* --- 4. コンテナ・建築 (Containers & Camping) --- */
	class AmmoBox;
	class AmmoBox { itemSize[] = {2, 2}; itemsCargoSize[] = {6, 6}; };
	class SeaChest;
	class SeaChest { itemSize[] = {8, 4}; itemsCargoSize[] = {10, 15}; };
	class Barrel_ColorBase; // 宣言
	class Barrel_Blue;
	class Barrel_Blue: Barrel_ColorBase { itemSize[] = {8, 10}; itemsCargoSize[] = {10, 20}; }; // 継承を明示
	class MediumTent;
	class MediumTent { itemSize[] = {2, 10}; itemsCargoSize[] = {10, 20}; };

	/* --- 5. 食料 (Food) --- */
	class UnknownFoodCan;
	class UnknownFoodCan { itemSize[] = {1, 1}; };
	class BakedBeansCan;
	class BakedBeansCan { itemSize[] = {1, 1}; };
	class BakedBeansCan_Opened;
	class BakedBeansCan_Opened { itemSize[] = {1, 1}; };
	class Banana;
	class Banana { itemSize[] = {2, 1}; };
	class BearSteakMeat;
	class BearSteakMeat { itemSize[] = {1, 2}; };
	class BoxCerealCrunchin;
	class BoxCerealCrunchin { itemSize[] = {1, 2}; };
	class Candycane_Colorbase;
	class Candycane_Colorbase { itemSize[] = {1, 2}; };
	class CowSteakMeat;
	class CowSteakMeat { itemSize[] = {1, 2}; };
	class FoodCan_250g_ColorBase;
	class FoodCan_250g_ColorBase { itemSize[] = {1, 1}; };
	class FoodCan_250g_Opened_ColorBase;
	class FoodCan_250g_Opened_ColorBase { itemSize[] = {1, 1}; };
	class GreenBellPepper;
	class GreenBellPepper { itemSize[] = {1, 1}; };
	class Honey;
	class Honey { itemSize[] = {1, 1}; };
	class HumanSteakMeat;
	class HumanSteakMeat { itemSize[] = {1, 2}; };
	class Lard;
	class Lard { itemSize[] = {1, 2}; }; // 修正: ループ削除
	class Marmalade;
	class Marmalade { itemSize[] = {1, 1}; };
	class MushroomBase;
	class MushroomBase { itemSize[] = {1, 1}; };
	class PeachesCan;
	class PeachesCan { itemSize[] = {1, 1}; };
	class PeachesCan_Opened;
	class PeachesCan_Opened { itemSize[] = {1, 1}; };
	class Pear;
	class Pear { itemSize[] = {1, 1}; };
	class Potato;
	class Potato { itemSize[] = {1, 1}; }; // 修正: ループ削除
	class PowderedMilk;
	class PowderedMilk { itemSize[] = {1, 2}; };
	class Rice;
	class Rice { itemSize[] = {1, 2}; }; // 修正: ループ削除
	class SardinesCan;
	class SardinesCan { itemSize[] = {1, 1}; };
	class SardinesCan_Opened;
	class SardinesCan_Opened { itemSize[] = {1, 1}; };
	class Snack_ColorBase; 
	class Snack_ColorBase { itemSize[] = {1, 1}; };
	class SpaghettiCan; 
	class SpaghettiCan { itemSize[] = {1, 1}; };
	class TacticalBaconCan; 
	class TacticalBaconCan { itemSize[] = {1, 1}; };
	class TacticalBaconCan_Opened; 
	class TacticalBaconCan_Opened { itemSize[] = {1, 1}; };
	class WaterPouch_ColorBase; 
	class WaterPouch_ColorBase { itemSize[] = {1, 1}; };
	class Zagorky_ColorBase; 
	class Zagorky_ColorBase { itemSize[] = {1, 1}; };
	class Zucchini; 
	class Zucchini { itemSize[] = {1, 1}; };
	class SodaCan_ColorBase; 
	class SodaCan_ColorBase { itemSize[] = {1, 1}; };
	class WaterBottle; 
	class WaterBottle { itemSize[] = {1, 2}; };

	/* ---医療 (Medical) --- */
	class BandageDressing;
	class BandageDressing { itemSize[] = {1, 2}; };
	class FirstAidKit;
	class FirstAidKit { itemSize[] = {2, 2}; itemsCargoSize[] = {4, 4}; };

	/* --- 6. ツール・ライト (Tools & Gadgets) --- */
	class Shovel;
	class Shovel { itemSize[] = {1, 5}; };
	class NVGoggles;
	class NVGoggles { itemSize[] = {1, 1}; };
};