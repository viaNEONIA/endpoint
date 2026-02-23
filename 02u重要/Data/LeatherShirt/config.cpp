class CfgPatches
{
	class HardcoreClothing_Override83
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
	
	// レザーシャツ（全カラー共通）
	class LeatherShirt_ColorBase: Clothing
	{
		// 10マスから 1x2（縦2マス）へ。
		// 1x2 という形状は、先ほど調整した「キッチンナイフ(1x2)」や
		// 「レザーソーイングキット(1x2)」を縦に差し込むのに完璧なサイズです。
		itemsCargoSize[]={4,1};
	};
};