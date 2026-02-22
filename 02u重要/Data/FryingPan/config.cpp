class CfgPatches
{
	class HardcoreClothing_Override50
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
	class HouseNoDestruct;
	class Inventory_Base;
	class Bottle_Base;
	class FryingPan: Inventory_Base
	{
		itemSize[]={3,2};
		itemsCargoSize[]={2,1};
	};
};
