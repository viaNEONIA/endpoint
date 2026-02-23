class CfgPatches
{
	class HardcoreClothing_Override91
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Pants"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// メディカルスクラブパンツ（全カラー共通）
	class MedicalScrubsPants_ColorBase: Clothing
	{
		// 12マスから 2x1（2マス）へ。
		// 薄手の生地であるスクラブに重いものは入れられない、という
		// 医療従事者のリアルな装備感です。
		itemsCargoSize[]={2,1};
	};
};