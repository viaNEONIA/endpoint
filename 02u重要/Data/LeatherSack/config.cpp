class CfgPatches
{
	class HardcoreClothing_Override81
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Backpacks"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// レザーサック（革の巾着バッグ）
	class LeatherSack_ColorBase: Clothing
	{
		// 本体サイズを 5x6 に設定。
		// 背負うとかさばるが、その分タフな革の質感を表現。
		itemSize[]={5,6};
		// 容量を 25マス（5x5）に設定。
		// 5x5の正方形スロットは、大型の道具を整理して入れるのに最適です。
		itemsCargoSize[]={5,5};
	};
};