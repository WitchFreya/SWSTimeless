class CfgGlasses
{
    class SWST_Shemagh : SWST_BaseGearModel
    {
        label = QNAME(Shemagh);
        options[] = {"Color","Raised"};

        class Color
        {
            values[] = {
                "Pink"
                , "Blue"
                , "Green"
                , "Orange"
                , "Purple"
                , "Gold"
            };

            class Pink {};
            class Blue {};
            class Green {};
            class Orange {};
            class Purple {};
            class Gold {};
        };

        class Raised : YesNoOption {};
    };
};
