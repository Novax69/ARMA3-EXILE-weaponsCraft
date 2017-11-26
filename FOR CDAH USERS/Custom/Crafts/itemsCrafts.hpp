    class weapon_parts: Exile_AbstractCraftingRecipe
    {
            name = "1 - Weapons Parts / Pieces d'armes";
            pictureItem = "Exile_Item_WeaponParts";
			requiresFire = 1;
			//requiresConcreteMixer = true;
			//requiredInteractionModelGroup = "WorkBench";
            returnedItems[] =
            {
                    {1, "Exile_Item_WeaponParts"}
            };
            tools[] =
            {
                    "Exile_Item_CordlessScrewdriver"
            };
            components[] =
            {
                    {2, "Exile_Item_MetalBoard"},
					{1, "Exile_Item_MetalScrews"}
            };
    };
	
	    class box_screws: Exile_AbstractCraftingRecipe
    {
            name = "2 - Box of Screws / Boite de Vis";
            pictureItem = "Exile_Item_MetalScrews";
			requiresFire = 1;
			//requiresConcreteMixer = true;
			//requiredInteractionModelGroup = "WorkBench";
            returnedItems[] =
            {
                    {2, "Exile_Item_MetalScrews"}
            };
            tools[] =
            {
                    "Exile_Item_CordlessScrewdriver"
            };
            components[] =
            {
                    {1, "Exile_Item_JunkMetal"}
            };
    };
	
	class toilet1_paper: Exile_AbstractCraftingRecipe
    {
            name = "Toilet Paper";
            pictureItem = "Exile_Item_ToiletPaper";
			//requiresFire = 1;
			//requiresConcreteMixer = true;
			//requiredInteractionModelGroup = "WorkBench";
            returnedItems[] =
            {
                    {2, "Exile_Item_ToiletPaper"}
            };
            tools[] =
            {
             //       "Exile_Item_CordlessScrewdriver"
            };
            components[] =
            {
                    {1, "Exile_Item_Magazine01"}
            };
    };
	
	class toilet2_paper: Exile_AbstractCraftingRecipe
    {
            name = "Toilet Paper";
            pictureItem = "Exile_Item_ToiletPaper";
			//requiresFire = 1;
			//requiresConcreteMixer = true;
			//requiredInteractionModelGroup = "WorkBench";
            returnedItems[] =
            {
                    {2, "Exile_Item_ToiletPaper"}
            };
            tools[] =
            {
             //       "Exile_Item_CordlessScrewdriver"
            };
            components[] =
            {
                    {1, "Exile_Item_Magazine02"}
            };
    };
	class toilet3_paper: Exile_AbstractCraftingRecipe
    {
            name = "Toilet Paper";
            pictureItem = "Exile_Item_ToiletPaper";
			//requiresFire = 1;
			//requiresConcreteMixer = true;
			//requiredInteractionModelGroup = "WorkBench";
            returnedItems[] =
            {
                    {2, "Exile_Item_ToiletPaper"}
            };
            tools[] =
            {
             //       "Exile_Item_CordlessScrewdriver"
            };
            components[] =
            {
                    {1, "Exile_Item_Magazine03"}
            };
    };
	class toilet4_paper: Exile_AbstractCraftingRecipe
    {
            name = "Toilet Paper";
            pictureItem = "Exile_Item_ToiletPaper";
			//requiresFire = 1;
			//requiresConcreteMixer = true;
			//requiredInteractionModelGroup = "WorkBench";
            returnedItems[] =
            {
                    {2, "Exile_Item_ToiletPaper"}
            };
            tools[] =
            {
             //       "Exile_Item_CordlessScrewdriver"
            };
            components[] =
            {
                    {1, "Exile_Item_Magazine04"}
            };
    };
	
	class cartridges_item: Exile_AbstractCraftingRecipe
    {
            name = "3- Cartridges + Projectiles";
            pictureItem = "CDAH_Cartridges_item";
			requiresFire = 1;
			//requiresConcreteMixer = true;
			requiredInteractionModelGroup = "WorkBench";
            returnedItems[] =
            {
                    {4, "CDAH_Cartridges_item"},
					{4, "CDAH_Projectiles_item"}
            };
            tools[] =
            {
                    "Exile_Item_CordlessScrewdriver"
            };
            components[] =
            {
                    {1, "Exile_Item_MetalPole"}
            };
    };
	
	class gunpowder_item: Exile_AbstractCraftingRecipe
    {
            name = "4- GunPowder / Poudre noire";
            pictureItem = "CDAH_Gun_Powder_item";
			//requiresFire = 1;
			//requiresConcreteMixer = true;
			//requiredInteractionModelGroup = "WorkBench";
            returnedItems[] =
            {
                    {2, "CDAH_Gun_Powder_item"}
					
            };
            tools[] =
            {
                    "Exile_Item_CordlessScrewdriver"
            };
            components[] =
            {
                    {1, "Exile_Item_Sand"},
					{1, "Exile_Item_DuctTape"}
            };
    };
	
	