class CfgPatches
{
	class HardcoreClothing_Override66
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
	
	// ハンターパンツ（全カラー共通）
	class HunterPants_ColorBase: Clothing
	{
		// 15マスから 4x1（4マス）へ制限。
		// 1x1のハチミツ、ピーマン、ナイフ、包帯を1つずつ入れて満杯になるリアリティ。
		itemsCargoSize[]={4,1};
	};
};