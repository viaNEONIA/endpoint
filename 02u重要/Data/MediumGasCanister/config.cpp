class CfgPatches
{
	class HardcoreClothing_Override93
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
	
	// 中型ガスボンベ
	class MediumGasCanister: Inventory_Base
	{
		// 2x2（4マス）の正方形サイズ。
		// 大型(2x1)よりも面積を取るため、
		// 2x1のスロットしか持たない「白衣」や「スクラブ」のポケットには入りません。
		// 持ち運ぶには最低でも 4x1 の M65ジャケットや、バッグが必要になります。
		itemSize[]={2,2};
	};
};