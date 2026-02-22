class CfgPatches
{
	class HardcoreClothing_Override47 // 番号を47に更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools" // 懐中電灯などのツール類
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 懐中電灯
	class Flashlight: Inventory_Base
	{
		// 1x3 から 2x1 へ。
		// ポケットの横幅を活かした収納が可能に。
		itemSize[]={1,2};
	};
};