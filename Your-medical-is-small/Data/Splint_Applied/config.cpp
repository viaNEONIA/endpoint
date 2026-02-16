class CfgPatches
{
	class HardcoreClothing_Override
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Edible_Base;
	class Bottle_Base;
	class Splint_Applied: Inventory_Base
	{
		itemSize[]={1,3};
	};
};