class CfgPatches
{
	class HardcoreClothing_Override54 // 番号を54に更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
			// ギフト用品はDZ_DataやDZ_Gear_General等に含まれます
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ギフトラッピングペーパー
	class GiftWrapPaper: Inventory_Base
	{
		// 1x3 から 1x1 へ小型化。
		// これにより、ポケット(2x1)の片側に忍ばせておくことが可能に。
		itemSize[]={2,1};
	};
};