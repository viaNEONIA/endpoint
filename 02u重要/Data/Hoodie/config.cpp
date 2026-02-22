class CfgPatches
{
	class HardcoreClothing_Override65
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
	
	// パーカー（全カラー共通）
	class Hoodie_ColorBase: Clothing
	{
		// 12マスから 1x1（1マス）へ極限まで制限。
		// リンゴ1個、あるいはハチミツ（1x1）1瓶でポケットがいっぱいに。
		itemsCargoSize[]={3,1};
	};
};