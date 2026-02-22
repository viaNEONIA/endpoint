class CfgPatches
{
	class HardcoreClothing_Override36
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical" // 除菌スプレーが含まれる医療・化学系データ
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// 除菌スプレー
	class DisinfectantSpray: Edible_Base
	{
		// 1x3 から 1x2 に一回りコンパクト化
		itemSize[]={1,2};
	};
};