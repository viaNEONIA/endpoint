class CfgPatches
{
	class Comprehensive_Item_Tweak
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		/* ほぼすべての公式アイテムデータを読み込む設定 */
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
	class AliceBag_Green: AliceBag_ColorBase { itemSize[] = {4, 4}; itemsCargoSize[] = {10, 10}; };
	class FieldBag_ColorBase;
	class FieldBag_Green: FieldBag_ColorBase { itemSize[] = {4, 5}; itemsCargoSize[] = {10, 15}; };
	class TortillaBag;
	class TortillaBag: TortillaBag { itemSize[] = {4, 4}; itemsCargoSize[] = {8, 10}; };

	/* --- 2. 衣服 (Clothing: Tops & Pants) --- */
	class M65Jacket_ColorBase;
	class M65Jacket_Black: M65Jacket_ColorBase { itemSize[] = {2, 2}; itemsCargoSize[] = {6, 7}; };
	class CargoPants_ColorBase;
	class CargoPants_Beige: CargoPants_ColorBase { itemSize[] = {2, 2}; itemsCargoSize[] = {6, 5}; };
	class BDUJacket;
	class BDUJacket: BDUJacket { itemSize[] = {2, 2}; itemsCargoSize[] = {6, 6}; };

	/* --- 3. ベスト (Vests) --- */
	class PlateCarrierVest;
	class PlateCarrierVest: PlateCarrierVest { itemSize[] = {4, 4}; itemsCargoSize[] = {5, 2}; weight = 12000; };
	class HighCapacityVest_ColorBase;
	class HighCapacityVest_Olive: HighCapacityVest_ColorBase { itemSize[] = {3, 3}; itemsCargoSize[] = {8, 8}; };

	/* --- 4. コンテナ・建築 (Containers & Camping) --- */
	class AmmoBox;
	class AmmoBox: AmmoBox { itemSize[] = {2, 2}; itemsCargoSize[] = {6, 6}; };
	class SeaChest;
	class SeaChest: SeaChest { itemSize[] = {8, 4}; itemsCargoSize[] = {10, 15}; };
	class Barrel_ColorBase;
	class Barrel_Blue: Barrel_ColorBase { itemSize[] = {8, 10}; itemsCargoSize[] = {10, 20}; };
	class MediumTent;
	class MediumTent: MediumTent { itemSize[] = {2, 10}; itemsCargoSize[] = {10, 20}; };

	/* --- 5. 食料・医療 (Food & Medical) --- */
	class UnknownFoodCan;
	class UnknownFoodCan: UnknownFoodCan { itemSize[] = {1, 1}; };
	class BandageDressing;
	class BandageDressing: BandageDressing { itemSize[] = {1, 1}; };
	class FirstAidKit;
	class FirstAidKit: FirstAidKit { itemSize[] = {2, 2}; itemsCargoSize[] = {4, 4}; };

	/* --- 6. ツール・ライト (Tools & Gadgets) --- */
	class Shovel;
	class Shovel: Shovel { itemSize[] = {1, 5}; };
	class NVGoggles;
	class NVGoggles: NVGoggles { itemSize[] = {1, 1}; };
};