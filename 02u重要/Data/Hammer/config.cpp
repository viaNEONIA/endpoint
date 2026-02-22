class CfgPatches
{
	class HardcoreClothing_Override59
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools" // ハンマー等の工具類が含まれるアドオン
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ハンマー
	class Hammer: Inventory_Base
	{
		// 1x3 から 1x2 へスリム化。
		// 縦長ポーチや、ジャケット（1x2）のメインスロットにジャストフィット。
		itemSize[]={1,3};
	};
};