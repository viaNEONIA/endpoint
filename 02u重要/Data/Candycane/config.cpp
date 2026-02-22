class CfgPatches
{
	class HardcoreClothing_Override21 // 番号を更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food" // 食べ物全般のベースデータを読み込む
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// キャンディケイン（全色のベースクラス）
	class Candycane_Colorbase: Edible_Base
	{
		// 1x2 から 1x1 に変更
		itemSize[]={1,1};
	};
};