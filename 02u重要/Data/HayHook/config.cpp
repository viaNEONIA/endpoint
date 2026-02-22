class CfgPatches
{
	class HardcoreClothing_Override61
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ヘイフック（干し草用フック）
	class HayHook: Inventory_Base
	{
		// 2x2 から 2x1 へ。
		// 薄くなったことで、ベルトやパンツの横長スロットへの収まりが改善。
		itemSize[]={2,1};
	};
};