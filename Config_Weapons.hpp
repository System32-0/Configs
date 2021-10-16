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
            { "hgun_Rook40_F", "", 6500, -1, "" },
            { "hgun_Pistol_01_F", "", 7000, -1, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, "" },
            { "hgun_ACPC2_F", "", 11500, -1, "" },
            { "SMG_05_F", "", 18000, -1, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, -1, "" },
            { "9Rnd_45ACP_Mag", "", 200, -1, "" },
            { "30Rnd_9x21_Mag", "", 250, -1, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, -1, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, -1, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, -1, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, -1, "" }
        };
    };
   // Rebel Double Check prices
    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "hgun_ACPC2_F", "", 11500, -1, "" },
            { "hgun_Pistol_heavy_01_MRD_F", "", 10000, -1, "" },
            { "hgun_Rook40_F", "", 6500, -1, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, "" },
            { "arifle_TRG20_F", "", 25000, -1, "" },
            { "SMG_01_F", "", 30000, -1, "" },
            { "arifle_Katiba_F", "", 30000, -1, "" },
            { "srifle_DMR_01_F", "", 50000, -1, "" },
            { "arifle_MX_SW_F", "", 150000, -1, "" },
            { "srifle_EBR_F", "", 150000, -1, "" },
            { "arifle_SDAR_F", "", 20000, -1, "" },
            { "arifle_AK12_F", "", 120000, -1, "" }, //Apex DLC
            { "arifle_AKS_F", "", 30000, -1, "" }, //Apex DLC
            { "arifle_AKM_F", "", 118000, -1, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 30000, -1, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, -1, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, -1, "" },
            { "srifle_GM6_F", "", 2000000, -1, "" },
            { "srifle_GM6_camo_F", "", 2000000, -1, "" },
            { "srifle_LRR_F", "", 2000000, -1, "" }
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "", 25, -1, "" },
            { "9Rnd_45ACP_Mag", "", 45, -1, "" },
            { "16Rnd_9x21_Mag", "", 25, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, -1, "" },
            { "30Rnd_556x45_Stanag", "", 300, -1, "" }, 
            { "30Rnd_45ACP_Mag_SMG_01", "", 100, -1, "" }, 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 15000, -1, "" }, 
            { "30Rnd_762x39_Mag_F", "", 300, -1, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, -1, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, -1, "" },
            { "10Rnd_762x54_Mag", "", 500, -1, "" },
            { "20Rnd_762x51_Mag", "", 500, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 125, -1, "" },
            { "30Rnd_580x42_Mag_F", "", 125, -1, "" }, //Apex DLC
            { "5Rnd_127x108_Mag", "", 20000, -1, "" },
            { "5Rnd_127x108_APDS_Mag", "", 100000, -1, "" },
            { "7Rnd_408_Mag", "", 20000, -1, "" }
        };
        accs[] = {
            { "muzzle_snds_acp", "", 20000, -1, "" },
            { "optic_SOS", "", 65000, -1, "" },
            { "optic_DMS", "", 65000, -1, "" },
            { "optic_NVS", "", 80000, -1, "" },
            { "optic_Aco", "", 3500, -1, "" },
            { "optic_MRCO", "", 5500, -1, "" },
            { "optic_Arco", "", 10000, -1, "" },
            { "optic_ACO_grn", "", 3500, -1, "" },
            { "optic_Holosight", "", 3600, -1, "" },
            { "bipod_02_F_blk", "", 10000, -1, "" },
            { "optic_Hamr", "", 10000, -1, "" },
            { "muzzle_snds_H", "", 20000, -1, "" },
            { "muzzle_snds_L", "", 20000, -1, "" },
            { "muzzle_snds_M", "", 20000, -1, "" },
            { "muzzle_snds_B", "", 20000, -1, "" },
            { "muzzle_snds_H_SW", "", 20000, -1, "" },
            { "acc_flashlight", "", 1000, -1, "" }
        };
    };
        // Gang Hideout Todo
    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, -1, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, -1, "" },
            { "9Rnd_45ACP_Mag", "", 200, -1, "" },
            { "30Rnd_9x21_Mag", "", 250, -1, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, -1, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, -1, "" }
        };
    };
    //Basic Shops
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
            { "NVGoggles", "", 2000, -1, "" },
            { "G_Combat_Goggles_tna_F", "Fullscreen NVG", 2000, -1, "" },
            { "G_Balaclava_TI_G_tna_F", "Fullscreen NVG", 2000, -1, "" },
            { "G_Bandanna_sport", "Fullscreen NVG", 2000, -1, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, -1, "" },
            { "Chemlight_green", "", 300, -1, "" },
            { "Chemlight_blue", "", 300, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };
        //Fuel Station
    class f_station_store {
        name = "Sin City Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 300, 75, "" },
            { "ItemGPS", "", 250, 50, "" },
            { "ItemMap", "", 150, 25, "" },
            { "ItemCompass", "", 150, 25, "" },
            { "ItemWatch", "", 150, 25, "" },
            { "NVGoggles", "", 2000, -1, "" },
            { "G_Combat_Goggles_tna_F", "Fullscreen NVG", 2000, -1, "" },
            { "G_Balaclava_TI_G_tna_F", "Fullscreen NVG", 2000, -1, "" },
            { "G_Bandanna_sport", "Fullscreen NVG", 2000, -1, "" },
            { "Chemlight_red", "", 700, -1, "" },
            { "Chemlight_yellow", "", 700, -1, "" },
            { "Chemlight_green", "", 700, -1, "" },
            { "Chemlight_blue", "", 700, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };
    //Cop Shops will need some changes in the future
    class cop_basic {
        name = "Sin City  Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, -1, "" },
            { "NVGoggles", "", 2000, -1, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 2500, -1, "call life_coplevel >= 1" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2500, -1, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 2500, -1, "" },
            { "hgun_P07_F", "", 2500, -1, "call life_coplevel >= 1" },
            { "hgun_P07_khk_F", "", 2500, -1, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 2500, -1, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 2500, -1, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 2500, -1, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 2500, -1, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 2500, -1, "call life_coplevel >= 3" },
            { "srifle_DMR_07_blk_F", "", 2500, -1, "call life_coplevel >= 4" }, //Apex DLC Sniper
            { "arifle_AK12_F", "", 2500, -1, "call life_coplevel >= 7" }, //Apex DLC
            { "arifle_AKS_F", "", 2500, -1, "call life_coplevel >= 4" }, //Apex DLC
            { "arifle_AKM_F", "", 2500, -1, "call life_coplevel >= 7" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 2500, -1, "call life_coplevel >= 3" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 2500, -1, "call life_coplevel >= 4" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 2500, -1, "call life_coplevel >= 3" },
            { "SatchelCharge_Remote_Mag", "", 2500, -1, "call life_coplevel >= 6" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 125, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 3" }, //Apex DLC
            { "30Rnd_556x45_Stanag", "", 300, -1, "call life_coplevel >= 3" }, 
            { "30Rnd_762x39_Mag_F", "", 300, -1, "call life_coplevel >= 3" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, -1, "call life_coplevel >= 3" }, //Apex DLC
            { "30Rnd_580x42_Mag_F", "", 125, -1, "call life_coplevel >= 3" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 500, -1, "call life_coplevel >= 3" },
            { "optic_SOS", "", 500, -1, "call life_coplevel >= 3" },
            { "optic_DMS", "", 500, -1, "call life_coplevel >= 3" },
            { "optic_NVS", "", 500, -1, "call life_coplevel >= 4" },
            { "optic_MRD", "", 500, -1, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 250, -1, "call life_coplevel >= 1" },//Pistol Flashlight
            { "acc_flashlight", "", 750, -1, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, -1, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, -1, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, -1, "call life_coplevel >= 2" },
            { "bipod_02_F_blk", "", 2750, -1, "call life_coplevel >= 2" }
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
            { "DemoCharge_Remote_Mag", "", 250000, -1, "" },
            { "arifle_Katiba_GL_F", "", 30000, -1, "" },
            { "arifle_TRG21_GL_F", "", 25000, -1, "" },
            { "arifle_Mk20_GL_F", "", 20000, -1, "" },
            { "HandGrenade", "", 50000, -1, "" }
        };
        mags[] = {};
            { "30Rnd_65x39_caseless_green", "", 500, -1, "" },
            { "30Rnd_556x45_Stanag", "", 500, -1, "" },
            { "1Rnd_HE_Grenade_shell", "", 50000, -1, "" },
            { "1Rnd_SmokeRed_Grenade_shell", "", 500, -1, "" },
            { "1Rnd_SmokeYellow_Grenade_shell", "", 500, -1, "" },
            { "1Rnd_SmokePurple_Grenade_shell", "", 500, -1, "" },
            { "1Rnd_SmokeOrange_Grenade_shell", "", 500, -1, "" },
            { "UGL_FlareWhite_F", "", 500, -1, "" },
            { "UGL_FlareGreen_F", "", 500, -1, "" },
            { "UGL_FlareRed_F", "", 500, -1, "" }
        };
        accs[] = {};
            { "optic_Hamr", "", 10000, -1, "" },
            { "bipod_02_F_blk", "", 10000, -1, "" },
            { "optic_Arco", "", 10000, -1, "" }
    };
      //rifle mastery store TODO
