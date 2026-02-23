class CfgPatches
{
	class HardcoreClothing_Override76
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
	
	// 白衣（ドクターコート）
	class LabCoat: Clothing
	{
		// 12マスから 2x1（2マス）へ。
		// 包帯(1x1)とエピネフリン(1x1)を各1つずつ入れると、
		// 医療用具だけでポケットが埋まるリアリズム。
		itemsCargoSize[]={2,1};
	};
};