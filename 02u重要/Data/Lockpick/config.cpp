class CfgPatches
{
	class HardcoreClothing_Override86
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	
	// ロックピック
	class Lockpick: Inventory_Base
	{
		// 1x2 から 1x1 へ。
		// ジーンズ(1x1)やパーカー(1x1)のたった1つのポケットに
		// 「何を入れるか」という究極の選択肢に、この重要アイテムが食い込みます。
		itemSize[]={1,1};
	};
};