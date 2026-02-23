class CfgPatches
{
	class HardcoreClothing_Override100
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
	
	// NBCジャケット（防護服上着・全カラー共通）
	class NBCJacketBase: Clothing
	{
		// 12マスから 0マス（0x0）へ。
		// この服を着るということは、利便性を完全に捨て、
		// 「生存という目的」のみに特化することを意味します。
		itemsCargoSize[]={0,0};
	};
};