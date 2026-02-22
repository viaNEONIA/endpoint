class CfgPatches
{
	class HardcoreClothing_Override26
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// チェインメイル・レギンス
	class Chainmail_Leggings: Clothing
	{
		// バニラの 0x0（または設定なし）から、実用的な 2x1 へ
		itemsCargoSize[]={2,1};
	};
};