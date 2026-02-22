class CfgPatches
{
	class HardcoreClothing_Override68
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
	
	// ハンティングジャケット（全カラー共通）
	class HuntingJacket_ColorBase: Clothing
	{
		// 20マスから 4x1（4マス）へ制限。
		// パンツと合わせて「全身で8マス（4x1 + 4x1）」という、
		// バックパック前提のハードコアな収納バランスが完成。
		itemsCargoSize[]={4,1};
	};
};