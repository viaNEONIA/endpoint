class CfgPatches
{
	class HardcoreClothing_Override
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
	class AliceBag_ColorBase: Clothing
	{
		itemSize[]={7,8};
		itemsCargoSize[]={6,8};
	};
};
