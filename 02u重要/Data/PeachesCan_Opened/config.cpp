class CfgPatches
{
	class HardcoreClothing_Override106
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food"
		};
	};
};

class CfgVehicles
{
	class Edible_Base;
	
	// 開封済みのピーチ缶
	class PeachesCan_Opened: Edible_Base
	{
		// 1x2 から 1x1 へ。
		// 開封して蓋が開いていても、底面積や収まりの良さは変わらない
		// という判断は、パズルとしての管理を非常にスムーズにします。
		itemSize[]={1,1};
	};
};