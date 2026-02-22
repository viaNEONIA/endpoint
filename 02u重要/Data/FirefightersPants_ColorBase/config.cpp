class CfgPatches
{
	class HardcoreClothing_Override44
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// 消防士のパンツ（全カラー共通）
	class FirefightersPants_ColorBase: Clothing
	{
		// 12マスから 4x1（4マス）へ制限。
		// 横長の設定により、1x1の小物を4つ、あるいは2x1の道具を2つ収納可能に。
		itemsCargoSize[]={4,1};
	};
};