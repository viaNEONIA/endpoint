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
	class ImprovisedBag: Clothing
	{
		itemSize[]={5,5};
		itemsCargoSize[]={4,5};
	};
};
