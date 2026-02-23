class CfgPatches
{
	class HardcoreClothing_Override90
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
	
	// ミートテンダライザー（肉叩き）
	class MeatTenderizer: Inventory_Base
	{
		// 2x3（6マス）から 1x2（2マス）へ大幅縮小。
		// 鈍器としての破壊力を持ちつつ、
		// レザーシャツ(1x2)やマンスーツ(1x2)の縦長ポケットに
		// スッと差し込める「隠し武器」のような運用が可能になりました。
		itemSize[]={2,2};
	};
};