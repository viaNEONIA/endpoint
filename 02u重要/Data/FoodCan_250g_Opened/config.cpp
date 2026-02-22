class CfgPatches
{
	class HardcoreClothing_Override49 // 番号を49に更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food"
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// 開封済みの250g缶（中身が残っている状態）
	class FoodCan_250g_Opened_ColorBase: Edible_Base
	{
		// 未開封品と同じく 1x1 に設定
		itemSize[]={1,1};
	};
};