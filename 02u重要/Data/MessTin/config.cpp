class CfgPatches
{
	class HardcoreClothing_Override94
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Cooking"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 飯盒（メスティン）
	class MessTin: Inventory_Base
	{
		// 3x3 から 2x2（4マス）へ。
		// 正方形の 2x2 というサイズは、M65ジャケット(4x1)には入りませんが、
		// レザーサック(5x5)の中では「隅に置ける便利な箱」になります。
		itemSize[]={3,3};
	};
};