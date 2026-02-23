class CfgPatches
{
	class HardcoreClothing_Override103
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
	
	// パラメディックジャケット（救急隊員上着・全カラー共通）
	class ParamedicJacket_ColorBase: Clothing
	{
		// 12マスから 2x1（2マス）へ。
		// このサイズでは 1x2 の「ミートテンダライザー」や
		// 「キッチンナイフ」は入りません（向きが違うため）。
		// 徹底的に「医療用消耗品」のためのスペースとして定義されています。
		itemsCargoSize[]={4,1};
	};
};