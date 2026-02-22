class CfgPatches
{
	class HardcoreClothing_Override55
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
	
	// ゴルカジャケット（全カラー共通）
	class GorkaEJacket_ColorBase: Clothing
	{
		// 24マスから 1x5（5マス）へ大幅制限。
		// 1x1の小物を5つ、または縦長（1x2, 1x3）の装備品を収納するスタイルに。
		itemsCargoSize[]={5,1};
	};