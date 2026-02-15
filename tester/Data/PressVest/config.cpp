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
	class PressVest_ColorBase: Clothing
	{
		itemSize[]={4,4};
		itemsCargoSize[]={4,1};
	};
};
