class CfgPatches
{
	class MyCombinedItemsMod
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		// 変更したいアイテムが含まれるすべての公式PBOを指定する
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Gear_Containers", // 弾薬箱用
			"DZ_Gear_Food",       // 缶詰用
			"DZ_Characters_Backpacks" // バックパック用
		};
	};
};

class CfgVehicles
{
	// --- 1. 弾薬箱の設定 ---
	class Container_Base;
	class AmmoBox: Container_Base
	{
		itemSize[] = {4, 4};
		itemsCargoSize[] = {5, 5};
		weight = 25000;
	};

	// --- 2. 缶詰の設定 ---
	class UnknownFoodCan;
	class UnknownFoodCan_Modified: UnknownFoodCan
	{
		itemSize[] = {1, 1};
		weight = 200;
	};

	// --- 3. バックパックの設定 (例) ---
	class TacticalBag_ColorBase;
	class TacticalBag_Black: TacticalBag_ColorBase
	{
		// 外見のサイズを小さくして、中身をめちゃくちゃ広くする例
		itemSize[] = {2, 2}; 
		itemsCargoSize[] = {10, 15}; 
	};
};