class CfgPatches
{
	class HardcoreClothing_Override88
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
	
	// マンスーツ（全カラー共通）
	class ManSuit_ColorBase: Clothing
	{
		// 12マスから 1x2（縦2マス）へ。
		// ビジネスマンがペンや手帳、あるいは護身用の
		// キッチンナイフ(1x2)を内ポケットに隠し持っているような、
		// 緊張感のあるスロット構成です。
		itemsCargoSize[]={2,1};
	};
};