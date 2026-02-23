class CfgPatches
{
	class HardcoreClothing_Override79
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
	
	// レザージャケット（全カラー共通）
	class LeatherJacket_ColorBase: Clothing
	{
		// 20マスから 2x1（2マス）へ。
		// 白衣(2x1)やジャンプスーツ(2x1)と同等の容量になり、
		// 収納力ではなく「防御力（耐久性）」で選ぶべき装備になりました。
		itemsCargoSize[]={4,1};
	};
};