class CfgPatches
{
	class HardcoreClothing_Override120
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
	
	// 囚人服上着
	class PrisonUniformJacket: Clothing
	{
		// 1x1（1マス）へ。
		// このサイズでは、さきほど調整した「粉ミルク(1x1)」や
		// 「ジャガイモ(1x1)」を1つ放り込むのが限界です。
		// 「2x1」のストーブや「1x2」のペンチは、
		// 逆立ちしても入りません。
		itemsCargoSize[]={1,1};
	};
};