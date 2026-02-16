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
	class MountainBag_ColorBase: Clothing
	{
		itemSize[]={6,7};
		itemsCargoSize[]={5,7};
	};
};
