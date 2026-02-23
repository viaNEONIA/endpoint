class CfgPatches
{
	class HardcoreClothing_Override75
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// キッチンナイフ
	class KitchenKnife: Inventory_Base
	{
		// 1x3 から 1x2 へ。
		// わずか1マスの差ですが、ジャンプスーツパンツ(2x1)のポケットに
		// 横向き（2x1）なら収まる、というパズル的な面白さが生まれます。
		itemSize[]={1,3};
	};
};