class CfgPatches
{
	class HardcoreClothing_Override98
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
	
	// マウンテンバックパック（全カラー共通）
	class MountainBag_ColorBase: Clothing
	{
		// 外寸を 6x7 に設定。
		// 背負っている時の巨大な存在感を数値化しつつ、
		// 他のバッグへの入れ子を物理的に不可能にしています。
		itemSize[]={6,7};

		// 容量を 35マス（5x7）に制限。
		// 以前調整したレザーサック(5x5=25マス)を超える「最大級」の地位は維持しつつ、
		// 何でも入る魔法の鞄ではなく、パッキングの技術が問われる現実的な大容量です。
		itemsCargoSize[]={5,7};
	};
};