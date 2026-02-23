class CfgPatches
{
	class HardcoreClothing_Override114
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Camping"
		};
	};
};

class CfgVehicles
{
	class Bottle_Base;
	
	// ポータブルガスストーブ（コンロヘッド）
	class PortableGasStove: Bottle_Base
	{
		// 2x2 から 2x1（横長2マス）へ。
		// これにより、ポリスジャケット(4x1)やORELジャケット(4x1)の
		// 横長ポケットに、予備の針金(2x1)と一緒に忍ばせることが可能になります。
		itemSize[]={2,1};
	};
};