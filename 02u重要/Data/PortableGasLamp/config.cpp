class CfgPatches
{
	class HardcoreClothing_Override113
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Camping" // ランプなどのキャンプ用品
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ポータブルガスランプ
	class PortableGasLamp: Inventory_Base
	{
		// 2x3 から 2x2（4マス）へ。
		// これにより、あなたの世界の「大容量ポケット」である
		// 2x2 スロットを持つパンツ（ハンティングパンツ等）なら
		// すっぽりと収めることが可能になります。
		itemSize[]={2,2};
	};
};