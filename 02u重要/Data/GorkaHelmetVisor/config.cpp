class CfgPatches
{
	class HardcoreClothing_Override56
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Headgear" // ヘルメットパーツの定義場所
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ゴルカヘルメット用バイザー
	class GorkaHelmetVisor: Inventory_Base
	{
		// 2x1 にスリム化。
		// 先ほどのゴルカジャケット（1x5）には入りませんが、
		// 消防士パンツ（4x1）なら予備として2枚横並びに収まるサイズです。
		itemSize[]={3,2};
	};
};