class CfgPatches
{
	class HardcoreClothing_Override73
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
	
	// ジャンプスーツジャケット（全カラー共通）
	class JumpsuitJacket_ColorBase: Clothing
	{
		// 9マスから 2x1（2マス）へ制限。
		// 包帯(1x1)とハチミツ(1x1)を1つずつ入れたら、もうパンパンです。
		itemsCargoSize[]={2,1};
	};
};