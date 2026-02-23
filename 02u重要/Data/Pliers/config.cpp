class CfgPatches
{
	class HardcoreClothing_Override108
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Crafting" // ペンチなどの工具系
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ペンチ
	class Pliers: Inventory_Base
	{
		// 1x3 から 1x2（縦長2マス）へ。
		// これにより、レザージャケット(2x1)には入りませんが、
		// レザーシャツ(1x2)の縦長スロットには完璧に収まります。
		// 「どの工具を、どの服のポケットで運ぶか」という
		// 職人的なこだわりが試されるサイズ感です。
		itemSize[]={1,2};
	};
};