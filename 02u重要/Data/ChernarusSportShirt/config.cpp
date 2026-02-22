class CfgPatches
{
	class HardcoreClothing_Override28
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Tops" // トップス類の定義を確実に読み込む
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// チェルナルス・スポーツシャツ
	class ChernarusSportShirt: Clothing
	{
		// 9マスから最小単位の 1x1 へ変更
		itemsCargoSize[]={1,1};
	};
};