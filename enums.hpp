void enums()  {
    local int pos = FTell();
    FSkip(-4);
    if (fieldName == "GroupName_Role") {
        enum {
            role_Normal =  0,
            role_Idle =  1,
            role_SitFakeDead =  2,
            role_LieFakeDead =  3,
            role_Hypnotized =  4,
            role_LieHypnotized =  5,
            role_standingIdle =  6,
            role_Eating =  7,
            role_Special =  8,
            role_BreakDownDoor =  9,
            role_HangingFakeDead =  10,
            role_SplitInHalf =  11,
            role_Dead =  12,
            role_DeadPosed =  13,
            role_DeadPosed2 =  14,
            role_DeadPosed3 =  15,
        } GroupName_Role;
    }
    else if (findS(fieldName, "DamageType") != -1) {
        enum { 
            None = -1,
            Minimum = 0,
            NormalS = 1,
            NormalL = 2,
            NormalLL = 3,
            Down = 4,
            DownBound = 5,
            Slam = 6,
            SlamBound = 7,
            Upper = 8,
            HyperUpper = 9,
            HyperUpperAir = 10,
            Blown = 11,
            Collapse = 12,
            RollingUpper = 13,
            CheckSpin = 14,
            Spin = 15,
            DiagonalBlown = 16,
            WindS = 17,
            WindL = 18,
            SnatchRelase = 19,
            StraightBlown = 20,
            Tremor = 21,
            Inhale = 22,
            MotionContinue = 23,
            Explosion = 24
        } DamageType;
    } 
    else {
        local string enumName = fieldOrgTypeName;
        if (fieldName == "__value")
            enumName = parentof(this).name;
        switch (enumName) { //Input Enums by their OriginalType (as seen in RawData) Here:
            case "app.PlayerVergilPL.ActiveAction":
	            enum app_PlayerVergilPL_ActiveAction {
		            Base = 0,
		            Yamato = 1,
		            Beowulf = 2,
		            Forceedge = 3,
		            TrickAction = 4,
		            Devil = 5,
		            TheDevil = 6,
		            Provoke = 7,
	            } Enum;
	            break;
            case "via.motion.JointInfo.Type":
                enum via_motion_JointInfo_Type {
                    Joint = 0,
                    Append = 1,
                    Extra = 2,
                    Locator = 3,
                } Enum;
                break;
            case "app.ropeway.gamemastering.SaveDataManager.WarningState":
                enum app_ropeway_gamemastering_SaveDataManager_WarningState {
                    NONE = 0,
                    AUTO_SAVE_ICON = 1,
                    GENERAL_DIALOG = 2,
                } Enum;
                break;
            case "app.ropeway.gamemastering.RogueGimmickManager.State":
                enum app_ropeway_gamemastering_RogueGimmickManager_State {
                    INVALID = -1,
                    INITIALIZE = 0,
                    WAIT_TO_INGAME = 1,
                    INITIALIZE_TO_INGAME = 2,
                    ENABLE = 3,
                } Enum;
            case "via.hid.KeyboardKey":
	            enum {
		            KeyboardKey_None = 0,
		            KeyboardKey_LButton = 1,
		            KeyboardKey_RButton = 2,
		            KeyboardKey_Cancel = 3,
		            KeyboardKey_MButton = 4,
		            KeyboardKey_XButton1 = 5,
		            KeyboardKey_XButton2 = 6,
		            KeyboardKey_Back = 8,
		            KeyboardKey_Tab = 9,
		            KeyboardKey_Clear = 12,
		            KeyboardKey_Enter = 13,
		            KeyboardKey_Return = 13,
		            KeyboardKey_Shift = 16,
		            KeyboardKey_Control = 17,
		            KeyboardKey_Menu = 18,
		            KeyboardKey_Pause = 19,
		            KeyboardKey_Capital = 20,
		            KeyboardKey_Kana = 21,
		            KeyboardKey_Junja = 23,
		            KeyboardKey_Final = 24,
		            KeyboardKey_Hanja = 25,
		            KeyboardKey_Escape = 27,
		            KeyboardKey_Convert = 28,
		            KeyboardKey_NonConvert = 29,
		            KeyboardKey_Accept = 30,
		            KeyboardKey_ModeChange = 31,
		            KeyboardKey_Space = 32,
		            KeyboardKey_Prior = 33,
		            KeyboardKey_Next = 34,
		            KeyboardKey_End = 35,
		            KeyboardKey_Home = 36,
		            KeyboardKey_Left = 37,
		            KeyboardKey_Up = 38,
		            KeyboardKey_Right = 39,
		            KeyboardKey_Down = 40,
		            KeyboardKey_Select = 41,
		            KeyboardKey_Print = 42,
		            KeyboardKey_Execute = 43,
		            KeyboardKey_SnapShot = 44,
		            KeyboardKey_Insert = 45,
		            KeyboardKey_Delete = 46,
		            KeyboardKey_Help = 47,
		            KeyboardKey_Alpha0 = 48,
		            KeyboardKey_Alpha1 = 49,
		            KeyboardKey_Alpha2 = 50,
		            KeyboardKey_Alpha3 = 51,
		            KeyboardKey_Alpha4 = 52,
		            KeyboardKey_Alpha5 = 53,
		            KeyboardKey_Alpha6 = 54,
		            KeyboardKey_Alpha7 = 55,
		            KeyboardKey_Alpha8 = 56,
		            KeyboardKey_Alpha9 = 57,
		            KeyboardKey_A = 65,
		            KeyboardKey_B = 66,
		            KeyboardKey_C = 67,
		            KeyboardKey_D = 68,
		            KeyboardKey_E = 69,
		            KeyboardKey_F = 70,
		            KeyboardKey_G = 71,
		            KeyboardKey_H = 72,
		            KeyboardKey_I = 73,
		            KeyboardKey_J = 74,
		            KeyboardKey_K = 75,
		            KeyboardKey_L = 76,
		            KeyboardKey_M = 77,
		            KeyboardKey_N = 78,
		            KeyboardKey_O = 79,
		            KeyboardKey_P = 80,
		            KeyboardKey_Q = 81,
		            KeyboardKey_R = 82,
		            KeyboardKey_S = 83,
		            KeyboardKey_T = 84,
		            KeyboardKey_U = 85,
		            KeyboardKey_V = 86,
		            KeyboardKey_W = 87,
		            KeyboardKey_X = 88,
		            KeyboardKey_Y = 89,
		            KeyboardKey_Z = 90,
		            KeyboardKey_LWin = 91,
		            KeyboardKey_RWin = 92,
		            KeyboardKey_Apps = 93,
		            KeyboardKey_Sleep = 95,
		            KeyboardKey_NumPad0 = 96,
		            KeyboardKey_NumPad1 = 97,
		            KeyboardKey_NumPad2 = 98,
		            KeyboardKey_NumPad3 = 99,
		            KeyboardKey_NumPad4 = 100,
		            KeyboardKey_NumPad5 = 101,
		            KeyboardKey_NumPad6 = 102,
		            KeyboardKey_NumPad7 = 103,
		            KeyboardKey_NumPad8 = 104,
		            KeyboardKey_NumPad9 = 105,
		            KeyboardKey_Multiply = 106,
		            KeyboardKey_Add = 107,
		            KeyboardKey_Separator = 108,
		            KeyboardKey_Subtract = 109,
		            KeyboardKey_Decimal = 110,
		            KeyboardKey_Divide = 111,
		            KeyboardKey_F1 = 112,
		            KeyboardKey_F2 = 113,
		            KeyboardKey_F3 = 114,
		            KeyboardKey_F4 = 115,
		            KeyboardKey_F5 = 116,
		            KeyboardKey_F6 = 117,
		            KeyboardKey_F7 = 118,
		            KeyboardKey_F8 = 119,
		            KeyboardKey_F9 = 120,
		            KeyboardKey_F10 = 121,
		            KeyboardKey_F11 = 122,
		            KeyboardKey_F12 = 123,
		            KeyboardKey_F13 = 124,
		            KeyboardKey_F14 = 125,
		            KeyboardKey_F15 = 126,
		            KeyboardKey_F16 = 127,
		            KeyboardKey_F17 = 128,
		            KeyboardKey_F18 = 129,
		            KeyboardKey_F19 = 130,
		            KeyboardKey_F20 = 131,
		            KeyboardKey_F21 = 132,
		            KeyboardKey_F22 = 133,
		            KeyboardKey_F23 = 134,
		            KeyboardKey_F24 = 135,
		            KeyboardKey_NumLock = 144,
		            KeyboardKey_Scroll = 145,
		            KeyboardKey_NumPadEnter = 146,
		            KeyboardKey_LShift = 160,
		            KeyboardKey_RShift = 161,
		            KeyboardKey_LControl = 162,
		            KeyboardKey_RControl = 163,
		            KeyboardKey_LMenu = 164,
		            KeyboardKey_RMenu = 165,
		            KeyboardKey_OEM_1 = 186,
		            KeyboardKey_OEM_Plus = 187,
		            KeyboardKey_OEM_Comma = 188,
		            KeyboardKey_OEM_Minus = 189,
		            KeyboardKey_OEM_Period = 190,
		            KeyboardKey_OEM_2 = 191,
		            KeyboardKey_OEM_3 = 192,
		            KeyboardKey_OEM_4 = 219,
		            KeyboardKey_OEM_5 = 220,
		            KeyboardKey_OEM_6 = 221,
		            KeyboardKey_OEM_7 = 222,
		            KeyboardKey_OEM_8 = 223,
		            KeyboardKey_OEM_102 = 226,
		            KeyboardKey_Slash = 191,
		            KeyboardKey_BackSlash = 220,
	            } via_hid_KeyboardKey;
	            break;
            default:
                break;
        }
    }
    FSeek(pos);
}