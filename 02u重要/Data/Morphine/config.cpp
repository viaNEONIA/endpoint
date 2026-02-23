class CfgPatches
{
	class HardcoreClothing_Override97
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical" // 医療品アドオン
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// モルヒネ（自動注射器）
	class Morphine: Inventory_Base
	{
		// 1x2 から 1x1 へ。
		// これにより、さきほど調整した「ミニドレス(1x1)」や
		// 「ジーンズ(1x1)」の唯一のスロットにも収まります。
		// どんな格好をしていても、これ一本だけは懐に忍ばせておける...
		// まさに「最後の希望」としてのサイズ感です。
		itemSize[]={1,1};
	};
};