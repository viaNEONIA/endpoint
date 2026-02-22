class CfgPatches
{
	class HardcoreClothing_Override64
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
	
	// ハチミツ
	class Honey: Edible_Base
	{
		// 2x2 から 1x1 へ小型化。
		// 非常にエネルギー効率の良い 1x1 アイテムとして重宝されます。
		itemSize[]={2,2};
	};
};