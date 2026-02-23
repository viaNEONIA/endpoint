class CfgPatches
{
	class HardcoreClothing_Override89
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
	
	// マーマレード
	class Marmalade: Edible_Base
	{
		// 1x2 から 1x1 へ。
		// これにより、マンスーツ(1x2)の胸ポケットに
		// 「マーマレードの瓶を2つ縦に並べて突っ込む」という
		// ちょっとシュールで必死な食糧確保が可能になります。
		itemSize[]={1,1};
	};
};