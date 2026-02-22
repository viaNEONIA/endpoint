class CfgPatches
{
	class HardcoreClothing_Override17
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food" // シリアルなどの食品データを確実に上書きするために追加
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// クランチー・シリアル
	class BoxCerealCrunchin: Edible_Base
	{
		// 3x4 から 1x2 へ大幅にスリム化
		itemSize[]={2,2};
	};
};