class rifle_m_store{
        name = "Master Rifle Armament";
        side = "civ";
        conditions = "licence_civ_rebel";
        items[] = {
         { "arifle_TRG20_F", "", 20000, -1, "call life_exp_perks select 9 >= 5" },
         { "arifle_Katiba_F", "", 25000, -1, "call life_exp_perks select 9 >= 5" },
         { "arifle_MX_SW_F", "", 120000, -1, "call life_exp_perks select 9 >= 10" },
         { "arifle_SDAR_F", "", 19000, -1, "call life_exp_perks select 9 >= 5" },
         { "arifle_AK12_F", "", 100000, -1, "call life_exp_perks select 9 >= 10" }, //Apex DLC
         { "arifle_AKS_F", "", 25000, -1, "call life_exp_perks select 9 >= 6" }, //Apex DLC
         { "arifle_AKM_F", "", 95000, -1, "call life_exp_perks select 9 >= 9" }, //Apex DLC
         { "arifle_ARX_blk_F", "", 25000, -1, "call life_exp_perks select 9 >= 9" }, //Apex DLC
         { "arifle_SPAR_01_blk_F", "", 25000, -1, "call life_exp_perks select 9 >= 7" }, //Apex DLC
         { "arifle_CTAR_blk_F", "", 25000, -1, "call life_exp_perks select 9 >= 6" }
        };
        mags[] = {};
            { "30Rnd_556x45_Stanag", "", 300, -1, "call life_exp_perks select 9 >= 5" }, 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 12000, -1, "call life_exp_perks select 9 >= 10" }, 
            { "30Rnd_762x39_Mag_F", "", 300, -1, "call life_exp_perks select 9 >= 5" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, -1, "call life_exp_perks select 9 >= 5" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, -1, "call life_exp_perks select 9 >= 5" },
            { "20Rnd_556x45_UW_mag", "", 125, -1, "call life_exp_perks select 9 >= 5" },
            { "30Rnd_580x42_Mag_F", "", 125, -1, "call life_exp_perks select 9 >= 5" } //Apex DLC
        };
        accs[] = {};
            { "optic_SOS", "", 65000, -1, "" },
            { "optic_DMS", "", 65000, -1, "" },
            { "optic_NVS", "", 80000, -1, "" },
            { "optic_Aco", "", 3500, -1, "" },
            { "optic_MRCO", "", 5500, -1, "" },
            { "optic_Arco", "", 10000, -1, "" },
            { "optic_ACO_grn", "", 3500, -1, "" },
            { "optic_Holosight", "", 3600, -1, "" },
            { "bipod_02_F_blk", "", 10000, -1, "" },
            { "optic_Hamr", "", 7500, -1, "" },
            { "muzzle_snds_H", "", 20000, -1, "" },
            { "muzzle_snds_L", "", 20000, -1, "" },
            { "muzzle_snds_M", "", 20000, -1, "" },
            { "muzzle_snds_B", "", 20000, -1, "" },
            { "muzzle_snds_H_SW", "", 20000, -1, "" },
            { "acc_flashlight", "", 1000, -1, "" }
    };
    //sniper mastery store  TODO
