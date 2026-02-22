class CfgPatches
{
	class HardcoreClothing_Override20
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Cooking" // 調理器具・ガス関係のデータを読み込む
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ガスカートリッジ
	class ButaneCanister: Inventory_Base
	{
		// 2x2 から 2x1 へコンパクト化
		itemSize[]={2,2};
	};
};