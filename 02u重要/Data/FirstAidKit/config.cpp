class CfgPatches
{
	class HardcoreClothing_Override46 // 番号を46に更新
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical" // 救急箱の定義が含まれる場所
		};
	};
};

class CfgVehicles
{
	class Container_Base;
	
	// 救急箱
	class FirstAidKit: Container_Base
	{
		// 2x2 から 1x2 へ。縦長・スリム化でポケットへの収納が可能に。
		itemSize[]={1,2};
		// 容量を 9マス から 6マス（3x2）へ。
		// 包帯(1x1)やエピネフリン(1x1)を効率よく並べるパズルが始まります。
		itemsCargoSize[]={3,2};
	};
};