class sniper_m_store{
        name = "Master Sniper Armament";
        side = "civ";
        conditions = "licence_civ_rebel";
        items[] = {
         { "srifle_DMR_01_F", "", 40000, -1, "call life_exp_perks select 9 >= 5" },
         { "srifle_EBR_F", "", 135000, -1, "call life_exp_perks select 9 >= 10" },
         { "srifle_GM6_F", "", 1400000, -1, "call life_exp_perks select 9 >= 14" },
         { "srifle_GM6_camo_F", "", 1400000, -1, "call life_exp_perks select 9 >= 14" },
         { "srifle_LRR_F", "", 1800000, -1, "call life_exp_perks select 9 >= 12" }
        };
        mags[] = {};
            { "5Rnd_127x108_Mag", "", 15000, -1, "life_exp_perks select 9 >= 14" },
            { "5Rnd_127x108_APDS_Mag", "", 85000, -1, "life_exp_perks select 9 >= 14" },
            { "7Rnd_408_Mag", "", 18000, -1, "call life_exp_perks select 9 >= 12" },
            { "10Rnd_762x54_Mag", "", 500, -1, "" },
            { "20Rnd_762x51_Mag", "", 500, -1, "" }
        };
        accs[] = {};
            { "optic_SOS", "", 60000, -1, "" },
            { "optic_DMS", "", 60000, -1, "" },
            { "optic_NVS", "", 76000, -1, "" },
            { "bipod_02_F_blk", "", 10000, -1, "" },
            { "optic_Aco", "", 3500, -1, "" }
    };
    //explosive mastery store 
