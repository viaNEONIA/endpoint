class CfgPatches
{
	class HardcoreClothing_Override117
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
	
	// ジャガイモ
	class Potato: Edible_Base
	{
		// 1x2 から 1x1 へ。
		// この「1x1」化により、さきほど定義した
		// 鍋（内寸2x3）の隙間にコロコロと詰め込めるようになります。
		// スペース効率の鬼になれますね。
		itemSize[]={1,2};
	};
};