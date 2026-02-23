class CfgPatches
{
	class HardcoreClothing_Override74
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
	
	// ジャンプスーツパンツ（全カラー共通）
	class JumpsuitPants_ColorBase: Clothing
	{
		// 12マスから 2x1（2マス）へ制限。
		// ジーンズ(1x1)よりはマシですが、ハンターパンツ(4x1)には及ばない。
		// 「作業着としての最低限のポケット」という絶妙な立ち位置です。
		itemsCargoSize[]={2,1};
	};
};