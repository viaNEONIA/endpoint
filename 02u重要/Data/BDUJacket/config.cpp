class CfgPatches
{
	class HardcoreClothing_Override10
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops" // ジャケット類のデータを確実に読み込む
		};
	};
};

class CfgVehicles
{
	class BDUJacket_ColorBase; // ベースクラスを宣言
	
	// BDUジャケットの容量を変更
	class BDUJacket: BDUJacket_ColorBase
	{
		// 横4、縦1の計4マスに変更
		itemsCargoSize[]={4,1};
	};
};