class explosives_m_store{
        name = "Master Explosives Armament";
        side = "civ";
        conditions = "licence_civ_rebel";
        items[] = {
       { "DemoCharge_Remote_Mag", "", 175000, -1, "call life_exp_perks select 11 >= 14" },
       { "arifle_Katiba_GL_F", "", 30000, -1, "call life_exp_perks select 11 >= 14" },
       { "arifle_TRG21_GL_F", "", 20000, -1, "call life_exp_perks select 11 >= 14" },
       { "arifle_Mk20_GL_F", "", 20000, -1, "call life_exp_perks select 11 >= 14" },
       { "HandGrenade", "", 30000, -1, "call life_exp_perks select 11 >= 14" }
        };
        mags[] = {};
       { "30Rnd_65x39_caseless_green", "", 500, -1, "call life_exp_perks select 11 >= 14" },
       { "30Rnd_556x45_Stanag", "", 500, -1, "call life_exp_perks select 11 >= 14" },
       { "1Rnd_HE_Grenade_shell", "", 30000, -1, "call life_exp_perks select 11 >= 14" },
       { "1Rnd_SmokeRed_Grenade_shell", "", 500, -1, "call life_exp_perks select 11 >= 14" },
       { "1Rnd_SmokeYellow_Grenade_shell", "", 500, -1, "call life_exp_perks select 11 >= 14" },
       { "1Rnd_SmokePurple_Grenade_shell", "", 500, -1, "call life_exp_perks select 11 >= 14" },
       { "1Rnd_SmokeOrange_Grenade_shell", "", 500, -1, "call life_exp_perks select 11 >= 14" },
       { "UGL_FlareWhite_F", "", 500, -1, "call life_exp_perks select 11 >= 14" },
       { "UGL_FlareGreen_F", "", 500, -1, "call life_exp_perks select 11 >= 14" },
       { "UGL_FlareRed_F", "", 500, -1, "call life_exp_perks select 11 >= 14" }
        };
        accs[] = {};
       { "optic_Hamr", "", 10000, -1, "" },
       { "bipod_02_F_blk", "", 10000, -1, "" },
       { "optic_Arco", "", 10000, -1, "" }
    };
     // KOS Store 
