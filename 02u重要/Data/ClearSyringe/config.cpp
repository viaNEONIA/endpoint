class CfgPatches
{
	class HardcoreClothing_Override30
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical" // 医療品データを確実に上書き
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 未使用の注射器
	class ClearSyringe: Inventory_Base
	{
		// 1x2 から 1x1 へ小型化
		itemSize[]={1,1};
	};
};