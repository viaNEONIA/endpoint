class CfgPatches
{
	class HardcoreClothing_Override18 // 重複を避けるため番号を更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants" // パンツ類のデータを確実に読み込む
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// ブリーチズ（乗馬ズボン）のベースクラス
	class Breeches_ColorBase: Clothing
	{
		// 12マスから 2x1（2マス）へ大幅にカット
		itemsCargoSize[]={2,1};
	};
};
