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
	class WomanSuit_ColorBase: Clothing
	{
		itemsCargoSize[]={2,1};
	};
};
