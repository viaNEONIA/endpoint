class CfgPatches
{
	class HardcoreClothing_Override69
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
	
	// ハンティングベスト
	class HuntingVest: Clothing
	{
		// 本体を 4x3 に設定。
		// 脱いでバッグに入れる際、12マス分を占有するしっかりとした存在感。
		itemSize[]={4,3};
		// 容量を 6x1（6マス）に制限。
		// 狩猟用の弾薬や小物を横一列に素早く取り出せるように並べるイメージ。
		itemsCargoSize[]={7,1};
	};
};