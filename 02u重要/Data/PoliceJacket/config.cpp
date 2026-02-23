class CfgPatches
{
	class HardcoreClothing_Override109
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Tops"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// ポリスジャケット
	class PoliceJacket: Clothing
	{
		// 12マスから 4x1（横4マス）へ。
		// M65ジャケットと同様、横に長いアイテムを収納できる貴重な装備です。
		// この「4x1」という形状は、あなたの世界では極めて戦略的な価値を持ちます。
		itemsCargoSize[]={4,1};
	};
};