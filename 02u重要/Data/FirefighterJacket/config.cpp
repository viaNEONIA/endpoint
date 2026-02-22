class CfgPatches
{
	class HardcoreClothing_Override43
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
	
	// 消防士のジャケット（全カラー共通）
	class FirefighterJacket_ColorBase: Clothing
	{
		// 20マスから、無線機や包帯が入る程度の 1x2（2マス）へ大幅制限
		itemsCargoSize[]={4,1};
	};
};