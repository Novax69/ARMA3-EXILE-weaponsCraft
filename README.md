# weaponsCraft
Allow peoples to craft weapons in Exile

It allows everyone to craft weapons on Exile servers,

It just places all the crafts on the floor instead of placing them in a Backpack 



How to install ?


If you use CDAH :

go to CDAH_crafting/logic and replace the file CDAH_ExileClient_object_item_craft.sqf with the one given

Copy the folder Custom in your Mission folder.

Open config.cpp, search for class CfgCraftingRecipes

and add below : 

        #include "Custom\Crafts\accessoriesCrafts.hpp"
        #include "Custom\Crafts\ammoCrafts.hpp"
        #include "Custom\Crafts\bagsCrafts.hpp"
        #include "Custom\Crafts\clothesCrafts.hpp"
        #include "Custom\Crafts\itemsCrafts.hpp"
        #include "Custom\Crafts\launchersCrafts.hpp"
        #include "Custom\Crafts\pistolsCrafts.hpp"
        #include "Custom\Crafts\riflesCrafts.hpp"
        #include "Custom\Crafts\SMGCrafts.hpp"
        #include "Custom\Crafts\heavygunCrafts.hpp"
        #include "Custom\Crafts\sniperCrafts.hpp"
       
And it's done ! 


If you don't use CDAH :

Copy the folder Custom inside your Missions folder
Open the config.cpp and search for class CfgExileCustomCode 

Add this line :     ExileClient_object_item_craft = "Custom\Crafts\ExileClient_object_item_craft.sqf";

Then search for class CfgCraftingRecipes and add : 

        #include "Custom\Crafts\accessoriesCrafts.hpp"
        #include "Custom\Crafts\ammoCrafts.hpp"
        #include "Custom\Crafts\bagsCrafts.hpp"
        #include "Custom\Crafts\clothesCrafts.hpp"
        #include "Custom\Crafts\itemsCrafts.hpp"
        #include "Custom\Crafts\launchersCrafts.hpp"
        #include "Custom\Crafts\pistolsCrafts.hpp"
        #include "Custom\Crafts\riflesCrafts.hpp"
        #include "Custom\Crafts\SMGCrafts.hpp"
        #include "Custom\Crafts\heavygunCrafts.hpp"
        #include "Custom\Crafts\sniperCrafts.hpp"


You then just have to go into the folder Custom/Crafts and edit the files to place your differents craftings inside !
