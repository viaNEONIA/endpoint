class CfgPatches
{
	class HardcoreClothing_Override9
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical" // 医療品データを優先的に読み込む
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 軍用包帯（BandageDressing）
	class BandageDressing: Inventory_Base
	{
		// 1x2 から 1x1 にコンパクト化
		itemSize[]={1,2};
	};
};