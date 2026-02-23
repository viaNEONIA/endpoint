class CfgPatches
{
	class HardcoreClothing_Override78
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Cooking" // ガスボンベ類はCookingに含まれることが多いです
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 大型ガスボンベ
	class LargeGasCanister: Inventory_Base
	{
		// バニラの巨大なサイズから 2x1 へ大幅縮小。
		// これにより、ジャンプスーツジャケット(2x1)のポケットに
		// まるごと燃料缶を突っ込めるという、シュールかつ機能的な収納が可能に。
		itemSize[]={2,2};
	};
};