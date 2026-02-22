class CfgPatches
{
	class HardcoreClothing_Override57
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
	
	// ゴルカパンツ（全カラー共通）
	class GorkaPants_ColorBase: Clothing
	{
		// 12マス（4x3）から 4マス（4x1）へ制限。
		// 1x1のアイテム（包帯、缶詰、エピネフリン）を4つ横に並べるパズル。
		itemsCargoSize[]={6,1};
	};
};