class CfgPatches
{
	class HardcoreClothing_Override15
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops" // トップス類の読み込みを保証
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// ブラウス（全カラーバリエーションの親クラス）
	class Blouse_ColorBase: Clothing
	{
		// 12マスから、極小の2マス（横1x縦2）に変更
		itemsCargoSize[]={1,4};
	};
};