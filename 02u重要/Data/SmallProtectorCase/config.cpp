class CfgPatches
{
	class HardcoreClothing_Override
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class SmallProtectorCase: Container_Base
	{
		itemSize[]={1,1};
		itemsCargoSize[]={3,2};
		weight=1000;
	};
};
