class CfgPatches
{
	class HardcoreClothing_Override118
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
	
	// 粉ミルク
	class PowderedMilk: Edible_Base
	{
		// 1x2 から 1x1 へ。
		// 非常にカロリー密度の高いこのアイテムが1マスになったことは、
		// 究極のハードコア環境下では「命を繋ぐ最小の1ピース」としての
		// 価値をさらに高めることになります。
		itemSize[]={1,2};
	};
};