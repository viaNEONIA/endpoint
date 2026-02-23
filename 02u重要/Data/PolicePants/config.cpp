class CfgPatches
{
	class HardcoreClothing_Override112
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Pants"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// OREL警察パンツ（特殊部隊仕様）
	class PolicePantsOrel: Clothing
	{
		// 12マス（4x3）から 2x1（2マス）へ。
		// 標準の警察ズボンと同じく、横長の2マス。
		// 特殊部隊のタクティカルな外見に反して、
		// その収納は「必要最小限」に絞り込まれています。
		itemsCargoSize[]={2,1};
	};
};