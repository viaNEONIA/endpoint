class CfgPatches
{
	class HardcoreClothing_Override
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Powered_Base;
	class FishingRod_Base;
	class Hammer: Inventory_Base
	{
		itemSize[]={1,2};
	};
};
