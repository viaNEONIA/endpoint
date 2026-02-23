class CfgPatches
{
	class HardcoreClothing_Override96
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
	
	// ミニドレス（全カラー共通）
	class MiniDress_ColorBase: Clothing
	{
		// 10マスから 1x1（1マス）へ。
		// ジーンズ(1x1)と同様、最も過酷な収納環境の一つです。
		// 1x2 のキッチンナイフすら持ち運べないという、
		// 徹底した「ドレス」としての不便さが、逆に世界観を引き立てます。
		itemsCargoSize[]={1,1};
	};
};