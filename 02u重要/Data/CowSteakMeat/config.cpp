class CfgPatches
{
	class HardcoreClothing_Override33
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food" // 生肉などの食品データを確実に上書き
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// 牛のステーキ肉
	class CowSteakMeat: Edible_Base
	{
		// 1x2 から 1x1 に小型化
		itemSize[]={1,3};
	};
};