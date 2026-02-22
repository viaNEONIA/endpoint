class CfgPatches
{
	class HardcoreClothing_Override14
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical" // 医療品データの読み込みを保証
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// IVライン付き血液バッグ
	class BloodBagIV: Inventory_Base
	{
		// 2x2 から 1x2 へ変更
		itemSize[]={1,2};
	};
};