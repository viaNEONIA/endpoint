class CfgPatches
{
	class HardcoreClothing_Override95
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Crafting" // 針金などのクラフト材料系
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 針金
	class MetalWire: Inventory_Base
	{
		// 1x2 から 2x1（横長2マス）へ。
		// これにより、レザーシャツ(1x2)の「縦長ポケット」には入らず、
		// レザージャケット(2x1)やスクラブ上下(2x1)の「横長ポケット」には
		// 完璧にフィットするという、装備ごとの相性が生まれました。
		itemSize[]={2,1};
	};
};