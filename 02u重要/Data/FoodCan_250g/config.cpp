class CfgPatches
{
	class HardcoreClothing_Override48 // 番号を48に更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food"
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// 250g缶（ベイクドビーンズ、ピーチ缶など）
	class FoodCan_250g_ColorBase: Edible_Base
	{
		// 1x1に小型化。隙間に詰め込める非常食に。
		itemSize[]={1,1};
	};
};