class CfgPatches
{
	class HardcoreClothing_Override53 // 番号を53に更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Filters" // フィルター系の定義を確実に上書き
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ガスマスク用フィルター
	class GasMask_Filter: Inventory_Base
	{
		// 2x2 から 2x1 へ。
		// 薄くなったことで、軍用ジャケットの小さなスロットにも収まりやすくなります。
		itemSize[]={2,1};
	};
};