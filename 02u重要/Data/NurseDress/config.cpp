class CfgPatches
{
	class HardcoreClothing_Override102
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
	
	// ナースドレス（全カラー共通）
	class NurseDress_ColorBase: Clothing
	{
		// 12マスから 1x2（縦2マス）へ。
		// この「1x2」というスロットは、包帯(1x1)とモルヒネ(1x1)を
		// 縦に並べてパッキングするのに最適です。
		// あるいは、護身用のキッチンナイフ(1x2)を1本だけ持たせるという
		// 絶妙なリアリズムを感じさせます。
		itemsCargoSize[]={2,1};
	};
};