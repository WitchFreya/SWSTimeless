#define CLASSES_WEAPONS         \
    "SWST_Canteen_Hoof"         \
    , "SWST_Canteen_Hoof_Half"  \
    , "SWST_Canteen_Hoof_Empty"

class CfgWeapons {
    class ACE_Canteen;

    class SWST_Canteen_Hoof : ACE_Canteen {
        ITEM_META(2);
        displayName = "Hoof's Special Canteen";
        descriptionShort = "Hoof's specially-requisitioned canteen filled with CouldGhost Iced Tea.<br/>Weirdly, any drink put in it also just tastes like CouldGhost Iced Tea.";
        acex_field_rations_replacementItem = "SWST_Canteen_Hoof_Half";
        acex_field_rations_consumeText = "Drinking Hoof's CouldGhost Iced Tea from %1...";
        acex_field_rations_thirstQuenched = 8;
    };

    class SWST_Canteen_Hoof_Half : SWST_Canteen_Hoof {
        SCOPE(1);
        displayName = "Hoof's Special Canteen (Half)";
        ace_arsenal_uniqueBase = "SWST_Canteen_Hoof";
        acex_field_rations_refillAmount = 0.5;
        acex_field_rations_refillItem = "SWST_Canteen_Hoof";
        acex_field_rations_replacementItem = "SWST_Canteen_Hoof_Empty";
        descriptionShort = "Hoof's specially-requisitioned canteen half-filled with CouldGhost Iced Tea.<br/>Weirdly, any drink put in it also just tastes like CouldGhost Iced Tea.<br/>It's half-empty. Tragic...";
        class ItemInfo : ItemInfo {
            mass = 3;
        };
    };

    class SWST_Canteen_Hoof_Empty : SWST_Canteen_Hoof_Half {
        displayName = "Hoof's Special Canteen (Empty)";
        descriptionShort = "Hoof's specially-requisitioned canteen.<br/>Weirdly, any drink put in it also just tastes like CouldGhost Iced Tea.<br/>It's empty. You miss the CouldGhost Iced Tea already.";
        acex_field_rations_refillAmount = 1;
        acex_field_replacementItem = "";
        acex_field_rations_thirstQuenched = 0;
        class ItemInfo : ItemInfo {
            mass = 1;
        };
    };
};
