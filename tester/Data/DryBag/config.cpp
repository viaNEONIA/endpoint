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
	class DryBag_ColorBase: Clothing
	{
		itemSize[]={5,6};
		itemsCargoSize[]={4,5};
	};
};
