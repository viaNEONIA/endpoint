class CfgPatches
{
	class HardcoreClothing_Override99
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food" // キノコや野生採集物のアドオン
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// キノコ（全種類。Baseクラスへの適用により一括変更）
	class MushroomBase: Edible_Base
	{
		// 1x2 から 1x1 へ。
		// これにより、最も容量の少ない服でも「現地調達した食料」を
		// 1つだけは持ち運べるようになります。
		// 森を歩き、1x1 のスペースをキノコで埋めるか、
		// モルヒネ(1x1)のために空けておくか、究極の選択です。
		itemSize[]={1,1};
	};
};