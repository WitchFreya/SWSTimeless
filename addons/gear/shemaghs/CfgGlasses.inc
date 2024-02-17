class CfgGlasses {
    class G_Bandanna_oli; // Not a typo, bandanna is how Arma spells it.

    class SWST_Shemagh_Base : G_Bandanna_oli
    {
        ITEM_META(0);
        displayName = QNAME(Shemagh (Base));
        hiddenSelections[] = {"camo2"};
        model = QPATHTOF(data\shemagh\shemagh.p3d);
        identityTypes[] = {};
    };

    #define COLOR Pink
    #include "_Shemagh.inc"
    #undef COLOR
    #define COLOR Blue
    #include "_Shemagh.inc"
    #undef COLOR
    #define COLOR Green
    #include "_Shemagh.inc"
    #undef COLOR
    #define COLOR Orange
    #include "_Shemagh.inc"
    #undef COLOR
    #define COLOR Purple
    #include "_Shemagh.inc"
    #undef COLOR
    #define COLOR Gold
    #include "_Shemagh.inc"
    #undef COLOR
    #define COLOR Red
    #include "_Shemagh.inc"
    #undef COLOR
};
