class CfgPatches
{
	class HardcoreClothing_Override101
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
	
	// NBCパンツ（防護服ズボン・全カラー共通）
	class NBCPantsBase: Clothing
	{
		// バニラの容量を完全に撤廃し、0x0 へ。
		// ジャケットと合わせて、完全に「身一つ」で汚染地帯へ挑むことになります。
		itemsCargoSize[]={0,0};
	};
};