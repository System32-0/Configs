/*
		File: Config_Crafting.hpp
		Author: System32 
		
		usage:
		{weapon_class,{itemNeeded,amount},{craft_level_needed}}
*/

class CraftCfg 
{
    class weapon 
    {
        title = "Weapons";
        list[] = {
            { "arifle_MXM_F", {"iron_refined",20},{15}}
        };
    };
	
    class uniform
    {
        title = "Uniforms";
        list[] = {
            { "U_C_Mechanic_01_F", {"iron_refined", 15},{0}}
        };
    };
    
    class backpack
    {
        title = "Backpacks";
        list[] = {
			{ "B_Kitbag_cbr", {"iron_refined", 1 },{0}}
        };
    };
    
    class vest {
        title = "Vests";
        list[] = {
            { "V_Chestrig_rgr", { "iron_refined", 5 },{0}}
        };
    };
    
    class misc {
        title = "Misc Items";
        list[] = {
            { "Binocular", {"iron_refined", 2 },{0}}
        };
    };
    
    class item {
        title = "Items";
        list[] = {
            { "boltcutter", { "iron_refined", 5, "diamond", 3 },{0} }
        };
    };
    
  //VEHICLES NOT YET COMPLETED
  /*
	When adding vehicles, you must use the following guide.
	list[] = {"VEHICLE_CLASSNAME",{"MATERIALS",AMOUNT}}, {crafting level required}
  */
   class vehicle {
       title = "Vehicles";
       list[] = {
		   { "C_Kart_01_black_F", { "oil_processed", 1}, {0}}
	   };
    };
};
