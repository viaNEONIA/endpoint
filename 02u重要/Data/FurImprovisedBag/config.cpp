class CfgPatches
{
	class HardcoreClothing_Override52 // 番号を52に更新
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
	
	// 毛皮の即席バックパック（クーリエバッグのアップグレード版）
	class FurImprovisedBag: Clothing
	{
		// 本体を 4x5 に設定（クーリエより1マス縦に大きく、かさばる）
		itemSize[]={4,5};
		// 容量は 16マス（4x4）に制限
		itemsCargoSize[]={4,4};
	};
};