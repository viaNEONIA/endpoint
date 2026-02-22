class CfgPatches
{
	class HardcoreClothing_Override67
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// ハンティングバッグ
	class HuntingBag: Clothing
	{
		// 本体を 6x5 に設定。
		// 他のバッグに収納しようとすると 30マス分を占有する「かさばる」仕様。
		itemSize[]={6,5};
		// 容量を 25マス（5x5）に制限。
		// 内部に別のハンティングバッグ（6x5）を入れることは物理的に不可能です。
		itemsCargoSize[]={5,5};
	};
};