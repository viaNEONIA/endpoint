class CfgPatches
{
	class HardcoreClothing_Override32
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
	
	// クーリアバッグ（麻袋とロープで作成するバッグ）
	class CourierBag: Clothing
	{
		// 本体を 3x3 から 4x4 に拡大（かさばるように設定）
		itemSize[]={4,4};
		// 容量を 12マス から 16マス（4x4）へ微増
		itemsCargoSize[]={4,4};
	};
};