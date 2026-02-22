class CfgPatches
{
	class HardcoreClothing_Override23
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants" // パンツ類のデータを確実に上書き
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// キャンバスパンツ（全カラーのベースクラス）
	class CanvasPants_ColorBase: Clothing
	{
		// 12マスから 2x1（2マス）へ大幅にカット
		itemsCargoSize[]={4,1};
	};
};