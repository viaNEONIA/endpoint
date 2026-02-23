class CfgPatches
{
	class HardcoreClothing_Override104
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
	
	// パラメディックパンツ（全カラー共通）
	class ParamedicPants_ColorBase: Clothing
	{
		// 12マス（4x3）から 2x1（2マス）へ。
		// これにより、パラメディック（救急隊員）のフルセットは
		// 2x1 + 2x1 = 合計4マス。
		// 包帯、モルヒネ、エピペン、ロックピックを各1つずつ入れたら
		// それだけで「満員」になるストイックな仕様です。
		itemsCargoSize[]={2,1};
	};
};