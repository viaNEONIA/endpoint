class CfgPatches
{
	class HardcoreClothing_Override29 // 重複を避けるため番号を更新
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
	
	// 子供用バックパック（全カラー共通）
	class ChildBag_ColorBase: Clothing
	{
		// バッグ自体のサイズを 3x3 から 4x4（16マス）に拡大
		itemSize[]={4,4};
		// 内部容量を 12マス から 3x3（9マス）に制限
		itemsCargoSize[]={3,3};
	};
};