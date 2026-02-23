class CfgPatches
{
	class HardcoreClothing_Override110
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
	
	// OREL警察ジャケット（特殊部隊仕様）
	class PoliceJacketOrel: Clothing
	{
		// 12マスから 4x1（横4マス）へ。
		// M65や標準警察ジャケットと並び、上着としては最高峰の横幅を維持。
		// 特殊部隊らしく、必要な弾丸や小物を横並びに素早く取り出せる
		// ポーチ類の配置を再現したような設定です。
		itemsCargoSize[]={4,1};
	};
};