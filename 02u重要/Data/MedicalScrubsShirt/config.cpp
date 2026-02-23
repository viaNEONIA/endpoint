class CfgPatches
{
	class HardcoreClothing_Override92
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Tops"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// メディカルスクラブシャツ（全カラー共通）
	class MedicalScrubsShirt_ColorBase: Clothing
	{
		// 12マス（4x3）から 2x1（横長2マス）へ。
		// スクラブ特有の大きな腰ポケットに、
		// 1x1 の包帯やロックピックを2つ横に並べて入れるイメージですね。
		itemsCargoSize[]={2,1};
	};
};