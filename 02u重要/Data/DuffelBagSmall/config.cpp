class CfgPatches
{
	class HardcoreClothing_Override40
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// ダッフルバッグ（Sサイズ / 全カラー共通）
	class DuffelBagSmall_ColorBase: Clothing
	{
		// 本体を 4x4 から 5x4 に変更。横長な形状を反映。
		itemSize[]={5,4};
		// 容量を 20マス から 16マス（4x4）に制限。
		itemsCargoSize[]={4,4};
	};
};