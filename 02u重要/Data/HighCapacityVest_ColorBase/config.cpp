class CfgPatches
{
	class HardcoreClothing_Override
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class HighCapacityVest_ColorBase: Clothing
	{
		itemSize[]={4,4};
		itemsCargoSize[]={10,1};
	};
};
