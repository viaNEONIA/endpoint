class CfgPatches
{
	class HardcoreClothing_Override71
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Backpacks"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// 即席バックパック（麻袋+ロープ）
	class ImprovisedBag: Clothing
	{
		// 本体サイズを 5x5 (25マス) に設定。
		itemSize[]={5,5};
		// 容量を 4x5 (20マス) に制限。
		// 「外寸 > 内寸」により、マトリョーシカ（入れ子）を完全に防止。
		itemsCargoSize[]={4,5};
	};
};
