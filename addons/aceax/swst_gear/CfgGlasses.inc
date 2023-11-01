#define XTD_GEAR_INFO(var0) class XtdGearInfo : XtdGearInfo { var0; }

class CfgGlasses
{
    class G_Bandanna_oli;
    class SWST_Shemagh_Base : G_Bandanna_oli
    {
        class XtdGearInfo
        {
            model = "SWST_Shemagh";
            raised = "No";
        };
    };

    class SWST_Shemagh_Pink : SWST_Shemagh_Base { XTD_GEAR_INFO(color = "Pink"); };
    class SWST_Shemagh_Pink_Up : SWST_Shemagh_Pink { XTD_GEAR_INFO(raised = "Yes"); };
    class SWST_Shemagh_Blue : SWST_Shemagh_Base { XTD_GEAR_INFO(color = "Blue"); };
    class SWST_Shemagh_Blue_Up : SWST_Shemagh_Blue { XTD_GEAR_INFO(raised = "Yes"); };
    class SWST_Shemagh_Green : SWST_Shemagh_Base { XTD_GEAR_INFO(color = "Green"); };
    class SWST_Shemagh_Green_Up : SWST_Shemagh_Green { XTD_GEAR_INFO(raised = "Yes"); };
    class SWST_Shemagh_Orange : SWST_Shemagh_Base { XTD_GEAR_INFO(color = "Orange"); };
    class SWST_Shemagh_Orange_Up : SWST_Shemagh_Orange { XTD_GEAR_INFO(raised = "Yes"); };
    class SWST_Shemagh_Purple : SWST_Shemagh_Base { XTD_GEAR_INFO(color = "Purple"); };
    class SWST_Shemagh_Purple_Up : SWST_Shemagh_Purple { XTD_GEAR_INFO(raised = "Yes"); };
    class SWST_Shemagh_Gold : SWST_Shemagh_Base { XTD_GEAR_INFO(color = "Gold"); };
    class SWST_Shemagh_Gold_Up : SWST_Shemagh_Gold { XTD_GEAR_INFO(raised = "Yes"); };
};
