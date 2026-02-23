class CfgPatches
{
	class HardcoreClothing_Override105
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food"
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// ピーチの缶詰
	class PeachesCan: Edible_Base
	{
		// 1x2 から 1x1 へ。
		// これにより、パラメディックパンツ(2x1)の片方のスロットに
		// ぴったりと収まるようになります。
		// 現場での貴重な糖分補給が、よりスマートに持ち運び可能になりました。
		itemSize[]={1,1};
	};
};