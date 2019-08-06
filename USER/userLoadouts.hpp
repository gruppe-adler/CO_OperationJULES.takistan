/*
*   Hier können eigene factions für grad-loadout eingetragen werden.
*   Anleitung im Wiki.
*/

#ifdef NIGHTVISION
  #define NVITEM "rhsusf_ANPVS_15"
#else
  #define NVITEM ""
#endif

#ifdef LASERS
  #define LLITEM "rhsusf_acc_anpeq15A"
#else
  #define LLITEM ""
#endif

#ifdef GUNLIGHTS
  #define LLITEM "rhsusf_acc_M952V"
#endif

#ifdef SUPPRESSORS
  #define SUPPRESSORITEM "rhsusf_acc_nt4_black"
#else
  #define SUPPRESSORITEM ""
#endif


#define VEST_DEFAULT_ITEMS \
	LIST_4("rhs_mag_m67"), \
	LIST_4("rhs_mag_an_m8hc"), \
	LIST_2("ACE_M84")

#define UNIFORM_DEFAULT_ITEMS \
				LIST_1("ACE_MapTools"), \
                LIST_1("ACE_DefusalKit"), \
                LIST_2("ACE_CableTie"), \
                LIST_1("ACE_Flashlight_MX991")


class JulesBlufor {
    class AllUnits {
        uniform = "rhs_uniform_g3_tan";
        vest = "rhsusf_mbav_rifleman";
        backpack = "";
        headgear[] = { "rhsusf_opscore_coy_cover_pelt", "rhsusf_opscore_paint_pelt", "rhsusf_opscore_paint_pelt_nsw", "rhsusf_opscore_paint_pelt_nsw_cam", "rhsusf_opscore_ut_pelt", "rhsusf_opscore_ut_pelt_cam", "rhsusf_opscore_ut_pelt_nsw", "rhsusf_opscore_ut_pelt_nsw_cam" };
        primaryWeapon[] = {"rhs_weap_m4a1_d_mstock", "rhs_weap_m4a1_d", "rhs_weap_m4a1_blockII_d", "rhs_weap_m4a1_blockII_KAC_d", "rhs_weap_mk18_d", "rhs_weap_mk18_KAC_d"};
        primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan";
        primaryWeaponMuzzle = SUPPRESSORITEM;
        primaryWeaponPointer = LLITEM;
        primaryWeaponOptics = "rhsusf_acc_eotech_552_d";
        primaryWeaponUnderbarrel[] = { "rhsusf_acc_grip2", "rhsusf_acc_grip2_tan", "rhsusf_acc_rvg_blk", "rhsusf_acc_tdstubby_tan", "rhsusf_acc_grip1", "" };
		primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        handgunWeapon = "hgun_Pistol_heavy_01_F";
        handgunWeaponMagazine = "11Rnd_45ACP_Mag";
        binoculars = "";
        map = "ItemMap";
        compass = "ItemCompass";
        watch = "ItemWatch";
        gps = "ItemGPS";
        radio = "tfar_anprc152";
        nvgoggles = NVITEM;
    };
    class Type {
        //Rifleman
        class Soldier_F {
            addItemsToUniform[] = {
                UNIFORM_DEFAULT_ITEMS,

                LIST_6("ACE_packingBandage"),
                LIST_6("ACE_elasticBandage"),
                LIST_6("ACE_quikclot"),
                LIST_4("ACE_tourniquet"),
                LIST_4("ACE_morphine"),
                LIST_4("ACE_epinephrine")
            };
            addItemsToVest[] = {
				VEST_DEFAULT_ITEMS,
                LIST_6("rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan")
            };
        };

		// Ammo bearer
		class Soldier_A_F: Soldier_F {
            backpack = "B_AssaultPack_cbr";
			addItemsToBackpack[] = {
                LIST_12("rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"),
                "rhs_200rnd_556x45_M_SAW"
			};
		}

