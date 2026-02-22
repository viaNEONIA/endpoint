class CfgPatches
{
	class HardcoreClothing_Override22
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks" // バックパック類のデータを確実に読み込む
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// キャンバスバッグ（全カラーのベース）
	class CanvasBag_ColorBase: Clothing
	{
		// バッグ自体の占有サイズを 3x3 から 5x4（20マス）に拡大
		itemSize[]={5,4};
		// 内部容量を 5x4(20) から 5x5(25マス) に増加
		itemsCargoSize[]={5,5};
	};
};