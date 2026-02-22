class CfgPatches
{
	class HardcoreClothing_Override42
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical" // エピネフリンなどの医療品を確実に上書き
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// エピネフリン（オートインジェクター）
	class Epinephrine: Inventory_Base
	{
		// 1x2 から 1x1 へ小型化
		itemSize[]={1,1};
	};
};