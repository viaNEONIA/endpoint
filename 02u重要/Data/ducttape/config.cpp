class CfgPatches
{
	class HardcoreClothing_Override39
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools" // ダクトテープなどのツール類が含まれるデータを指定
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ダクトテープ
	class DuctTape: Inventory_Base
	{
		// 1x2 から 1x1 にコンパクト化
		itemSize[]={1,1};
	};
};