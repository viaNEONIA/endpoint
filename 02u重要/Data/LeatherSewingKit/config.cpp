class CfgPatches
{
	class HardcoreClothing_Override82
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools" // 通常、道具類はこのアドオンに含まれます
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// レザーソーイングキット（皮細工用修復キット）
	class LeatherSewingKit: Inventory_Base
	{
		// 1x3 から 1x2 へ。
		// これにより、先ほど調整したレザーパンツ(2x1)のポケットに
		// 横向き（2x1）にしてぴったり収まるようになりました。
		// 「自分の服を直すための道具を、その服のポケットに忍ばせる」というリアリズム！
		itemSize[]={1,3};
	};
};