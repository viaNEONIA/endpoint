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
	class LeatherStorageVest_ColorBase: Clothing
	{
		itemSize[]={4,3};
		itemsCargoSize[]={5,1};
	};
};
