
scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
stallSpeed=5;
draconicTorqueYCoef[]={1.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
draconicForceYCoef=6;
envelope[] = {0.5,2.11,2.43,1.97,1.72,2.69,3.87,5.27,6.89,8.72,9.7,9.6,9.2,8.5,8.2,8};
faction="RD501_Republic_Faction";
editorSubcategory="RD501_Editor_Category_Air_Republic_vtol";
weapons[]=
{
	"Laserdesignator_pilotCamera",
	"CMFlareLauncher",
	macro_new_weapon(generic,republic_aircraft_cannon),
	macro_new_weapon(generic,kannon)
};
magazines[]=
{
	macro_new_mag(generic_aircraft_gun_green,1000),
	macro_basic_air_mags,
	macro_new_mag(Kannon,100),
	macro_new_mag(Kannon,100)
};
class Components: Components
{
	class TransportPylonsComponent
	{
		uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";

		class Pylons
		{
			class pylons1
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=10;
						maxweight=300;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=13;
						maxweight=5000;
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=7;
						maxweight=5000;
						UIposition[]={0.5,0.25};
					};
					class pylons6: pylons5
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=12;
						maxweight=5000;
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=5;
					};

			class Pylons7
			{
				priority = 5;
				attachment = "empty";
				maxweight = 4000;
				UIposition[]={ 0.1, 0.25 };
			};
		};

		class Presets
		{
			class Empty
			{
				displayName = "$STR_empty";
				attachment[]={};
			};
		};
	};
};