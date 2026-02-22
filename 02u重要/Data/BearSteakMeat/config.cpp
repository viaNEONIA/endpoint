class CfgPatches
{
	class HardcoreClothing_Override12
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food" // 肉類のデータを確実に読み込む
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// クマの肉を 2x3 から 1x2 に小型化
	class BearSteakMeat: Edible_Base
	{
		itemSize[]={2,3};
	};
};
