#define GLASSES_NAME(var0) displayName = QNAME(Shemagh (var0))

#define C_SHEMAGH_VARIANT(var0)                                                         \
    class GLASSES(DOUBLES(Shemagh,var0)): GLASSES(Shemagh) {                            \
        GLASSES_NAME(var0);                                                             \
        hiddenSelections[] = {"camo2"};                                                 \
        hiddenSelectionsTextures[] = {QPATHTOF(data\shemagh\shemagh_##var0##_co.paa)};  \
        class XtdGearInfo : XtdGearInfo { color = QUOTE(var0); };                       \
    };                                                                                  \
    class GLASSES(TRIPLES(Shemagh,var0,Up)): GLASSES(DOUBLES(Shemagh,var0)) {           \
        GLASSES_NAME(var0/Up);                                                          \
        model = QPATHTOF(data\shemagh\shemagh_up);                                      \
        class XtdGearInfo : XtdGearInfo {                                               \
            variant = "Up";                                                             \
        };                                                                              \
    }

class GLASSES(Shemagh) {
  ITEM_META(2);
  GLASSES_NAME(Pink);
  model = QPATHTOF(data\shemagh\shemagh);
  class XtdGearInfo {
    model = QGLASSES(Shemagh);
    color = "Pink";
    variant = "Down";
  };
};

class GLASSES(Shemagh_Up): GLASSES(Shemagh) {
  model = QPATHTOF(data\shemagh\shemagh_up);
  GLASSES_NAME(Pink/Up);
  class XtdGearInfo : XtdGearInfo {
    variant = "Up";
  };
};

C_SHEMAGH_VARIANT(Blue);
C_SHEMAGH_VARIANT(Green);
C_SHEMAGH_VARIANT(Orange);
C_SHEMAGH_VARIANT(Purple);

#undef GLASSES_NAME
#undef C_SHEMAGH_VARIANT
