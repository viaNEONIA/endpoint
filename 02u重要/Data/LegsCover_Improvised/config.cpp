class CfgPatches
{
	class HardcoreClothing_Override85
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
	
	// 即席の脚部カバー（ボロ布製ズボン）
	class LegsCover_Improvised: Clothing
	{
		// 6マスから 2x1（2マス）へ制限。
		// 以前調整したジャンプスーツパンツ(2x1)と同等ですが、
		// あちらは既製品、こちらは布を巻いただけの「しのぎ」の装備。
		// 最低限、ナイフ(1x2)を1本差し込むのが精一杯というリアリズムです。
		itemsCargoSize[]={2,1};
	};
};