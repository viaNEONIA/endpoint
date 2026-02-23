class CfgPatches
{
	class HardcoreClothing_Override77
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food" // ラード（食品）が含まれるアドオン
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// ラード（獣脂）
	class Lard: Edible_Base
	{
		// 2x1 から 1x1 へ。
		// エネルギー密度の高いラードが 1x1 になったことで、
		// 以前調整した「ジャンプスーツ(2x1)」のポケットにも、
		// 非常食として忍ばせやすくなりました。
		itemSize[]={2,1};
	};
};