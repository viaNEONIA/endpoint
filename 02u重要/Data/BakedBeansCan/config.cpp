class CfgPatches
class CfgPatches
{
	class HardcoreClothing_Override6
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food" // 食べ物のデータを確実に読み込むために追加
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// ベイクドビーンズの缶
	class BakedBeansCan: Edible_Base
	{
		// 1x2 から 1x1 に変更
		itemSize[]={1,1};
	};
};