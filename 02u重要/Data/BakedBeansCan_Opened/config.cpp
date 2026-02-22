class CfgPatches
{
	class HardcoreClothing_Override7
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food" // 食べ物関連のデータを読み込むために推奨
		};
	};
};

class CfgVehicles
{
	// 親クラスの宣言
	class BakedBeansCan; 

	// 開封済みのベイクドビーンズ
	class BakedBeansCan_Opened: BakedBeansCan
	{
		// 1x2 から 1x1 に変更
		itemSize[]={1,1};
	};
};