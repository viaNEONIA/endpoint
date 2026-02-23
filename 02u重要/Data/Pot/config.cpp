class CfgPatches
{
	class HardcoreClothing_Override115
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Cooking" // 調理器具アドオン
		};
	};
};

class CfgVehicles
{
	class Bottle_Base;
	
	// 調理用鍋
	class Pot: Bottle_Base
	{
		// 外寸：3x2（横長）
		// これにより、M65(4x1)や警察ジャケット(4x1)には高さが足りず入りません。
		// ハンティングジャケット(3x3)なら余裕で収まるサイズ感です。
		itemSize[]={3,2};

		// 内寸：2x3（縦長）
		// ここが非常に独創的です！
		// 鍋の中に「ペンチ(1x2)」や「キッチンナイフ(1x2)」を縦に収納できますが、
		// 鍋自体は横長なので、持ち運ぶスロットの形状を激しく選びます。
		itemsCargoSize[]={2,3};
	};
};