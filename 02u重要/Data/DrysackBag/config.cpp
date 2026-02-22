class CfgPatches
{
	class HardcoreClothing_Override38
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// ドライサック（防水スタッフバッグ）
	class DrysackBag_ColorBase: Clothing
	{
		// 本体を 3x3 から 4x5 に拡大。
		itemSize[]={4,5};
		// 容量を 20マス から 16マス（4x4）に制限。
		itemsCargoSize[]={4,4};
	};
};