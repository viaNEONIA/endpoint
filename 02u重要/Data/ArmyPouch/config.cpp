class CfgPatches
{
	class HardcoreClothing_Override4
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
	class ArmyPouch_ColorBase: Clothing
	{
		itemSize[]={3,4};
		itemsCargoSize[]={4,4};
	};
};
