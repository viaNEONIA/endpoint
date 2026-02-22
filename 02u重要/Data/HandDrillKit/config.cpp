class CfgPatches
{
	class HardcoreClothing_Override60
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Cooking" // 着火具や調理関連のアドオン
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ハンドドリルキット（焚き火用）
	class HandDrillKit: Inventory_Base
	{
		// 1x3 から 2x1 へ。
		// 薄いポケットにも収まる、サバイバルの必需品。
		itemSize[]={2,1};
	};
};