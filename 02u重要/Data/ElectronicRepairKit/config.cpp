class CfgPatches
{
	class HardcoreClothing_Override41
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools" // 修理キット類が含まれるツール系のアドオンを指定
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// 電子修理キット
	class ElectronicRepairKit: Inventory_Base
	{
		// 2x2 から 1x2 へスリム化。縦長のポーチにも収まりやすく。
		itemSize[]={1,2};
	};
};