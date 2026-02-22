class CfgPatches
{
	class HardcoreClothing_Override35
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops" // ジャケット類の上書きを確実にするため
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// デニムジャケット
	class DenimJacket: Clothing
	{
		// 9マスから 2x1（2マス）へ制限
		itemsCargoSize[]={2,1};
	};
};