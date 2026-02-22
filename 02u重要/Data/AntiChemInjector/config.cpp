class CfgPatches
{
	class HardcoreClothing_Override3
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical" // 医療品データを読み込み順に指定
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// AntiChemInjectorの親クラスであるInventory_Baseを継承
	class AntiChemInjector: Inventory_Base
	{
		// サイズを1x2から1x1に変更
		itemSize[]={1,1};
	};
};