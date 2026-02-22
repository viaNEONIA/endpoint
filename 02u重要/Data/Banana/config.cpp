class CfgPatches
{
	class HardcoreClothing_Override8
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food" // 果物や野菜のデータを確実に読み込む
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// バナナを1x1にコンパクト化
	class Banana: Edible_Base
	{
		itemSize[]={1,2};
	};
};