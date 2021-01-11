#include "../../RD501_main/config_macros.hpp"

class CfgPatches
{
    class macro_patch_name(ammo)
    {
        author=RD501;
        addonRootClass= macro_patch_name(weapons)
        requiredAddons[]=
        {
            macro_patch_name(weapons)
        };
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
    };
};

class CfgAmmo
{
	class 3AS_EC20_BluePlasma;
	class 3AS_EC30_BluePlasma;
	class 3AS_EC40_BluePlasma;
	class 3AS_EC50_BluePlasma;
	class 3AS_EC60_BluePlasma;
	class 3AS_EC70_BluePlasma;
	class 3AS_EC80_BluePlasma;
	class JLTS_bullet_carbine_red;
	class G_40mm_HE;
	class SWOP_BCCKtermimploder;
	class SWOP_termDet;
	class B_12Gauge_Pellets_Submunition;
	class  B_12Gauge_Pellets_Submunition_Deploy;
	class FlareBase;
	class JLTS_bullet_stun;
	class macro_new_ammo(surrender_stun): JLTS_bullet_stun
	{
		model="\MRC\JLTS\weapons\Core\effects\stun.p3d";
		hit=0.0099999998;
		JLTS_isStunAmmo=0;
		typicalSpeed=30;
		timetolive=3;
		aiAmmoUsageFlags=0;
		RD501_stunDuration=30;
	};
	class macro_new_ammo(2mw):3AS_EC20_BluePlasma
	{
		hit=4;
		airLock=1;
		typicalSpeed=400;
		caliber=1.2;
		airFriction=0;
	};
	class macro_new_ammo(5mw) : 3AS_EC30_BluePlasma
	{
		hit=6;
		airLock=1;
		typicalSpeed=400;
		caliber=1.4;
		airFriction=0;
	};
	class macro_new_ammo(10mw) : 3AS_EC40_BluePlasma
	{
		hit=9;
		airLock=1;
		typicalSpeed=550;
		caliber=1;
		airFriction=0;
		explosive = 0;
	};
	class macro_new_ammo(10mws) : 3AS_EC40_BluePlasma
	{
		hit=9;
		airLock=1;
		typicalSpeed=550;
		caliber=1;
		visibleFire=1;
		audibleFire=5;
		visibleFireTime=3;
		airFriction=0;
		explosive = 0;
	};
	class macro_new_ammo(20mw) : 3AS_EC50_BluePlasma
	{
		hit=12;
		airLock=1;
		typicalSpeed=700;
		caliber=2.8;
		airFriction=0;
		explosive = 0.4;
	};
	class macro_new_ammo(20mw_d) : JLTS_bullet_carbine_red
	{
		hit=12;
		airLock=1;
		typicalSpeed=700;
		caliber=2.8;
		airFriction=0;
	};
	class macro_new_ammo(20mwup) : 3AS_EC50_BluePlasma
	{
		hit=10;
		airLock=1;
		typicalSpeed=500;
		indirectHit = 3;
		indirectHitRange = 0.5;
		explosive = 0.4;
		caliber=0.6;
		airFriction=0;
	};
	class macro_new_ammo(20mwdp) : 3AS_EC50_BluePlasma
	{
		hit=17;
		airLock=1;
		typicalSpeed=800;
		caliber=2.8;
		airFriction=0;
		explosive = 0.2;
	};
	class macro_new_ammo(30mw) : 3AS_EC60_BluePlasma
	{
		hit=35;
		airLock=1;
		typicalSpeed=1000;
		caliber=2.4;
		airFriction=0;
		explosive = 0.4;
	};
	class macro_new_ammo(30mw_d) : JLTS_bullet_carbine_red
	{
		hit=35;
		airLock=1;
		typicalSpeed=1000;
		caliber=2.4;
		airFriction=0;
	};
	class macro_new_ammo(40mw) : 3AS_EC70_BluePlasma
	{
		hit=60;
		airLock=1;
		typicalSpeed=1100;
		caliber=3.6;
		airFriction=0;
		explosive = 0.4;
	};
	class macro_new_ammo(40mwemp) : 3AS_EC70_BluePlasma
	{
		hit=0.01;
		airLock=1;
		typicalSpeed=1100;
		caliber=1;
		airFriction=0;
		explosive = 0;
		JLTS_isEMPAmmo=1;
	};
	class macro_new_ammo(50mw) : 3AS_EC80_BluePlasma
	{
		hit=300;
		thrust=210;
		explosive=0.4;
		thrustTime=1.5;
		airLock=1;
		typicalSpeed=1100;
		caliber=5;
		airFriction=0;
	};
	class macro_new_ammo(mar1) : 3AS_EC80_BluePlasma
	{
		hit=900;
		thrust=500;
		explosive=0;
		thrustTime=1.5;
		airLock=1;
		typicalSpeed=3000;
		caliber=50;
		airFriction=0;
	};
	class macro_new_ammo(UGL_AP): G_40mm_HE
	{
		hit = 350;
		indirectHit = 0;
		indirectHitRange = .1;
		timeToLive =30;
		model = "\GeonFighter\LaserGeon.p3d";
		fuseDistance = 3;

