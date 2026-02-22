class CfgPatches
{
	class HardcoreClothing_Override51
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
	
	// 毛皮のクーリエバッグ（自作アイテム）
	class FurCourierBag: Clothing
	{
		// 本体を 4x4 に設定。
		itemSize[]={4,5};
		// 容量を 16マス（4x4）に設定。
		// マトリョーシカ（バッグインバッグ）を完全に防ぐ、あなたの「ハードコアルール」を適用。
		itemsCargoSize[]={4,4};
	};
};