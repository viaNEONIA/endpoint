class CfgPatches
{
	class HardcoreClothing_Override70
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools" // アイスアックス等のツール類
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// アイスアックス（ピッケル）
	class Iceaxe: Inventory_Base
	{
		// 3x1 にスリム化。
		// 以前調整した「ハンティングベスト（6x1）」なら、
		// これを2本横に並べて収納できる、プロ仕様のサイズ感です。
		itemSize[]={3,2};
	};
};