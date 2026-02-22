class CfgPatches
{
	class HardcoreClothing_Override63
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// ハイキングジャケット（全カラー共通）
	class HikingJacket_ColorBase: Clothing
	{
		// 20マスから 2x1（2マス）へ大幅制限。
		// 「雨風は凌げるが、収納は期待できない」という登山ウェアのリアルを追求。
		itemsCargoSize[]={4,1};
	};
};