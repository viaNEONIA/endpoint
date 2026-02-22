class CfgPatches
{
	class HardcoreClothing_Override27
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools" // ケミライトなどのツール類を確実に読み込む
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ケミライト（全色のベースクラス）
	class Chemlight_ColorBase: Inventory_Base
	{
		// 1x2 から 1x1 にコンパクト化
		itemSize[]={1,1};
	};
};
