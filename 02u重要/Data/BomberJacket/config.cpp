class CfgPatches
{
	class HardcoreClothing_Override16 // 既存のMODと分ける場合は番号を更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops" // ジャケット類を確実に上書きするために追加
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// ボンバージャケット（全カラーのベース）
	class BomberJacket_ColorBase: Clothing
	{
		// 容量を 4x3(12) から 2x1(2) に大幅カット
		itemsCargoSize[]={1,5};
	};
};
