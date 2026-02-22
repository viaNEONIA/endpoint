class CfgPatches
{
	class HardcoreClothing_Override45 // 番号を45に更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Cooking" // 薪や調理器具が含まれるアドオン
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 薪（薪割り後のアイテム）
	class Firewood: Inventory_Base
	{
		// 縦長から 2x2 に変更。
		// 持ち運びやすくなる一方で、インベントリの「面」を占有する絶妙なサイズ感。
		itemSize[]={2,2};
	};
};