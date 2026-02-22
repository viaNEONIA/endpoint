class CfgPatches
{
	class HardcoreClothing_Override58
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
	
	// ピーマン
	class GreenBellPepper: Edible_Base
	{
		// 1x2 から 1x1 へ。
		// 野菜類もコンパクトに整理され、パズル性が向上。
		itemSize[]={1,2};
	};
};