class CfgPatches
{
	class HardcoreClothing_Override107
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food"
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// 洋出（ナシ）
	class Pear: Edible_Base
	{
		// 1x2 から 1x1 へ。
		// 熟したナシを拾い、その場で食べるか、
		// あるいはパラメディックジャケット(2x1)のポケットに
		// 2つ並べて大事に持ち帰るか...。
		// 「1x1」というサイズは、採取の喜びをより身近にしてくれます。
		itemSize[]={1,1};
	};
};