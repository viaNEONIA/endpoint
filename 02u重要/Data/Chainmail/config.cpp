class CfgPatches
{
	class HardcoreClothing_Override25
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops" // チェインメイル(トップス)の上書きを確実に
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// チェインメイル
	class Chainmail: Clothing
	{
		// 収納を完全に廃止（0マス）
		itemsCargoSize[]={0,0};
	};
};