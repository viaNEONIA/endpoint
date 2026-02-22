class CfgPatches
{
	class HardcoreClothing_Override5
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Backpacks",
			"DZ_Gear_Medical",
			"DZ_Gear_Drinks",
			"DZ_Gear_Tools"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	class AssaultBag_ColorBase: Clothing
	{
		// 外見のサイズ（15マス分）
		itemSize[]={3,5}; 
		
		// バッグの中の容量（42マス分：6x7）
		itemsCargoSize[]={6,7};

		// アタッチメントスロットを追加
		// Bottle: 水筒, Radio: 無線機, Knife: ナイフ
		attachments[]+=
		{
			"Bottle",
			"Radio",
			"Knife"
		};
	};
};