		explosive = 0.0001;
		deflecting = 5;
		caliber = 5;

		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ace_frag_classes[] = {""};
		ace_frag_metal = 0;
		ace_frag_charge = 0;
		ace_frag_gurney_c = 0;
		ace_frag_gurney_k = "0";
		ace_rearm_caliber = 0;
	};
	class macro_new_ammo(UGL_HE) :G_40mm_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 5;
		timeToLive =30;
		model = "SW_AV7\ion.p3d";
		fuseDistance = 3;
	};
	class RD501_grenade_emp_ammo: G_40mm_HE
    {
		JLTS_isEMPAmmo=1;
		hit = 0.1;
		indirectHit = 0.01;
		indirectHitRange = 12;
		timeToLive =30;
		model = "\thermalD\EMP_Grenade_ammo.p3d";
		fuseDistance = 1
		explosive = 0.0001;
		deflecting = 5;
		caliber = 5;
		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ace_frag_classes[] = {""};
		ace_frag_metal = 0;
		ace_frag_charge = 0;
		ace_frag_gurney_c = 0;
		ace_frag_gurney_k = "0";
		ace_rearm_caliber = 0;
		explosionEffects="JLTS_fx_exp_EMP";
		grenadeBurningSound[]=
		{
			"EMPSoundLoop1",
			0.5
		};
		EMPSoundLoop1[]=
		{
			"MRC\JLTS\weapons\Grenades\sounds\grenade_burning.wss",
			0.125893,
			1,
				70
			};
		SoundSetExplosion[]=
		{
			"JLTS_GrenadeEMP_Exp_SoundSet",
			"JLTS_GrenadeEMP_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		aiAmmoUsageFlags=0;
		class CamShakeExplode
		{
			distance=10;
			duration=1;
			frequency=20;
			power=0;
		};
    };
	class macro_new_ammo(imploder) : SWOP_BCCKtermimploder
	{
		hit=50;
		indirectHit=45;
		indirectHitRange=2;
	}
	class macro_new_ammo(thermaldet) : SWOP_termDet
	{
		hit=18;
		indirectHit=14;
		indirectHitRange=8;
	}
///////////////////////////////////////////////////////////////////////
/////////////////////////Shotgun///////////////////////////////////////
//////////////////////////////////////////////////////////////////////
	class macro_new_ammo(shotgun_scatter): B_12Gauge_Pellets_Submunition
	{
		hit=20;
		submunitionConeAngle = 1;
		submunitionAmmo=macro_new_ammo(shotgun_scatter_submunition)
	};
	class macro_new_ammo(shotgun_scatter_submunition) : B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=12;
	};
	class macro_new_ammo(shotgun_HE): B_12Gauge_Pellets_Submunition
	{
		hit=20;
		submunitionConeAngle = 4;
		submunitionAmmo=macro_new_ammo(shotgun_HE_submunition)
	};
	class macro_new_ammo(shotgun_HE_submunition) : B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=8;
		indirectHit=8;
		indirectHitRange=0.9;
	};
	class macro_new_ammo(shotgun_EMP): B_12Gauge_Pellets_Submunition
	{
		hit=20;
		submunitionConeAngle = 20;
		submunitionAmmo=macro_new_ammo(shotgun_EMP_submunition)
	};
	class macro_new_ammo(shotgun_EMP_submunition) : B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=1;
		timeToLive = 0.05;
		JLTS_isEMPAmmo=1;
	};
///////////////////////////////////////////////////////////////////////
/////////////////////////Flares///////////////////////////////////////
//////////////////////////////////////////////////////////////////////
   class macro_new_ammo(40mm_white): FlareBase
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	
		lightColor[] = {1, 1, 1 ,1};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 1};

		brightness = 1200;
		size = 3;//1
		triggerTime = 3;
		triggerSpeedCoef = 1;
		audibleFire = 20;
		
		intensity  = 1000000;
		flareSize = 3;//1
		timeToLive = 120;
        flareMaxDistance = 300;
		
	};


	class macro_new_ammo(40mm_green): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		
		lightColor[] = {0, 1, 0, 0};
	};
	class macro_new_ammo(40mm_red): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		
		lightColor[] = {1, 0, 0, 0};
	};
	class macro_new_ammo(40mm_yellow): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		
		lightColor[] = {1, 1, 0, 0};
	};
	class macro_new_ammo(40mm_CIR): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5, 0.5, 0.25, 0};
	};

	class macro_new_ammo(40mm_blue): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	
		lightColor[] = {0, 0, 1, 0};
	};

	class macro_new_ammo(40mm_cyan): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	
		lightColor[] = {0, 1, 1, 0};
	};

	class macro_new_ammo(40mm_purple): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		
		lightColor[] = {.7, 0, 1, 0};
	};
};
	