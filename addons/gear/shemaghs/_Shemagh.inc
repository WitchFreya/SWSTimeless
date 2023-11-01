#ifdef COLOR

class SWST_Shemagh_##COLOR : SWST_Shemagh_Base
{
    SCOPE(2);
    displayName = QNAME(Shemagh (COLOR));
    hiddenSelectionsTextures[] = {QPATHTOF(data\shemagh\shemagh_##COLOR##_co.paa)};
};

class SWST_Shemagh_##COLOR##_Up : SWST_Shemagh_##COLOR
{
    displayName = QNAME(Shemagh (COLOR/Raised));
    model = QPATHTOF(data\shemagh\shemagh_up.p3d);
};

#endif
