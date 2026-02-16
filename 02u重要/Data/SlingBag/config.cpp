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
	class SlingBag_ColorBase: Clothing
	{
		itemSize[]={4,3};
		itemsCargoSize[]={3,3};
	};
};
