class CfgPatches
{
	class HardcoreClothing_Override37
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	
	// ドライバッグ（全カラー共通）
	class DryBag_ColorBase: Clothing
	{
		// 本体を 4x4 から 5x6（30マス）に拡大。
		// これにより、他のバッグに無理やり詰め込むのが難しくなります。
		itemSize[]={5,6};
		// 容量は 20マス（4x5）を維持、または再定義。
		itemsCargoSize[]={4,5};
	};
};