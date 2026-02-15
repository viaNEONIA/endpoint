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
	class TaloonBag_ColorBase: Clothing
	{
		itemSize[]={4,5};
		itemsCargoSize[]={4,4};
	};
};
