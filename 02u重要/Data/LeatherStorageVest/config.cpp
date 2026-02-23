class CfgPatches
{
	class HardcoreClothing_Override84
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Vests"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// レザーストレージベスト（全カラー共通）
	class LeatherStorageVest_ColorBase: Clothing
	{
		// 本体サイズを 4x3 に設定。
		// ベスト自体の厚みを表現しつつ、他のバッグへの入れ子を防ぎます。
		itemSize[]={4,3};
		// 容量を 5x1（5マス）に制限。
		// 1x2 のレザーソーイングキットや 1x1 の食材を並べて入れる
		// 「ベルトポーチ」のような利便性を備えたスロット構成です。
		itemsCargoSize[]={8,1};
	};
};