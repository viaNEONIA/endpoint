class CfgPatches
{
	class HardcoreClothing_Override
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class MedicalScrubsPants_ColorBase: Clothing
	{
		itemsCargoSize[]={2,1};
	};
};
