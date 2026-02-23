class CfgPatches
{
	class HardcoreClothing_Override72
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
	
	// ジーンズ（全カラー共通）
	class Jeans_ColorBase: Clothing
	{
		// 12マスから 1x1（1マス）へ。
		// ハンターパンツ(4x1)やゴルカパンツ(4x1)との差別化が明確になり、
		// 「民生品は収納力が極端に低い」という格差が生まれます。
		itemsCargoSize[]={3,1};
	};
};