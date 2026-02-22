class CfgPatches
{
	class HardcoreClothing_Override62
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Vests"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// 高容量ベスト（全カラー共通）
	class HighCapacityVest_ColorBase: Clothing
	{
		// 本体を 4x4 に設定。脱いでバッグに入れる際、かなりかさばる存在に。
		itemSize[]={4,4};
		// 容量を 32マス から 10x1（10マス）へ制限。
		// 「横一列にマガジンや小物をズラリと並べる」というタクティカルな外観をシステム化。
		itemsCargoSize[]={10,1};
	};
};