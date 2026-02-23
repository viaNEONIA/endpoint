class CfgPatches
{
	class HardcoreClothing_Override119
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Vests"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// プレスベスト（報道用防弾ベスト・全カラー共通）
	class PressVest_ColorBase: Clothing
	{
		// 外寸：4x4。
		// かなり巨大です！バックパックの中に入れると、
		// それだけでマウンテンバッグ(5x7)の半分以上を占拠します。
		itemSize[]={4,4};

		// 内寸：4x1（横長4マス）。
		// 警察ジャケットと同じ横長スロットです。
		// 報道用のペン、ノート、あるいは予備の弾薬(1x1)を4つ並べるか、
		// 針金(2x1)を2つ入れるのが限界という、非常にシビアな設計です。
		itemsCargoSize[]={4,1};
	};
};