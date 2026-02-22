class CfgPatches
{
	class HardcoreClothing_Override24
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
	
	// カーゴパンツ（全カラーのベース）
	class CargoPants_ColorBase: Clothing
	{
		// 20マスから 2x1（2マス）へ劇的にカット
		itemsCargoSize[]={4,1};
	};
};