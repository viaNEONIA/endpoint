class CfgPatches
{
	class HardcoreClothing_Override13
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical" // 医療品の読み込みを優先
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 採血済みの血液バッグ（全血液型共通）
	class BloodBagFull: Inventory_Base
	{
		// 2x2 から 1x2 に変更
		itemSize[]={2,2};
	};
};