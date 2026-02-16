class CfgPatches
{
	class HardcoreMedical_Override
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		/* 医療アイテムの上書きには DZ_Gear_Medical が必須 */
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Medical"};
	};
};

class CfgVehicles
{
	// 1. POXアンチドート (POX Antidote)
	class AntiChemInjector;
	class AntiChemInjector { itemSize[] = {1, 1}; };

	// 2. モルヒネ (Morphine Auto-injector)
	class Morphine;
	class Morphine { itemSize[] = {1, 1}; };

	// 3. エピネフリン (Epinephrine Auto-injector)
	class Epinephrine;
	class Epinephrine { itemSize[] = {1, 1}; };
};