        //Autorifleman
        class soldier_AR_F: Soldier_F {
            primaryWeapon[] = { "rhs_weap_m249_pip_S_vfg", "rhs_weap_m249_pip_S_para" };
			primaryWeaponUnderbarrel = "";
	        primaryWeaponOptics = "rhsusf_acc_eotech_552";
            primaryWeaponMagazine = "rhs_200rnd_556x45_M_SAW";
            handgunWeapon = "";
            handgunWeaponMagazine = "";
            vest = "rhsusf_mbav_mg";
			addItemsToVest[] = {
                VEST_DEFAULT_ITEMS,
                LIST_2("rhs_200rnd_556x45_M_SAW")
            };
            backpack = "B_AssaultPack_cbr";
            addItemsToBackpack[] = {
                LIST_2("rhs_200rnd_556x45_M_SAW"),
                "rhsusf_100Rnd_556x45_soft_pouch"
            };
        };

		//Grenadier
        class Soldier_GL_F: Soldier_F {
            primaryWeapon[] = { "rhs_weap_m4a1_m203s_d", "rhs_weap_m4a1_blockII_M203_d" };
			primaryWeaponUnderbarrel = "";
            vest = "rhsusf_mbav_grenadier";
			backpack = "B_AssaultPack_cbr";
            addItemsToBackpack[] = {
				LIST_9("rhs_mag_M433_HEDP"),
				LIST_3("rhs_mag_m715_Green"), 
				LIST_3("rhs_mag_m714_White"), 
				LIST_3("rhs_mag_m713_Red")
            };
        };

        //Combat Life Saver
        class medic_F: Soldier_F {
            vest = "rhsusf_mbav_medic";
            backpack[] = { "B_Kitbag_cbr", "B_Kitbag_tan" };
			addItemsToBackpack[] = {
				LIST_4("ACE_salineIV"),
				LIST_8("ACE_salineIV_500"),
				LIST_20("ACE_elasticBandage"),
				LIST_20("ACE_packingBandage"),
				LIST_20("ACE_quikclot"),
				LIST_8("ACE_tourniquet"),
				LIST_25("ACE_morphine"),
				LIST_25("ACE_epinephrine")
			};

			addItemsToUniform[] = {
				UNIFORM_DEFAULT_ITEMS,
				"ACE_surgicalKit",
				"GRAD_ALK"
			};

        };

        //Team Leader
        class Soldier_TL_F: Soldier_F {
            backpack = "B_AssaultPack_cbr";
			addItemsToBackpack[] = {
				LIST_3("SmokeShellPurple"),
				LIST_3("SmokeShellOrange"),
				LIST_3("SmokeShellBlue"),
				LIST_3("SmokeShellRed")
			};
        };

        //Rifleman (AT)
        class soldier_LAT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_m72a7";
        };

        //Squad Leader
        class Soldier_SL_F: Soldier_TL_F {
            backpack = "tfar_rt1523g_rhs";
		};

		//JTAC
		class Recon_JTAC_F: Soldier_F {
			primaryWeapon[] = { "rhs_weap_m4a1_m203s_d", "rhs_weap_m4a1_blockII_M203_d" };
			primaryWeaponUnderbarrel = "";
			binoculars = "ACE_VectorDay";
            backpack = "tfar_rt1523g_rhs";
			addItemsToBackpack[] = {
				LIST_3("SmokeShellPurple"),
				LIST_3("SmokeShellGreen"),
				LIST_5("rhs_mag_m713_Red")
            };
		};

		class Helipilot_F: Soldier_F {
			uniform = "rhs_uniform_acu_ucp";
			vest = "rhsusf_iotv_ucp";
			headgear = "rhsusf_hgu56p_visor_mask_mo";
			primaryWeapon = "rhs_weap_m4_carryhandle_mstock";
	        primaryWeaponOptics = "";
        	primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
			addItemsToVest[] = {
                "rhs_mag_30Rnd_556x45_M855A1_Stanag",
				LIST_2("SmokeShellPurple")
            };
		};
    };
    class Rank {
        class LIEUTENANT {
            headgear = "rhsusf_patrolcap_ocp";
        };
    };
};
