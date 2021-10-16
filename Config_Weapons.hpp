/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops Todo
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, 500, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };
   // Rebel Double Check prices
    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "hgun_ACPC2_F", "", 11500, 6250, "" },
            { "hgun_Pistol_heavy_01_MRD_F", "", 10000, 5000, "" },
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, 4800, "" },
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "SMG_01_F", "", 30000, 15000, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_MX_SW_F", "", 150000, -1, "" },
            { "srifle_EBR_F", "", 150000, -1, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 120000, -1, "" }, //Apex DLC
            { "arifle_AKS_F", "", 30000, 15000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 118000, -1, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 30000, 15000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" },
            { "srifle_GM6_F", "", 2000000, -1, "" },
            { "srifle_GM6_camo_F", "", 2000000, -1, "" },
            { "srifle_LRR_F", "", 2000000, -1, "" }
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "", 25, -1, "" },
            { "9Rnd_45ACP_Mag", "", 45, -1, "" },
            { "16Rnd_9x21_Mag", "", 25, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, -1, "" },
            { "30Rnd_556x45_Stanag", "", 300, 150, "" }, 
            { "30Rnd_45ACP_Mag_SMG_01", "", 100, 50, "" }, 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 15000, -1, "" }, 
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_762x51_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" }, //Apex DLC
            { "5Rnd_127x108_Mag", "", 20000, -1, "" },
            { "5Rnd_127x108_APDS_Mag", "", 100000, -1, "" },
            { "7Rnd_408_Mag", "", 20000, -1, "" }

        };
        accs[] = {
            { "muzzle_snds_acp", "", 20000, -1, "" },
            { "optic_SOS", "", 65000, -1, "" },
            { "optic_DMS", "", 65000, -1, "" },
            { "optic_NVS", "", 80000, -1, "" },
            { "optic_Aco", "", 3500, 1750, "" },
            { "optic_MRCO", "", 5500, 1750, "" },
            { "optic_Arco", "", 10000, -1, "" },
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "muzzle_snds_H", "", 20000, -1, "" },
            { "muzzle_snds_L", "", 20000, -1, "" },
            { "muzzle_snds_M", "", 20000, -1, "" },
            { "muzzle_snds_B", "", 20000, -1, "" },
            { "muzzle_snds_H_SW", "", 20000, -1, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };
        // Gang Hideout Todo
    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops Todo
    class genstore {
        name = "Sin City General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "G_Combat_Goggles_tna_F", "Fullscreen NVG", 2000, 1000, "" },
            { "G_Balaclava_TI_G_tna_F", "Fullscreen NVG", 2000, 1000, "" },
            { "G_Bandanna_sport", "Fullscreen NVG", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };
        //Fuel Station Todo
    class f_station_store {
        name = "Sin City Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
	    { "G_Combat_Goggles_tna_F", "Fullscreen NVG", 2000, 1000, "" },
            { "G_Balaclava_TI_G_tna_F", "Fullscreen NVG", 2000, 1000, "" },
            { "G_Bandanna_sport", "Fullscreen NVG", 2000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops Big Todo
    class cop_basic {
        name = "Sin City  Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" },
            { "hgun_P07_F", "", 7500, 3750, "" },
            { "hgun_P07_khk_F", "", 7500, 3750, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 9500, 4750, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 30000, 15000, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 17500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, 8750, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 15000, "call life_coplevel >= 3" },
            { "srifle_DMR_07_blk_F", "", 32000, 16000, "call life_coplevel >= 3" } //Apex DLC Sniper
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 125, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 3" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 250, 125, "call life_coplevel >= 1" },//Pistol Flashlight
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops todo
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };

     //Ied Shop    Gotta add sui vest and others
class explosives_store{
        name = "Explosives Armament";
        side = "civ";
        conditions = "licence_civ_rebel";
        items[] = {
            { "DemoCharge_Remote_Mag", "", 250000, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };
      //rifle mastery store TODO
class rifle_m_store{
        name = "Master Rifle Armament";
        side = "civ";
        conditions = "licence_civ_rebel";
        items[] = {
       { "DemoCharge_Remote_Mag", "", 1750000, -1, "call life_exp_perks select 11 >= 1" },
        };
        mags[] = {};
        accs[] = {};
    };
    //sniper mastery store  TODO
class sniper_m_store{
        name = "Master Sniper Armament";
        side = "civ";
        conditions = "licence_civ_rebel";
        items[] = {
       { "DemoCharge_Remote_Mag", "", 1750000, -1, "call life_exp_perks select 11 >= 1" },
        };
        mags[] = {};
        accs[] = {};
    };
    //explosive mastery story TODO
class explosives_m_store{
        name = "Master Explosives Armament";
        side = "civ";
        conditions = "licence_civ_rebel";
        items[] = {
       { "DemoCharge_Remote_Mag", "", 1750000, -1, "call life_exp_perks select 11 >= 1" },
        };
        mags[] = {};
        accs[] = {};
    };
     // KOS Store Double Check Prices
class kos_store{
        name = "KOS Island Store ";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "hgun_ACPC2_F", "", 10350, 5625, "" },
            { "hgun_Pistol_heavy_01_MRD_F", "", 9000, 4500, "" },
            { "hgun_Rook40_F", "", 5850, 2925, "" },
            { "hgun_Pistol_heavy_02_F", "", 8865, 4320, "" },
            { "arifle_TRG20_F", "", 22500, 11250, "" },
            { "SMG_01_F", "", 27000, 13500, "" },
            { "arifle_Katiba_F", "", 27000, 13500, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_MX_SW_F", "", 135000, -1, "" },
            { "srifle_EBR_F", "", 135000, -1, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 108000, -1, "" }, //Apex DLC
            { "arifle_AKS_F", "", 27000, 13500, "" }, //Apex DLC
            { "arifle_AKM_F", "", 118000, -1, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 27000, 13500, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 29700, 14850, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 27000, 13500, "" },
            { "srifle_GM6_F", "", 1800000, -1, "" },
            { "srifle_GM6_camo_F", "", 1800000, -1, "" },
            { "srifle_LRR_F", "", 1800000, -1, "" }
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "", 25, -1, "" },
            { "9Rnd_45ACP_Mag", "", 45, -1, "" },
            { "16Rnd_9x21_Mag", "", 25, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, -1, "" },
            { "30Rnd_556x45_Stanag", "", 300, 150, "" }, 
            { "30Rnd_45ACP_Mag_SMG_01", "", 100, 50, "" }, 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 15000, -1, "" }, 
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_762x51_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" }, //Apex DLC
            { "5Rnd_127x108_Mag", "", 20000, -1, "" },
            { "5Rnd_127x108_APDS_Mag", "", 90000, -1, "" },
            { "7Rnd_408_Mag", "", 20000, -1, "" }

        };
        accs[] = {
            { "muzzle_snds_acp", "", 20000, -1, "" },
            { "optic_SOS", "", 65000, -1, "" },
            { "optic_DMS", "", 65000, -1, "" },
            { "optic_NVS", "", 80000, -1, "" },
            { "optic_Aco", "", 3500, 1750, "" },
            { "optic_MRCO", "", 5500, 1750, "" },
            { "optic_Arco", "", 10000, -1, "" },
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "muzzle_snds_H", "", 20000, -1, "" },
            { "muzzle_snds_L", "", 20000, -1, "" },
            { "muzzle_snds_M", "", 20000, -1, "" },
            { "muzzle_snds_B", "", 20000, -1, "" },
            { "muzzle_snds_H_SW", "", 20000, -1, "" },
            { "acc_flashlight", "", 1000, 500, "" }
    };
};
