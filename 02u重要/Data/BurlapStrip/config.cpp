class CfgPatches
{
	class HardcoreClothing_Override19
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Crafting" // 材料・クラフト系データを優先読み込み
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 麻布の端切れ（Burlap Strip）
	class BurlapStrip: Inventory_Base
	{
		// 1x1 から 2x1（横長）に変更
		itemSize[]={1,1};
	};
};