class kos_store{
        name = "KOS Island Store ";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "hgun_ACPC2_F", "", 10350, -1, "" },
            { "hgun_Pistol_heavy_01_MRD_F", "", 9000, -1, "" },
            { "hgun_Rook40_F", "", 5850, -1, "" },
            { "hgun_Pistol_heavy_02_F", "", 8865, -1, "" },
            { "arifle_TRG20_F", "", 22500, -1, "" },
            { "SMG_01_F", "", 27000, -1, "" },
            { "arifle_Katiba_F", "", 27000, -1, "" },
            { "srifle_DMR_01_F", "", 50000, -1, "" },
            { "arifle_MX_SW_F", "", 135000, -1, "" },
            { "srifle_EBR_F", "", 135000, -1, "" },
            { "arifle_SDAR_F", "", 20000, -1, "" },
            { "arifle_AK12_F", "", 108000, -1, "" }, //Apex DLC
            { "arifle_AKS_F", "", 27000, -1, "" }, //Apex DLC
            { "arifle_AKM_F", "", 118000, -1, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 27000, -1, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 29700, -1, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 27000, -1, "" },
            { "srifle_GM6_F", "", 1800000, -1, "" },
            { "srifle_GM6_camo_F", "", 1800000, -1, "" },
            { "srifle_LRR_F", "", 1800000, -1, "" }
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "", 25, -1, "" },
            { "9Rnd_45ACP_Mag", "", 45, -1, "" },
            { "16Rnd_9x21_Mag", "", 25, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, -1, "" },
            { "30Rnd_556x45_Stanag", "", 300, -1, "" }, 
            { "30Rnd_45ACP_Mag_SMG_01", "", 100, -1, "" }, 
            { "100Rnd_65x39_caseless_mag_Tracer", "", 15000, -1, "" }, 
            { "30Rnd_762x39_Mag_F", "", 300, -1, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, -1, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, -1, "" },
            { "10Rnd_762x54_Mag", "", 500, -1, "" },
            { "20Rnd_762x51_Mag", "", 500, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 125, -1, "" },
            { "30Rnd_580x42_Mag_F", "", 125, -1, "" }, //Apex DLC
            { "5Rnd_127x108_Mag", "", 20000, -1, "" },
            { "5Rnd_127x108_APDS_Mag", "", 90000, -1, "" },
            { "7Rnd_408_Mag", "", 20000, -1, "" }
        };
        accs[] = {
            { "muzzle_snds_acp", "", 20000, -1, "" },
            { "optic_SOS", "", 65000, -1, "" },
            { "optic_DMS", "", 65000, -1, "" },
            { "optic_NVS", "", 80000, -1, "" },
            { "optic_Aco", "", 3500, -1, "" },
            { "optic_MRCO", "", 5500, -1, "" },
            { "bipod_02_F_blk", "", 10000, -1, "" },
            { "optic_Arco", "", 10000, -1, "" },
            { "optic_ACO_grn", "", 3500, -1, "" },
            { "optic_Holosight", "", 3600, -1, "" },
            { "optic_Hamr", "", 7500, -1, "" },
            { "muzzle_snds_H", "", 20000, -1, "" },
            { "muzzle_snds_L", "", 20000, -1, "" },
            { "muzzle_snds_M", "", 20000, -1, "" },
            { "muzzle_snds_B", "", 20000, -1, "" },
            { "muzzle_snds_H_SW", "", 20000, -1, "" },
            { "acc_flashlight", "", 1000, -1, "" }
    };
};
