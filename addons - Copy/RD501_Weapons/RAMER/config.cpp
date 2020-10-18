#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"
class CfgPatches
{
	class RD501_patch_ramer
	{
		author="RD501";
		addonRootClass="RD501_patch_weapons";
		requiredAddons[]=
		{
			"RD501_patch_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"RD501_RAMER",
			macro_new_weapon_nofam(t21)
		};
	};
};
class cfgWeapons
{
	/*class SWOP_T21BlasterRifle;
	class RD501_RAMER: SWOP_T21BlasterRifle
	{
		baseWeapon="RD501_RAMER";
		author="RD501";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		displayname="Republic Anti Material Energy Rifle";
		descriptionShort="(R.A.M.E.R)";
		magazines[]=
		{
			"RD501_RAMER_x6_mag"
		};
	};*/
	class arifle_MX_Base_F;
	class JLTS_EPL2:arifle_MX_Base_F
	{
		class Single;
	}
	class macro_new_weapon_nofam(t21):JLTS_EPL2
	{
		baseWeapon=macro_new_weapon_nofam(t21)
		displayname="T21 R.A.M.E.R."
		magazines[]=
		{
			macro_new_mag(RAMER,6)
		};
		class Single : Single
		{
			reloadTime=2;
		}
			class WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot
			{
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = 
				{
					"RD501_Holosight",
					"RD501_Holosight_2",
					"RD501_Holosight_3"
				};

			};
		};
	};
};
