class XtdGearModels {
    class CfgGlasses {
        class GLASSES(Shemagh) {
            META;
            label = QNAME(Shemagh);
            options[] = {"Color","Variant"};
            class Color {
                label = "Color";
                values[] = {"Pink","Blue","Green","Orange","Purple"};
                #define C_VALUE(var0,var1) class var0 { label = QUOTE(var0); description = QUOTE(A var1 shemagh.); }
                C_VALUE(Pink,pink);
                C_VALUE(Blue,blue);
                C_VALUE(Green,green);
                C_VALUE(Orange,orange);
                C_VALUE(Purple,purple);
                #undef C_VALUE
            };

            class Variant {
                label = "Variant";
                values[] = {"Up","Down"};

                class Up {
                    label = "Up";
                    description = "Hide my nose and mouth too.";
                };

                class Down {
                    label = "Down";
                    description = "Just keep my neck warm.";
                };
            };
        };
    };
};
