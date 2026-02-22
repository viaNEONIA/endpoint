class CfgPatches
{
	class HardcoreClothing_Override34
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
	
	// コヨーテバッグ（大型軍用バックパック）
	class CoyoteBag_ColorBase: Clothing
	{
		// 本体を 5x6 から 6x7 に拡大。他のバッグに入れるのはほぼ不可能に。
		itemSize[]={6,7};
		// 容量を 40マス から 35マス（5x7）へ制限。
		itemsCargoSize[]={5,7};
	};
};