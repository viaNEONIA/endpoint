class CfgPatches
{
	class HardcoreClothing_Override31
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Cooking" // 調理器具系データを確実に上書きするために指定
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// クッキングスタンド（三脚）
	class CookingStand: Inventory_Base
	{
		// 1x4 から 1x5 に延長。収納により高いバッグが必要に。
		itemSize[]={1,5};
	};
};