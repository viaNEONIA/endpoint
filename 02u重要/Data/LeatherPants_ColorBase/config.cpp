class CfgPatches
{
	class HardcoreClothing_Override80
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
	
	// レザーパンツ（全カラー共通）
	class LeatherPants_ColorBase: Clothing
	{
		// 12マスから 2x1（2マス）へ制限。
		// ジーンズ(1x1)よりは実用的ですが、ハンターパンツ(4x1)の半分。
		// 「頑丈だが、ポケットに物を詰め込む設計ではない」という説得力。
		itemsCargoSize[]={2,1};
	};
};