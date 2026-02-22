class CfgPatches
{
	class HardcoreClothing_Override11
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
	class BDUPants_ColorBase; // ベースクラスを宣言
	
	// BDUパンツの容量を制限
	class BDUPants: BDUPants_ColorBase
	{
		// 横4、縦1の計4マスに変更
		// これにより、大きなアイテム（ライフル用マガジンなど）が入らなくなります
		itemsCargoSize[]={4,1};
	};
};