class CfgPatches
{
	class HardcoreClothing_Override87
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Tops"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// M65ジャケット（全カラー共通）
	class M65Jacket_ColorBase: Clothing
	{
		// 25マスから 4x1（4マス）へ。
		// 4つの大きなフラップポケットに、それぞれ1マスずつの
		// 重要アイテム（ロックピック、包帯、予備弾薬など）を
		// 分けて収納しているような「軍用品の規律」を感じるサイズ感です。
		itemsCargoSize[]={6,1};
	};
};