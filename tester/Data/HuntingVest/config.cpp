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
	class HuntingVest: Clothing
	{
		itemSize[]={4,3};
		itemsCargoSize[]={6,1};
	};
};
