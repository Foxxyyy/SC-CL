#pragma once

typedef enum RotOrder
{
	RotOrder_xyz = 0,
	RotOrder_yzx = 1,
	RotOrder_zxy = 2,
	RotOrder_pry = 2,//pitch:roll:yaw
	RotOrder_xzy = 3,
	RotOrder_yxz = 4,
	RotOrder_zyx = 5,
} RotOrder;

typedef enum Font
{
	Font_Chalet_LondonNineteenSixty,
	Font_SignPainter_HouseScript,
	Font_RockstarTAG,
	Font_GTAVLeaderBoard,
	Font_ChaletComprime_CologneSixty,
	Font_Chalet_LondonNineteenSixtyNumb,
	Font_ChaletComprime_CologneSixty2,
	Font_PricedownGTAVInt
} Font;

typedef enum Hud
{
	HUD,
	HUD_WANTED_STARS,
	HUD_WEAPON_ICON,
	HUD_CASH,
	HUD_MP_CASH,
	HUD_MP_MESSAGE,
	HUD_VEHICLE_NAME,
	HUD_AREA_NAME,
	HUD_VEHICLE_CLASS,
	HUD_STREET_NAME,
	HUD_HELP_TEXT,
	HUD_FLOATING_HELP_TEXT_1,
	HUD_FLOATING_HELP_TEXT_2,
	HUD_CASH_CHANGE,
	HUD_RETICLE,
	HUD_SUBTITLE_TEXT,
	HUD_RADIO_STATIONS,
	HUD_SAVING_GAME,
	HUD_GAME_STREAM,
	HUD_WEAPON_WHEEL
} Hud;

typedef enum Explosion
{
	EXPLOSION_GRENADE,
	EXPLOSION_GRENADELAUNCHER,
	EXPLOSION_STICKYBOMB,
	EXPLOSION_MOLOTOV,
	EXPLOSION_ROCKET,
	EXPLOSION_TANKSHELL,
	EXPLOSION_HI_OCTANE,
	EXPLOSION_CAR,
	EXPLOSION_PLANE,
	EXPLOSION_PETROL_PUMP,
	EXPLOSION_BIKE,
	EXPLOSION_DIR_STEAM,
	EXPLOSION_DIR_FLAME,
	EXPLOSION_DIR_WATER_HYDRANT,
	EXPLOSION_DIR_GAS_CANISTER,
	EXPLOSION_BOAT,
	EXPLOSION_SHIP_DESTROY,
	EXPLOSION_TRUCK,
	EXPLOSION_BULLET,
	EXPLOSION_SMOKEGRENADELAUNCHER,
	EXPLOSION_SMOKEGRENADE,
	EXPLOSION_BZGAS,
	EXPLOSION_FLARE,
	EXPLOSION_GAS_CANISTER,
	EXPLOSION_EXTINGUISHER,
	EXPLOSION_PROGRAMMABLEAR,
	EXPLOSION_TRAIN,
	EXPLOSION_BARREL,
	EXPLOSION_PROPANE,
	EXPLOSION_BLIMP,
	EXPLOSION_DIR_FLAME_EXPLODE,
	EXPLOSION_TANKER,
	EXPLOSION_PLANE_ROCKET,
	EXPLOSION_VEHICLE_BULLET,
	EXPLOSION_GAS_TANK,
	EXPLOSION_FIREWORK,
	EXPLOSION_SNOWBALL,
	EXPLOSION_PROXMINE,
	EXPLOSION_VALKYRIE_CANNON
} Explosion;

typedef enum GadgetHash
{
	GADGET_NIGHTVISION = 0xA720365C,
	GADGET_PARACHUTE = 0xFBAB5776
} GadgetHash;

typedef enum CarCol
{
	CARCOL_METALLIC_BLACK,
	CARCOL_METALLIC_GRAPHITE_BLACK,
	CARCOL_METALLIC_BLACK_STEAL,
	CARCOL_METALLIC_DARK_SILVER,
	CARCOL_METALLIC_SILVER,
	CARCOL_METALLIC_BLUE_SILVER,
	CARCOL_METALLIC_STEEL_GRAY,
	CARCOL_METALLIC_SHADOW_SILVER,
	CARCOL_METALLIC_STONE_SILVER,
	CARCOL_METALLIC_MIDNIGHT_SILVER,
	CARCOL_METALLIC_GUN_METAL,
	CARCOL_METALLIC_ANTHRACITE_GREY,
	CARCOL_MATTE_BLACK,
	CARCOL_MATTE_GRAY,
	CARCOL_MATTE_LIGHT_GREY,
	CARCOL_UTIL_BLACK,
	CARCOL_UTIL_BLACK_POLY,
	CARCOL_UTIL_DARK_SILVER,
	CARCOL_UTIL_SILVER,
	CARCOL_UTIL_GUN_METAL,
	CARCOL_UTIL_SHADOW_SILVER,
	CARCOL_WORN_BLACK,
	CARCOL_WORN_GRAPHITE,
	CARCOL_WORN_SILVER_GREY,
	CARCOL_WORN_SILVER,
	CARCOL_WORN_BLUE_SILVER,
	CARCOL_WORN_SHADOW_SILVER,
	CARCOL_METALLIC_RED,
	CARCOL_METALLIC_TORINO_RED,
	CARCOL_METALLIC_FORMULA_RED,
	CARCOL_METALLIC_BLAZE_RED,
	CARCOL_METALLIC_GRACEFUL_RED,
	CARCOL_METALLIC_GARNET_RED,
	CARCOL_METALLIC_DESERT_RED,
	CARCOL_METALLIC_CABERNET_RED,
	CARCOL_METALLIC_CANDY_RED,
	CARCOL_METALLIC_SUNRISE_ORANGE,
	CARCOL_METALLIC_CLASSIC_GOLD,
	CARCOL_METALLIC_ORANGE,
	CARCOL_MATTE_RED,
	CARCOL_MATTE_DARK_RED,
	CARCOL_MATTE_ORANGE,
	CARCOL_MATTE_YELLOW,
	CARCOL_UTIL_RED,
	CARCOL_UTIL_BRIGHT_RED,
	CARCOL_UTIL_GARNET_RED,
	CARCOL_WORN_RED,
	CARCOL_WORN_GOLDEN_RED,
	CARCOL_WORN_DARK_RED,
	CARCOL_METALLIC_DARK_GREEN,
	CARCOL_METALLIC_RACING_GREEN,
	CARCOL_METALLIC_SEA_GREEN,
	CARCOL_METALLIC_OLIVE_GREEN,
	CARCOL_METALLIC_GREEN,
	CARCOL_METALLIC_GASOLINE_BLUE_GREEN,
	CARCOL_MATTE_LIME_GREEN,
	CARCOL_UTIL_DARK_GREEN_,
	CARCOL_UTIL_GREEN,
	CARCOL_WORN_DARK_GREEN,
	CARCOL_WORN_GREEN,
	CARCOL_WORN_SEA_WASH,
	CARCOL_METALLIC_MIDNIGHT_BLUE,
	CARCOL_METALLIC_DARK_BLUE,
	CARCOL_METALLIC_SAXONY_BLUE,
	CARCOL_METALLIC_BLUE,
	CARCOL_METALLIC_MARINER_BLUE,
	CARCOL_METALLIC_HARBOR_BLUE,
	CARCOL_METALLIC_DIAMOND_BLUE,
	CARCOL_METALLIC_SURF_BLUE,
	CARCOL_METALLIC_NAUTICAL_BLUE,
	CARCOL_METALLIC_BRIGHT_BLUE,
	CARCOL_METALLIC_PURPLE_BLUE,
	CARCOL_METALLIC_SPINNAKER_BLUE,
	CARCOL_METALLIC_ULTRA_BLUE,
	CARCOL_METALLIC_BRIGHT_BLUE2,
	CARCOL_UTIL_DARK_BLUE,
	CARCOL_UTIL_MIDNIGHT_BLUE,
	CARCOL_UTIL_BLUE,
	CARCOL_UTIL_SEA_FOAM_BLUE,
	CARCOL_UTIL_LIGHTNING_BLUE,
	CARCOL_UTIL_MAUI_BLUE_POLY,
	CARCOL_UTIL_BRIGHT_BLUE,//SLATE_BLUE
	CARCOL_MATTE_DARK_BLUE,
	CARCOL_MATTE_BLUE,
	CARCOL_MATTE_MIDNIGHT_BLUE,
	CARCOL_WORN_DARK_BLUE,
	CARCOL_WORN_BLUE,
	CARCOL_WORN_LIGHT_BLUE,
	CARCOL_METALLIC_TAXI_YELLOW,
	CARCOL_METALLIC_RACE_YELLOW,
	CARCOL_METALLIC_BRONZE,
	CARCOL_METALLIC_YELLOW_BIRD,
	CARCOL_METALLIC_LIME,
	CARCOL_METALLIC_CHAMPAGNE,
	CARCOL_METALLIC_PUEBLO_BEIGE,
	CARCOL_METALLIC_DARK_IVORY,
	CARCOL_METALLIC_CHOCO_BROWN,
	CARCOL_METALLIC_GOLDEN_BROWN,
	CARCOL_METALLIC_LIGHT_BROWN,
	CARCOL_METALLIC_STRAW_BEIGE,
	CARCOL_METALLIC_MOSS_BROWN,
	CARCOL_METALLIC_BISTON_BROWN,
	CARCOL_METALLIC_BEECHWOOD,
	CARCOL_METALLIC_DARK_BEECHWOOD,
	CARCOL_METALLIC_CHOCO_ORANGE,
	CARCOL_METALLIC_BEACH_SAND,
	CARCOL_METALLIC_SUN_BLEECHED_SAND,
	CARCOL_METALLIC_CREAM,
	CARCOL_UTIL_BROWN,
	CARCOL_UTIL_MEDIUM_BROWN,
	CARCOL_UTIL_LIGHT_BROWN,
	CARCOL_METALLIC_WHITE,
	CARCOL_METALLIC_FROST_WHITE,
	CARCOL_WORN_HONEY_BEIGE,
	CARCOL_WORN_BROWN,
	CARCOL_WORN_DARK_BROWN,
	CARCOL_WORN_STRAW_BEIGE,
	CARCOL_BRUSHED_STEEL,
	CARCOL_BRUSHED_BLACK_STEEL,
	CARCOL_BRUSHED_ALUMINIUM,
	CARCOL_CHROME,
	CARCOL_WORN_OFF_WHITE,
	CARCOL_UTIL_OFF_WHITE,
	CARCOL_WORN_ORANGE,
	CARCOL_WORN_LIGHT_ORANGE,
	CARCOL_METALLIC_SECURICOR_GREEN,//PEA_GREEN
	CARCOL_WORN_TAXI_YELLOW,
	CARCOL_POLICE_CAR_BLUE,
	CARCOL_MATTE_GREEN,
	CARCOL_MATTE_BROWN,
	CARCOL_WORN_ORANGE2,
	CARCOL_MATTE_WHITE,
	CARCOL_WORN_WHITE,
	CARCOL_WORN_OLIVE_ARMY_GREEN,
	CARCOL_PURE_WHITE,
	CARCOL_HOT_PINK,
	CARCOL_SALMON_PINK,
	CARCOL_METALLIC_VERMILLION_PINK,
	CARCOL_ORANGE,
	CARCOL_GREEN,
	CARCOL_BLUE,//FLOURESCENT_BLUE
	CARCOL_METTALIC_BLACK_BLUE,
	CARCOL_METALLIC_BLACK_PURPLE,
	CARCOL_METALLIC_BLACK_RED,
	CARCOL_HUNTER_GREEN,
	CARCOL_METALLIC_PURPLE,
	CARCOL_METAILLIC_V_DARK_BLUE,
	CARCOL_MODSHOP_BLACK1,
	CARCOL_MATTE_PURPLE,
	CARCOL_MATTE_DARK_PURPLE,
	CARCOL_METALLIC_LAVA_RED,
	CARCOL_MATTE_FOREST_GREEN,
	CARCOL_MATTE_OLIVE_DRAB,
	CARCOL_MATTE_DESERT_BROWN,
	CARCOL_MATTE_DESERT_TAN,
	CARCOL_MATTE_FOILAGE_GREEN,
	CARCOL_DEFAULT_ALLOY_COLOR,
	CARCOL_EPSILON_BLUE,
	CARCOL_GOLD,
	CARCOL_GOLD_SATIN,
	CARCOL_GOLD_SPEC

} CarCol;

typedef enum CarColARGB
#ifndef _MSC_VER
 : unsigned int
#endif
{
	CARCOL_ARGB_METALLIC_BLACK = 0xFF080808,
	CARCOL_ARGB_METALLIC_GRAPHITE_BLACK = 0xFF0F0F0F,
	CARCOL_ARGB_METALLIC_BLACK_STEAL = 0xFF1C1E21,
	CARCOL_ARGB_METALLIC_DARK_SILVER = 0xFF292C2E,
	CARCOL_ARGB_METALLIC_SILVER = 0xFF5A5E66,
	CARCOL_ARGB_METALLIC_BLUE_SILVER = 0xFF777C87,
	CARCOL_ARGB_METALLIC_STEEL_GRAY = 0xFF515459,
	CARCOL_ARGB_METALLIC_SHADOW_SILVER = 0xFF323B47,
	CARCOL_ARGB_METALLIC_STONE_SILVER = 0xFF333333,
	CARCOL_ARGB_METALLIC_MIDNIGHT_SILVER = 0xFF1F2226,
	CARCOL_ARGB_METALLIC_GUN_METAL = 0xFF23292E,
	CARCOL_ARGB_METALLIC_ANTHRACITE_GREY = 0xFF121110,
	CARCOL_ARGB_MATTE_BLACK = 0xFF050505,
	CARCOL_ARGB_MATTE_GRAY = 0xFF121212,
	CARCOL_ARGB_MATTE_LIGHT_GREY = 0xFF2F3233,
	CARCOL_ARGB_UTIL_BLACK = 0xFF080808,
	CARCOL_ARGB_UTIL_BLACK_POLY = 0xFF121212,
	CARCOL_ARGB_UTIL_DARK_SILVER = 0xFF202224,
	CARCOL_ARGB_UTIL_SILVER = 0xFF575961,
	CARCOL_ARGB_UTIL_GUN_METAL = 0xFF23292E,
	CARCOL_ARGB_UTIL_SHADOW_SILVER = 0xFF323B47,
	CARCOL_ARGB_WORN_BLACK = 0xFF0F1012,
	CARCOL_ARGB_WORN_GRAPHITE = 0xFF212121,
	CARCOL_ARGB_WORN_SILVER_GREY = 0xFF5B5D5E,
	CARCOL_ARGB_WORN_SILVER = 0xFF888A99,
	CARCOL_ARGB_WORN_BLUE_SILVER = 0xFF697187,
	CARCOL_ARGB_WORN_SHADOW_SILVER = 0xFF3B4654,
	CARCOL_ARGB_METALLIC_RED = 0xFF690000,
	CARCOL_ARGB_METALLIC_TORINO_RED = 0xFF8A0B00,
	CARCOL_ARGB_METALLIC_FORMULA_RED = 0xFF6B0000,
	CARCOL_ARGB_METALLIC_BLAZE_RED = 0xFF611009,
	CARCOL_ARGB_METALLIC_GRACEFUL_RED = 0xFF4A0A0A,
	CARCOL_ARGB_METALLIC_GARNET_RED = 0xFF470E0E,
	CARCOL_ARGB_METALLIC_DESERT_RED = 0xFF380C00,
	CARCOL_ARGB_METALLIC_CABERNET_RED = 0xFF26030B,
	CARCOL_ARGB_METALLIC_CANDY_RED = 0xFF630012,
	CARCOL_ARGB_METALLIC_SUNRISE_ORANGE = 0xFF802800,
	CARCOL_ARGB_METALLIC_CLASSIC_GOLD = 0xFF6E4F2D,
	CARCOL_ARGB_METALLIC_ORANGE = 0xFFBD4800,
	CARCOL_ARGB_MATTE_RED = 0xFF780000,
	CARCOL_ARGB_MATTE_DARK_RED = 0xFF360000,
	CARCOL_ARGB_MATTE_ORANGE = 0xFFAB3F00,
	CARCOL_ARGB_MATTE_YELLOW = 0xFFDE7E00,
	CARCOL_ARGB_UTIL_RED = 0xFF520000,
	CARCOL_ARGB_UTIL_BRIGHT_RED = 0xFF8C0404,
	CARCOL_ARGB_UTIL_GARNET_RED = 0xFF4A1000,
	CARCOL_ARGB_WORN_RED = 0xFF592525,
	CARCOL_ARGB_WORN_GOLDEN_RED = 0xFF754231,
	CARCOL_ARGB_WORN_DARK_RED = 0xFF210804,
	CARCOL_ARGB_METALLIC_DARK_GREEN = 0xFF001207,
	CARCOL_ARGB_METALLIC_RACING_GREEN = 0xFF001A0B,
	CARCOL_ARGB_METALLIC_SEA_GREEN = 0xFF00211E,
	CARCOL_ARGB_METALLIC_OLIVE_GREEN = 0xFF1F261E,
	CARCOL_ARGB_METALLIC_GREEN = 0xFF003805,
	CARCOL_ARGB_METALLIC_GASOLINE_BLUE_GREEN = 0xFF0B4145,
	CARCOL_ARGB_MATTE_LIME_GREEN = 0xFF418503,
	CARCOL_ARGB_UTIL_DARK_GREEN_ = 0xFF0F1F15,
	CARCOL_ARGB_UTIL_GREEN = 0xFF023613,
	CARCOL_ARGB_WORN_DARK_GREEN = 0xFF162419,
	CARCOL_ARGB_WORN_GREEN = 0xFF2A3625,
	CARCOL_ARGB_WORN_SEA_WASH = 0xFF455C56,
	CARCOL_ARGB_METALLIC_MIDNIGHT_BLUE = 0xFF000D14,
	CARCOL_ARGB_METALLIC_DARK_BLUE = 0xFF001029,
	CARCOL_ARGB_METALLIC_SAXONY_BLUE = 0xFF1C2F4F,
	CARCOL_ARGB_METALLIC_BLUE = 0xFF001B57,
	CARCOL_ARGB_METALLIC_MARINER_BLUE = 0xFF3B4E78,
	CARCOL_ARGB_METALLIC_HARBOR_BLUE = 0xFF272D3B,
	CARCOL_ARGB_METALLIC_DIAMOND_BLUE = 0xFF95B2DB,
	CARCOL_ARGB_METALLIC_SURF_BLUE = 0xFF3E627A,
	CARCOL_ARGB_METALLIC_NAUTICAL_BLUE = 0xFF1C3140,
	CARCOL_ARGB_METALLIC_BRIGHT_BLUE = 0xFF0055C4,
	CARCOL_ARGB_METALLIC_PURPLE_BLUE = 0xFF1A182E,
	CARCOL_ARGB_METALLIC_SPINNAKER_BLUE = 0xFF161629,
	CARCOL_ARGB_METALLIC_ULTRA_BLUE = 0xFF0E316D,
	CARCOL_ARGB_METALLIC_BRIGHT_BLUE2 = 0xFF395A83,
	CARCOL_ARGB_UTIL_DARK_BLUE = 0xFF09142E,
	CARCOL_ARGB_UTIL_MIDNIGHT_BLUE = 0xFF0F1021,
	CARCOL_ARGB_UTIL_BLUE = 0xFF152A52,
	CARCOL_ARGB_UTIL_SEA_FOAM_BLUE = 0xFF324654,
	CARCOL_ARGB_UTIL_LIGHTNING_BLUE = 0xFF152563,
	CARCOL_ARGB_UTIL_MAUI_BLUE_POLY = 0xFF223BA1,
	CARCOL_ARGB_UTIL_BRIGHT_BLUE = 0xFF1F1FA1,//SLATE_BLUE
	CARCOL_ARGB_MATTE_DARK_BLUE = 0xFF030E2E,
	CARCOL_ARGB_MATTE_BLUE = 0xFF0F1E73,
	CARCOL_ARGB_MATTE_MIDNIGHT_BLUE = 0xFF001C32,
	CARCOL_ARGB_WORN_DARK_BLUE = 0xFF2A3754,
	CARCOL_ARGB_WORN_BLUE = 0xA0303C5E,
	CARCOL_ARGB_WORN_LIGHT_BLUE = 0xFF3B6796,
	CARCOL_ARGB_METALLIC_TAXI_YELLOW = 0xFFF5890F,
	CARCOL_ARGB_METALLIC_RACE_YELLOW = 0xFFD9A600,
	CARCOL_ARGB_METALLIC_BRONZE = 0xFF4A341B,
	CARCOL_ARGB_METALLIC_YELLOW_BIRD = 0xFFA2A827,
	CARCOL_ARGB_METALLIC_LIME = 0xFF568F00,
	CARCOL_ARGB_METALLIC_CHAMPAGNE = 0xFF57514B,
	CARCOL_ARGB_METALLIC_PUEBLO_BEIGE = 0xFF291B06,
	CARCOL_ARGB_METALLIC_DARK_IVORY = 0xFF262117,
	CARCOL_ARGB_METALLIC_CHOCO_BROWN = 0xFF120D07,
	CARCOL_ARGB_METALLIC_GOLDEN_BROWN = 0xFF332111,
	CARCOL_ARGB_METALLIC_LIGHT_BROWN = 0xFF3D3023,
	CARCOL_ARGB_METALLIC_STRAW_BEIGE = 0xFF5E5343,
	CARCOL_ARGB_METALLIC_MOSS_BROWN = 0xFF37382B,
	CARCOL_ARGB_METALLIC_BISTON_BROWN = 0xFF221918,
	CARCOL_ARGB_METALLIC_BEECHWOOD = 0xFF575036,
	CARCOL_ARGB_METALLIC_DARK_BEECHWOOD = 0xFF241309,
	CARCOL_ARGB_METALLIC_CHOCO_ORANGE = 0xFF3B1700,
	CARCOL_ARGB_METALLIC_BEACH_SAND = 0xFF6E6246,
	CARCOL_ARGB_METALLIC_SUN_BLEECHED_SAND = 0xFB998D73,
	CARCOL_ARGB_METALLIC_CREAM = 0xFFCFC0A5,
	CARCOL_ARGB_UTIL_BROWN = 0xFF1F1709,
	CARCOL_ARGB_UTIL_MEDIUM_BROWN = 0xFB3D311D,
	CARCOL_ARGB_UTIL_LIGHT_BROWN = 0xFF665847,
	CARCOL_ARGB_METALLIC_WHITE = 0xFFF0F0F0,
	CARCOL_ARGB_METALLIC_FROST_WHITE = 0xFFB3B9C9,
	CARCOL_ARGB_WORN_HONEY_BEIGE = 0xFF615F55,
	CARCOL_ARGB_WORN_BROWN = 0xFF241E1A,
	CARCOL_ARGB_WORN_DARK_BROWN = 0xFF171413,
	CARCOL_ARGB_WORN_STRAW_BEIGE = 0xFF3B372F,
	CARCOL_ARGB_BRUSHED_STEEL = 0xFF3B4045,
	CARCOL_ARGB_BRUSHED_BLACK_STEEL = 0xFF1A1E21,
	CARCOL_ARGB_BRUSHED_ALUMINIUM = 0xFF5E646B,
	CARCOL_ARGB_CHROME = 0xFF000000,
	CARCOL_ARGB_WORN_OFF_WHITE = 0xFFB0B0B0,
	CARCOL_ARGB_UTIL_OFF_WHITE = 0xFF999999,
	CARCOL_ARGB_WORN_ORANGE = 0xFFB56519,
	CARCOL_ARGB_WORN_LIGHT_ORANGE = 0xFFC45C33,
	CARCOL_ARGB_METALLIC_SECURICOR_GREEN = 0xFF47783C,//PEA_GREEN
	CARCOL_ARGB_WORN_TAXI_YELLOW = 0xFFBA8425,
	CARCOL_ARGB_POLICE_CAR_BLUE = 0xFF2A77A1,
	CARCOL_ARGB_MATTE_GREEN = 0xFF243022,
	CARCOL_ARGB_MATTE_BROWN = 0xFF6B5F54,
	CARCOL_ARGB_WORN_ORANGE2 = 0xFFC96E34,
	CARCOL_ARGB_MATTE_WHITE = 0xFFD9D9D9,
	CARCOL_ARGB_WORN_WHITE = 0xFFF0F0F0,
	CARCOL_ARGB_WORN_OLIVE_ARMY_GREEN = 0xFF3F4228,
	CARCOL_ARGB_PURE_WHITE = 0xFFFFFFFF,
	CARCOL_ARGB_HOT_PINK = 0xFFB01259,
	CARCOL_ARGB_SALMON_PINK = 0x00F69799,
	CARCOL_ARGB_METALLIC_VERMILLION_PINK = 0xFF8F2F55,
	CARCOL_ARGB_ORANGE = 0x00C26610,
	CARCOL_ARGB_GREEN = 0x0069BD45,
	CARCOL_ARGB_BLUE = 0x0000AEEF,//FLOURESCENT_BLUE
	CARCOL_ARGB_METTALIC_BLACK_BLUE = 0xFF000108,
	CARCOL_ARGB_METALLIC_BLACK_PURPLE = 0xFF050008,
	CARCOL_ARGB_METALLIC_BLACK_RED = 0xFF080000,
	CARCOL_ARGB_HUNTER_GREEN = 0x00565751,
	CARCOL_ARGB_METALLIC_PURPLE = 0x00320642,
	CARCOL_ARGB_METAILLIC_V_DARK_BLUE = 0xFF00080F,
	CARCOL_ARGB_MODSHOP_BLACK1 = 0xFF080808,
	CARCOL_ARGB_MATTE_PURPLE = 0x00320642,
	CARCOL_ARGB_MATTE_DARK_PURPLE = 0xFF050008,
	CARCOL_ARGB_METALLIC_LAVA_RED = 0xFF6B0B00,
	CARCOL_ARGB_MATTE_FOREST_GREEN = 0xFF121710,
	CARCOL_ARGB_MATTE_OLIVE_DRAB = 0xFF323325,
	CARCOL_ARGB_MATTE_DESERT_BROWN = 0xFF3B352D,
	CARCOL_ARGB_MATTE_DESERT_TAN = 0xFF706656,
	CARCOL_ARGB_MATTE_FOILAGE_GREEN = 0xFF2B302B,
	CARCOL_ARGB_DEFAULT_ALLOY_COLOR = 0xFF414347,
	CARCOL_ARGB_EPSILON_BLUE = 0xFF6690B5,
	CARCOL_ARGB_GOLD = 0xFF47391B,
	CARCOL_ARGB_GOLD_SATIN = 0xFF47391B,
	CARCOL_ARGB_GOLD_SPEC = 0xFFFFD859


} CarColARGB;

typedef enum PedHash
#ifndef _MSC_VER
: unsigned int
#endif
{
	/**
	Letter 1 directory definition:
	------------------------------------------
	A = Ambent
	CSB = Cutscene Beta
	CS = Cutscene
	G = Gang
	HC = Heist Characters
	IG = In Game
	MP = Multiplayer
	Player = Singleplayer
	S = Special
	U = Unique
    
	Letter 2 directory definition:
	------------------------------------------
	C = Creatures
	F = Female
	M = Male
	S = Special
	G = Gang
    
	Letter 3 directory definition:
	------------------------------------------
	O = Old
	Y = Young
	M = Midlife
	**/
	
	PED_A_C_Boar = 0xCE5FF074,
	PED_A_C_Chickenhawk = 0xAAB71F62,
	PED_A_C_Chimp = 0xA8683715,
	PED_A_C_Chop = 0x14EC17EA,
	PED_A_C_Cormorant = 0x56E29962,
	PED_A_C_Cow = 0xFCFA9E1E,
	PED_A_C_Coyote = 0x644AC75E,
	PED_A_C_Crow = 0x18012A9F,
	PED_A_C_Deer = 0xD86B5A95,
	PED_A_C_Fish = 0x2FD800B7,
	PED_A_C_Hen = 0x6AF51FAF,
	PED_A_C_Husky = 0x4E8F95A2,
	PED_A_C_MtLion = 0x1250D7BA,
	PED_A_C_Pig = 0xB11BAB56,
	PED_A_C_Pigeon = 0x06A20728,
	PED_A_C_Rat = 0xC3B52966,
	PED_A_C_Retriever = 0x349F33E1,
	PED_A_C_Rhesus = 0xC2D06F53,
	PED_A_C_Rottweiler = 0x9563221D,
	PED_A_C_Seagull = 0xD3939DFD,
	PED_A_C_SharkTiger = 0x06C3F072,
	PED_A_C_shepherd = 0x431FC24C,
	PED_A_F_M_Beach_01 = 0x303638A7,
	PED_A_F_M_BevHills_01 = 0xBE086EFD,
	PED_A_F_M_BevHills_02 = 0xA039335F,
	PED_A_F_M_BodyBuild_01 = 0x3BD99114,
	PED_A_F_M_Business_02 = 0x1FC37DBC,
	PED_A_F_M_Downtown_01 = 0x654AD86E,
	PED_A_F_M_EastSA_01 = 0x9D3DCB7A,
	PED_A_F_M_EastSA_02 = 0x63C8D891,
	PED_A_F_M_FatBla_01 = 0xFAB48BCB,
	PED_A_F_M_FatCult_01 = 0xB5CF80E4,
	PED_A_F_M_FatWhite_01 = 0x38BAD33B,
	PED_A_F_M_KTown_01 = 0x52C824DE,
	PED_A_F_M_KTown_02 = 0x41018151,
	PED_A_F_M_ProlHost_01 = 0x169BD1E1,
	PED_A_F_M_Salton_01 = 0xDE0E0969,
	PED_A_F_M_SkidRow_01 = 0xB097523B,
	PED_A_F_M_SouCentMC_01 = 0xCDE955D2,
	PED_A_F_M_SouCent_01 = 0x745855A1,
	PED_A_F_M_SouCent_02 = 0xF322D338,
	PED_A_F_M_Tourist_01 = 0x505603B9,
	PED_A_F_M_TrampBeac_01 = 0x8CA0C266,
	PED_A_F_M_Tramp_01 = 0x48F96F5B,
	PED_A_F_O_GenStreet_01 = 0x61C81C85,
	PED_A_F_O_Indian_01 = 0xBAD7BB80,
	PED_A_F_O_KTown_01 = 0x47CF5E96,
	PED_A_F_O_Salton_01 = 0xCCFF7D8A,
	PED_A_F_O_SouCent_01 = 0x3DFA1830,
	PED_A_F_O_SouCent_02 = 0xA56DE716,
	PED_A_F_Y_Beach_01 = 0xC79F6928,
	PED_A_F_Y_BevHills_01 = 0x445AC854,
	PED_A_F_Y_BevHills_02 = 0x5C2CF7F8,
	PED_A_F_Y_BevHills_03 = 0x20C8012F,
	PED_A_F_Y_BevHills_04 = 0x36DF2D5D,
	PED_A_F_Y_Business_01 = 0x2799EFD8,
	PED_A_F_Y_Business_02 = 0x31430342,
	PED_A_F_Y_Business_03 = 0xAE86FDB4,
	PED_A_F_Y_Business_04 = 0xB7C61032,
	PED_A_F_Y_EastSA_01 = 0xF5B0079D,
	PED_A_F_Y_EastSA_02 = 0x0438A4AE,
	PED_A_F_Y_EastSA_03 = 0x51C03FA4,
	PED_A_F_Y_Epsilon_01 = 0x689C2A80,
	PED_A_F_Y_Fitness_01 = 0x457C64FB,
	PED_A_F_Y_Fitness_02 = 0x13C4818C,
	PED_A_F_Y_GenHot_01 = 0x2F4AEC3E,
	PED_A_F_Y_Golfer_01 = 0x7DD8FB58,
	PED_A_F_Y_Hiker_01 = 0x30830813,
	PED_A_F_Y_Hippie_01 = 0x1475B827,
	PED_A_F_Y_Hipster_01 = 0x8247D331,
	PED_A_F_Y_Hipster_02 = 0x97F5FE8D,
	PED_A_F_Y_Hipster_03 = 0xA5BA9A16,
	PED_A_F_Y_Hipster_04 = 0x199881DC,
	PED_A_F_Y_Indian_01 = 0x092D9CC1,
	PED_A_F_Y_Juggalo_01 = 0xDB134533,
	PED_A_F_Y_Runner_01 = 0xC7496729,
	PED_A_F_Y_RurMeth_01 = 0x3F789426,
	PED_A_F_Y_SCDressy_01 = 0xDB5EC400,
	PED_A_F_Y_Skater_01 = 0x695FE666,
	PED_A_F_Y_SouCent_01 = 0x2C641D7A,
	PED_A_F_Y_SouCent_02 = 0x5A8EF9CF,
	PED_A_F_Y_SouCent_03 = 0x87B25415,
	PED_A_F_Y_Tennis_01 = 0x550C79C6,
	PED_A_F_Y_Topless_01 = 0x9CF26183,
	PED_A_F_Y_Tourist_01 = 0x563B8570,
	PED_A_F_Y_Tourist_02 = 0x9123FB40,
	PED_A_F_Y_Vinewood_01 = 0x19F41F65,
	PED_A_F_Y_Vinewood_02 = 0xDAB6A0EB,
	PED_A_F_Y_Vinewood_03 = 0x379DDAB8,
	PED_A_F_Y_Vinewood_04 = 0xFAE46146,
	PED_A_F_Y_Yoga_01 = 0xC41B062E,
	PED_A_M_M_ACult_01 = 0x5442C66B,
	PED_A_M_M_AfriAmer_01 = 0xD172497E,
	PED_A_M_M_Beach_01 = 0x403DB4FD,
	PED_A_M_M_Beach_02 = 0x787FA588,
	PED_A_M_M_BevHills_01 = 0x54DBEE1F,
	PED_A_M_M_BevHills_02 = 0x3FB5C3D3,
	PED_A_M_M_Business_01 = 0x7E6A64B7,
	PED_A_M_M_EastSA_01 = 0xF9A6F53F,
	PED_A_M_M_EastSA_02 = 0x07DD91AC,
	PED_A_M_M_Farmer_01 = 0x94562DD7,
	PED_A_M_M_FatLatin_01 = 0x61D201B3,
	PED_A_M_M_GenFat_01 = 0x06DD569F,
	PED_A_M_M_GenFat_02 = 0x13AEF042,
	PED_A_M_M_Golfer_01 = 0xA9EB0E42,
	PED_A_M_M_HasJew_01 = 0x6BD9B68C,
	PED_A_M_M_Hillbilly_01 = 0x6C9B2849,
	PED_A_M_M_Hillbilly_02 = 0x7B0E452F,
	PED_A_M_M_Indian_01 = 0xDDCAAA2C,
	PED_A_M_M_KTown_01 = 0xD15D7E71,
	PED_A_M_M_Malibu_01 = 0x2FDE6EB7,
	PED_A_M_M_MexCntry_01 = 0xDD817EAD,
	PED_A_M_M_MexLabor_01 = 0xB25D16B2,
	PED_A_M_M_OG_Boss_01 = 0x681BD012,
	PED_A_M_M_Paparazzi_01 = 0xECCA8C15,
	PED_A_M_M_Polynesian_01 = 0xA9D9B69E,
	PED_A_M_M_ProlHost_01 = 0x9712C38F,
	PED_A_M_M_RurMeth_01 = 0x3BAD4184,
	PED_A_M_M_Salton_01 = 0x4F2E038A,
	PED_A_M_M_Salton_02 = 0x60F4A717,
	PED_A_M_M_Salton_03 = 0xB28C4A45,
	PED_A_M_M_Salton_04 = 0x964511B7,
	PED_A_M_M_Skater_01 = 0xD9D7588C,
	PED_A_M_M_Skidrow_01 = 0x01EEA6BD,
	PED_A_M_M_SoCenLat_01 = 0x0B8D69E3,
	PED_A_M_M_SouCent_01 = 0x6857C9B7,
	PED_A_M_M_SouCent_02 = 0x9F6D37E1,
	PED_A_M_M_SouCent_03 = 0x8BD990BA,
	PED_A_M_M_SouCent_04 = 0xC2FBFEFE,
	PED_A_M_M_StLat_02 = 0xC2A87702,
	PED_A_M_M_Tennis_01 = 0x546A5344,
	PED_A_M_M_Tourist_01 = 0xC89F0184,
	PED_A_M_M_TrampBeac_01 = 0x53B57EB0,
	PED_A_M_M_Tramp_01 = 0x1EC93FD0,
	PED_A_M_M_TranVest_01 = 0xE0E69974,
	PED_A_M_M_TranVest_02 = 0xF70EC5C4,
	PED_A_M_O_ACult_01 = 0x55446010,
	PED_A_M_O_ACult_02 = 0x4BA14CCA,
	PED_A_M_O_Beach_01 = 0x8427D398,
	PED_A_M_O_GenStreet_01 = 0xAD54E7A8,
	PED_A_M_O_KTown_01 = 0x1536D95A,
	PED_A_M_O_Salton_01 = 0x20208E4D,
	PED_A_M_O_SouCent_01 = 0x2AD8921B,
	PED_A_M_O_SouCent_02 = 0x4086BD77,
	PED_A_M_O_SouCent_03 = 0x0E32D8D0,
	PED_A_M_O_Tramp_01 = 0x174D4245,
	PED_A_M_Y_ACult_01 = 0xB564882B,
	PED_A_M_Y_ACult_02 = 0x80E59F2E,
	PED_A_M_Y_BeachVesp_01 = 0x7E0961B8,
	PED_A_M_Y_BeachVesp_02 = 0xCA56FA52,
	PED_A_M_Y_Beach_01 = 0xD1FEB884,
	PED_A_M_Y_Beach_02 = 0x23C7DC11,
	PED_A_M_Y_Beach_03 = 0xE7A963D9,
	PED_A_M_Y_BevHills_01 = 0x76284640,
	PED_A_M_Y_BevHills_02 = 0x668BA707,
	PED_A_M_Y_BreakDance_01 = 0x379F9596,
	PED_A_M_Y_BusiCas_01 = 0x9AD32FE9,
	PED_A_M_Y_Business_01 = 0xC99F21C4,
	PED_A_M_Y_Business_02 = 0xB3B3F5E6,
	PED_A_M_Y_Business_03 = 0xA1435105,
	PED_A_M_Y_Cyclist_01 = 0xFDC653C7,
	PED_A_M_Y_DHill_01 = 0xFF3E88AB,
	PED_A_M_Y_Downtown_01 = 0x2DADF4AA,
	PED_A_M_Y_EastSA_01 = 0xA4471173,
	PED_A_M_Y_EastSA_02 = 0x168775F6,
	PED_A_M_Y_Epsilon_01 = 0x77D41A3E,
	PED_A_M_Y_Epsilon_02 = 0xAA82FF9B,
	PED_A_M_Y_Gay_01 = 0xD1CCE036,
	PED_A_M_Y_Gay_02 = 0xA5720781,
	PED_A_M_Y_GenStreet_01 = 0x9877EF71,
	PED_A_M_Y_GenStreet_02 = 0x3521A8D2,
	PED_A_M_Y_Golfer_01 = 0xD71FE131,
	PED_A_M_Y_HasJew_01 = 0xE16D8F01,
	PED_A_M_Y_Hiker_01 = 0x50F73C0C,
	PED_A_M_Y_Hippy_01 = 0x7D03E617,//Caution: This Ped is unstable
	PED_A_M_Y_Hipster_01 = 0x2307A353,
	PED_A_M_Y_Hipster_02 = 0x14D506EE,
	PED_A_M_Y_Hipster_03 = 0x4E4179C6,
	PED_A_M_Y_Indian_01 = 0x2A22FBCE,
	PED_A_M_Y_Jetski_01 = 0x2DB7EEF3,
	PED_A_M_Y_Juggalo_01 = 0x91CA3E2C,
	PED_A_M_Y_KTown_01 = 0x1AF6542C,
	PED_A_M_Y_KTown_02 = 0x297FF13F,
	PED_A_M_Y_Latino_01 = 0x132C1A8E,
	PED_A_M_Y_MethHead_01 = 0x696BE0A9,
	PED_A_M_Y_MexThug_01 = 0x3053E555,
	PED_A_M_Y_MotoX_01 = 0x64FDEA7D,
	PED_A_M_Y_MotoX_02 = 0x77AC8FDA,
	PED_A_M_Y_MusclBeac_01 = 0x4B652906,
	PED_A_M_Y_MusclBeac_02 = 0xC923247C,
	PED_A_M_Y_Polynesian_01 = 0x8384FC9F,
	PED_A_M_Y_RoadCyc_01 = 0xF561A4C6,
	PED_A_M_Y_Runner_01 = 0x25305EEE,
	PED_A_M_Y_Runner_02 = 0x843D9D0F,
	PED_A_M_Y_Salton_01 = 0xD7606C30,
	PED_A_M_Y_Skater_01 = 0xC1C46677,
	PED_A_M_Y_Skater_02 = 0xAFFAC2E4,
	PED_A_M_Y_SouCent_01 = 0xE716BDCB,
	PED_A_M_Y_SouCent_02 = 0xACA3C8CA,
	PED_A_M_Y_SouCent_03 = 0xC3F0F764,
	PED_A_M_Y_SouCent_04 = 0x8A3703F1,
	PED_A_M_Y_StBla_01 = 0xCF92ADE9,
	PED_A_M_Y_StBla_02 = 0x98C7404F,
	PED_A_M_Y_StLat_01 = 0x8674D5FC,
	PED_A_M_Y_StWhi_01 = 0x2418C430,
	PED_A_M_Y_StWhi_02 = 0x36C6E98C,
	PED_A_M_Y_Sunbathe_01 = 0xB7292F0C,
	PED_A_M_Y_Surfer_01 = 0xEAC2C7EE,
	PED_A_M_Y_VinDouche_01 = 0xC19377E7,
	PED_A_M_Y_Vinewood_01 = 0x4B64199D,
	PED_A_M_Y_Vinewood_02 = 0x5D15BD00,
	PED_A_M_Y_Vinewood_03 = 0x1FDF4294,
	PED_A_M_Y_Vinewood_04 = 0x31C9E669,
	PED_A_M_Y_Yoga_01 = 0xAB0A7155,
	PED_CSB_Abigail = 0x89768941,
	PED_CSB_Anita = 0x0703F106,
	PED_CSB_Anton = 0xA5C787B6,
	PED_CSB_BallasOG = 0xABEF0004,
	PED_CSB_Bride = 0x82BF7EA1,
	PED_CSB_BurgerDrug = 0x8CDCC057,
	PED_CSB_Car3guy1 = 0x04430687,
	PED_CSB_Car3guy2 = 0x1383A508,
	PED_CSB_Chef = 0xA347CA8A,
	PED_CSB_Chin_goon = 0xA8C22996,
	PED_CSB_Cletus = 0xCAE9E5D5,
	PED_CSB_Cop = 0x9AB35F63,
	PED_CSB_Customer = 0xA44F6F8B,
	PED_CSB_Denise_friend = 0xB58D2529,
	PED_CSB_FOS_rep = 0x1BCC157B,
	PED_CSB_G = 0xA28E71D7,
	PED_CSB_Groom = 0x7AAB19D2,
	PED_CSB_Grove_str_dlr = 0xE8594E22,
	PED_CSB_Hao = 0xEC9E8F1C,
	PED_CSB_Hugh = 0x6F139B54,
	PED_CSB_Imran = 0xE3420BDB,
	PED_CSB_Janitor = 0xC2005A40,
	PED_CSB_Maude = 0xBCC475CB,
	PED_CSB_MWeather = 0x613E626C,
	PED_CSB_Ortega = 0xC0DB04CF,
	PED_CSB_Oscar = 0xF41F399B,
	PED_CSB_PornDudes = 0x2F4AFE35,
	PED_CSB_PrologueDriver = 0xF00B49DB,
	PED_CSB_ProlSec = 0x7FA2F024,
	PED_CSB_Ramp_gang = 0xC2800DBE,
	PED_CSB_Ramp_hic = 0x858C94B8,
	PED_CSB_Ramp_hipster = 0x21F58BB4,
	PED_CSB_Ramp_marine = 0x616C97B9,
	PED_CSB_Ramp_mex = 0xF64ED7D0,
	PED_CSB_Reporter = 0x2E420A24,
	PED_CSB_RoccoPelosi = 0xAA64168C,
	PED_CSB_Screen_Writer = 0x8BE12CEC,
	PED_CSB_Stripper_01 = 0xAEEA76B5,
	PED_CSB_Stripper_02 = 0x81441B71,
	PED_CSB_Tonya = 0x6343DD19,
	PED_CSB_TrafficWarden = 0xDE2937F3,
	PED_CS_AmandaTownley = 0x95EF18E3,
	PED_CS_Andreas = 0xE7565327,
	PED_CS_Ashley = 0x26C3D079,
	PED_CS_Bankman = 0x9760192E,
	PED_CS_Barry = 0x69591CF7,
	PED_CS_Beverly = 0xB46EC356,
	PED_CS_Brad = 0xEFE5AFE6,
	PED_CS_BradCadaver = 0x7228AF60,
	PED_CS_Carbuyer = 0x8CCE790F,
	PED_CS_Casey = 0xEA969C40,
	PED_CS_ChengSr = 0x30DB9D7B,
	PED_CS_ChrisFormage = 0xC1F380E6,
	PED_CS_Clay = 0xDBCB9834,
	PED_CS_Dale = 0x0CE81655,
	PED_CS_DaveNorton = 0x8587248C,
	PED_CS_Debra = 0xECD04FE9,
	PED_CS_Denise = 0x6F802738,
	PED_CS_Devin = 0x2F016D02,
	PED_CS_Dom = 0x4772AF42,
	PED_CS_Dreyfuss = 0x3C60A153,
	PED_CS_DrFriedlander = 0xA3A35C2F,
	PED_CS_Fabien = 0x47035EC1,
	PED_CS_FBISuit_01 = 0x585C0B52,
	PED_CS_Floyd = 0x062547E7,
	PED_CS_Guadalope = 0x0F9513F1,
	PED_CS_Gurk = 0xC314F727,
	PED_CS_Hunter = 0x5B44892C,
	PED_CS_Janet = 0x3034F9E2,
	PED_CS_JewelAss = 0x4440A804,
	PED_CS_JimmyBoston = 0x039677BD,
	PED_CS_JimmyDiSanto = 0xB8CC92B4,
	PED_CS_JoeMinuteMan = 0xF09D5E29,
	PED_CS_JohnnyKlebitz = 0xFA8AB881,
	PED_CS_Josef = 0x459762CA,
	PED_CS_Josh = 0x450EEF9D,
	PED_CS_LamarDavis = 0x45463A0D,
	PED_CS_Lazlow = 0x38951A1B,
	PED_CS_LesterCrest = 0xB594F5C3,
	PED_CS_LifeInvad_01 = 0x72551375,
	PED_CS_Magenta = 0x5816C61A,
	PED_CS_Manuel = 0xFBB374CA,
	PED_CS_Marnie = 0x574DE134,
	PED_CS_MartinMadrazo = 0x43595670,
	PED_CS_MaryAnn = 0x0998C7AD,
	PED_CS_Michelle = 0x70AEB9C8,
	PED_CS_Milton = 0xB76A330F,
	PED_CS_Molly = 0x45918E44,
	PED_CS_MovPremF_01 = 0x4BBA84D9,
	PED_CS_MovPremMale = 0x8D67EE7D,
	PED_CS_MRK = 0xC3CC9A75,
	PED_CS_MrsPhillips = 0xCBFDA3CF,
	PED_CS_MRS_Thornhill = 0x4F921E6E,
	PED_CS_Natalia = 0x4EFEB1F0,
	PED_CS_NervousRon = 0x7896DA94,
	PED_CS_Nigel = 0xE1479C0B,
	PED_CS_Old_Man1A = 0x1EEC7BDC,
	PED_CS_Old_Man2 = 0x98F9E770,
	PED_CS_Omega = 0x8B70B405,
	PED_CS_Orleans = 0xAD340F5A,
	PED_CS_Paper = 0x6B38B8F8,
	PED_CS_Patricia = 0xDF8B1301,
	PED_CS_Priest = 0x4D6DE57E,
	PED_CS_ProlSec_02 = 0x1E9314A2,
	PED_CS_RussianDrunk = 0x46521A32,
	PED_CS_SiemonYetarian = 0xC0937202,
	PED_CS_Solomon = 0xF6D1E04E,
	PED_CS_SteveHains = 0xA4E0A1FE,
	PED_CS_Stretch = 0x893D6805,
	PED_CS_Tanisha = 0x42FE5370,
	PED_CS_TaoCheng = 0x8864083D,
	PED_CS_TaosTranslator = 0x53536529,
	PED_CS_TennisCoach = 0x5C26040A,
	PED_CS_Terry = 0x3A5201C5,
	PED_CS_Tom = 0x69E8ABC3,
	PED_CS_TomEpsilon = 0x8C0FD4E2,
	PED_CS_TracyDiSanto = 0x0609B130,
	PED_CS_Wade = 0xD266D9D6,
	PED_CS_Zimbor = 0xEAACAAF0,
	PED_G_F_Y_ballas_01 = 0x158C439C,
	PED_G_F_Y_Families_01 = 0x4E0CE5D3,
	PED_G_F_Y_Lost_01 = 0xFD5537DE,
	PED_G_F_Y_Vagos_01 = 0x5AA42C21,
	PED_G_M_M_ArmBoss_01 = 0xF1E823A2,
	PED_G_M_M_ArmGoon_01 = 0xFDA94268,
	PED_G_M_M_ArmLieut_01 = 0xE7714013,
	PED_G_M_M_ChemWork_01 = 0xF6157D8F,
	PED_G_M_M_ChiBoss_01 = 0xB9DD0300,
	PED_G_M_M_ChiCold_01 = 0x106D9A99,
	PED_G_M_M_ChiGoon_01 = 0x7E4F763F,
	PED_G_M_M_ChiGoon_02 = 0xFF71F826,
	PED_G_M_M_KorBoss_01 = 0x352A026F,
	PED_G_M_M_MexBoss_01 = 0x5761F4AD,
	PED_G_M_M_MexBoss_02 = 0x4914D813,
	PED_G_M_Y_ArmGoon_02 = 0xC54E878A,
	PED_G_M_Y_Azteca_01 = 0x68709618,
	PED_G_M_Y_BallaEast_01 = 0xF42EE883,
	PED_G_M_Y_BallaOrig_01 = 0x231AF63F,
	PED_G_M_Y_BallaSout_01 = 0x23B88069,
	PED_G_M_Y_FamCA_01 = 0xE83B93B7,
	PED_G_M_Y_FamDNF_01 = 0xDB729238,
	PED_G_M_Y_FamFor_01 = 0x84302B09,
	PED_G_M_Y_Korean_01 = 0x247502A9,
	PED_G_M_Y_Korean_02 = 0x8FEDD989,
	PED_G_M_Y_KorLieut_01 = 0x7CCBE17A,
	PED_G_M_Y_Lost_01 = 0x4F46D607,
	PED_G_M_Y_Lost_02 = 0x3D843282,
	PED_G_M_Y_Lost_03 = 0x32B11CDC,
	PED_G_M_Y_MexGang_01 = 0xBDDD5546,
	PED_G_M_Y_MexGoon_01 = 0x26EF3426,
	PED_G_M_Y_MexGoon_02 = 0x31A3498E,
	PED_G_M_Y_MexGoon_03 = 0x964D12DC,
	PED_G_M_Y_PoloGoon_01 = 0x4F3FBA06,
	PED_G_M_Y_PoloGoon_02 = 0xA2E86156,
	PED_G_M_Y_SalvaBoss_01 = 0x905CE0CA,
	PED_G_M_Y_SalvaGoon_01 = 0x278C8CB7,
	PED_G_M_Y_SalvaGoon_02 = 0x3273A285,
	PED_G_M_Y_SalvaGoon_03 = 0x03B8C510,
	PED_G_M_Y_StrPunk_01 = 0xFD1C49BB,
	PED_G_M_Y_StrPunk_02 = 0x0DA1EAC6,
	PED_HC_Driver = 0x3B474ADF,
	PED_HC_Gunman = 0x0B881AEE,
	PED_HC_Hacker = 0x99BB00F8,
	PED_IG_Abigail = 0x400AEC41,
	PED_IG_AmandaTownley = 0x6D1E15F7,
	PED_IG_Andreas = 0x47E4EEA0,
	PED_IG_Ashley = 0x7EF440DB,
	PED_IG_BallasOG = 0xA70B4A92,
	PED_IG_Bankman = 0x909D9E7F,
	PED_IG_Barry = 0x2F8845A3,
	PED_IG_BestMen = 0x5746CD96,
	PED_IG_Beverly = 0xBDA21E5C,
	PED_IG_Brad = 0xBDBB4922,
	PED_IG_Bride = 0x6162EC47,
	PED_IG_Car3guy1 = 0x84F9E937,
	PED_IG_Car3guy2 = 0x75C34ACA,
	PED_IG_Casey = 0xE0FA2554,
	PED_IG_Chef = 0x49EADBF6,
	PED_IG_ChengSr = 0xAAE4EA7B,
	PED_IG_ChrisFormage = 0x286E54A7,
	PED_IG_Clay = 0x6CCFE08A,
	PED_IG_ClayPain = 0x9D0087A8,
	PED_IG_Cletus = 0xE6631195,
	PED_IG_Dale = 0x467415E9,
	PED_IG_DaveNorton = 0x15CD4C33,
	PED_IG_Denise = 0x820B33BD,
	PED_IG_Devin = 0x7461A0B0,
	PED_IG_Dom = 0x9C2DB088,
	PED_IG_Dreyfuss = 0xDA890932,
	PED_IG_DrFriedlander = 0xCBFC0DF5,
	PED_IG_Fabien = 0xD090C350,
	PED_IG_FBISuit_01 = 0x3AE4A33B,
	PED_IG_Floyd = 0xB1B196B2,
	PED_IG_Groom = 0xFECE8B85,
	PED_IG_Hao = 0x65978363,
	PED_IG_Hunter = 0xCE1324DE,
	PED_IG_Janet = 0x0D6D9C49,
	PED_ig_JAY_Norris = 0x7A32EE74,
	PED_IG_JewelAss = 0x0F5D26BB,
	PED_IG_JimmyBoston = 0xEDA0082D,
	PED_IG_JimmyDiSanto = 0x570462B9,
	PED_IG_JoeMinuteMan = 0xBE204C9B,
	PED_IG_JohnnyKlebitz = 0x87CA80AE,
	PED_IG_Josef = 0xE11A9FB4,
	PED_IG_Josh = 0x799E9EEE,
	PED_IG_KerryMcIntosh = 0x5B3BD90D,
	PED_IG_LamarDavis = 0x65B93076,
	PED_IG_Lazlow = 0xDFE443E5,
	PED_IG_LesterCrest = 0x4DA6E849,
	PED_IG_LifeInvad_01 = 0x5389A93C,
	PED_IG_LifeInvad_02 = 0x27BD51D4,
	PED_IG_Magenta = 0xFCDC910A,
	PED_IG_Manuel = 0xFD418E10,
	PED_IG_Marnie = 0x188232D0,
	PED_IG_MaryAnn = 0xA36F9806,
	PED_IG_Maude = 0x3BE8287E,
	PED_IG_Michelle = 0xBF9672F4,
	PED_IG_Milton = 0xCB3059B2,
	PED_IG_Molly = 0xAF03DDE1,
	PED_IG_MRK = 0xEDDCAB6D,
	PED_IG_MrsPhillips = 0x3862EEA8,
	PED_IG_MRS_Thornhill = 0x1E04A96B,
	PED_IG_Natalia = 0xDE17DD3B,
	PED_IG_NervousRon = 0xBD006AF1,
	PED_IG_Nigel = 0xC8B7167D,
	PED_IG_Old_Man1A = 0x719D27F4,
	PED_IG_Old_Man2 = 0xEF154C47,
	PED_IG_Omega = 0x60E6A7D8,
	PED_IG_ONeil = 0x2DC6D3E7,
	PED_IG_Orleans = 0x61D4C771,
	PED_IG_Ortega = 0x26A562B7,
	PED_IG_Paper = 0x999B00C6,
	PED_IG_Patricia = 0xC56E118C,
	PED_IG_Priest = 0x6437E77D,
	PED_IG_ProlSec_02 = 0x27B3AD75,
	PED_IG_Ramp_Gang = 0xE52E126C,
	PED_IG_Ramp_Hic = 0x45753032,
	PED_IG_Ramp_Hipster = 0xDEEF9F6E,
	PED_IG_Ramp_Mex = 0xE6AC74A4,
	PED_IG_RoccoPelosi = 0xD5BA52FF,
	PED_IG_RussianDrunk = 0x3D0A5EB1,
	PED_IG_Screen_Writer = 0xFFE63677,
	PED_IG_SiemonYetarian = 0x4C7B2F05,
	PED_IG_Solomon = 0x86BDFE26,
	PED_IG_SteveHains = 0x382121C8,
	PED_IG_Stretch = 0x36984358,
	PED_IG_Talina = 0xE793C8E8,
	PED_IG_Tanisha = 0x0D810489,
	PED_IG_TaoCheng = 0xDC5C5EA5,
	PED_IG_TaosTranslator = 0x7C851464,
	PED_ig_TennisCoach = 0xA23B5F57,
	PED_IG_Terry = 0x67000B94,
	PED_IG_TomEpsilon = 0xCD777AAA,
	PED_IG_Tonya = 0xCAC85344,
	PED_IG_TracyDiSanto = 0xDE352A35,
	PED_IG_TrafficWarden = 0x5719786D,
	PED_IG_TylerDix = 0x5265F707,
	PED_IG_Wade = 0x92991B72,
	PED_IG_Zimbor = 0x0B34D6F5,
	PED_MP_F_DeadHooker = 0x73DEA88B,
	PED_MP_F_Freemode_01 = 0x9C9EFFD8,
	PED_MP_F_Misty_01 = 0xD128FF9D,
	PED_MP_F_StripperLite = 0x2970A494,
	PED_MP_G_M_Pros_01 = 0x6C9DD7C9,//Caution: This Ped is unstable
	PED_MP_M_Claude_01 = 0xC0F371B7,
	PED_MP_M_ExArmy_01 = 0x45348DBB,
	PED_MP_M_FamDD_01 = 0x33A464E5,
	PED_MP_M_FIBSec_01 = 0x5CDEF405,
	PED_MP_M_Freemode_01 = 0x705E61F2,
	PED_MP_M_Marston_01 = 0x38430167,
	PED_MP_M_Niko_01 = 0xEEDACFC9,
	PED_MP_M_ShopKeep_01 = 0x18CE57D0,
	PED_MP_S_M_Armoured_01 = 0xCDEF5408,
	PED_Player_One = 0x9B22DBAF,
	PED_Player_Two = 0x9B810FA2,
	PED_Player_Zero = 0x0D7114C9,
	PED_slod_human = 0x3F039CBA,//Caution: This Ped is unstable
	PED_slod_large_quadped = 0x856CFB02,//Caution: This Ped is unstable
	PED_slod_small_quadped = 0x2D7030F3,//Caution: This Ped is unstable
	PED_S_F_M_Fembarber = 0x163B875B,
	PED_S_F_M_Maid_01 = 0xE093C5C6,
	PED_S_F_M_Shop_HIGH = 0xAE47E4B0,
	PED_S_F_M_SweatShop_01 = 0x312B5BC0,
	PED_S_F_Y_AirHostess_01 = 0x5D71A46F,
	PED_S_F_Y_Bartender_01 = 0x780C01BD,
	PED_S_F_Y_Baywatch_01 = 0x4A8E5536,
	PED_S_F_Y_Cop_01 = 0x15F8700D,
	PED_S_F_Y_Factory_01 = 0x69F46BF3,
	PED_S_F_Y_Hooker_01 = 0x028ABF95,
	PED_S_F_Y_Hooker_02 = 0x14C3E407,
	PED_S_F_Y_Hooker_03 = 0x031640AC,
	PED_S_F_Y_Migrant_01 = 0xD55B2BF5,
	PED_S_F_Y_MovPrem_01 = 0x2300C816,
	PED_S_F_Y_Ranger_01 = 0x9FC7F637,
	PED_S_F_Y_Scrubs_01 = 0xAB594AB6,
	PED_S_F_Y_Sheriff_01 = 0x4161D042,
	PED_S_F_Y_Shop_LOW = 0xA96E2604,
	PED_S_F_Y_Shop_MID = 0x3EECBA5D,
	PED_S_F_Y_StripperLite = 0x5C14EDFA,
	PED_S_F_Y_Stripper_01 = 0x52580019,
	PED_S_F_Y_Stripper_02 = 0x6E0FB794,
	PED_S_F_Y_SweatShop_01 = 0x8502B6B2,
	PED_S_M_M_AmmuCountry = 0x0DE9A30A,
	PED_S_M_M_Armoured_01 = 0x95C76ECD,
	PED_S_M_M_Armoured_02 = 0x63858A4A,
	PED_S_M_M_AutoShop_01 = 0x040EABE3,
	PED_S_M_M_AutoShop_02 = 0xF06B849D,
	PED_S_M_M_Bouncer_01 = 0x9FD4292D,
	PED_S_M_M_ChemSec_01 = 0x2EFEAFD5,
	PED_S_M_M_CIASec_01 = 0x625D6958,
	PED_S_M_M_CntryBar_01 = 0x1A021B83,
	PED_S_M_M_DockWork_01 = 0x14D7B4E0,
	PED_S_M_M_Doctor_01 = 0xD47303AC,
	PED_S_M_M_FIBOffice_01 = 0xEDBC7546,
	PED_S_M_M_FIBOffice_02 = 0x26F067AD,
	PED_S_M_M_Gaffer_01 = 0xA956BD9E,
	PED_S_M_M_Gardener_01 = 0x49EA5685,
	PED_S_M_M_GenTransport = 0x1880ED06,
	PED_S_M_M_HairDress_01 = 0x418DFF92,
	PED_S_M_M_HighSec_01 = 0xF161D212,
	PED_S_M_M_HighSec_02 = 0x2930C1AB,
	PED_S_M_M_Janitor = 0xA96BD9EC,
	PED_S_M_M_LatHandy_01 = 0x9E80D2CE,
	PED_S_M_M_LifeInvad_01 = 0xDE0077FD,
	PED_S_M_M_Linecook = 0xDB9C0997,
	PED_S_M_M_LSMetro_01 = 0x765AAAE4,
	PED_S_M_M_Mariachi_01 = 0x7EA4FFA6,
	PED_S_M_M_Marine_01 = 0xF2DAA2ED,
	PED_S_M_M_Marine_02 = 0xF0259D83,
	PED_S_M_M_Migrant_01 = 0xED0CE4C6,
	PED_S_M_M_MovAlien_01 = 0x64611296,
	PED_S_M_M_MovPrem_01 = 0xD85E6D28,
	PED_S_M_M_MovSpace_01 = 0xE7B31432,
	PED_S_M_M_Paramedic_01 = 0xB353629E,
	PED_S_M_M_Pilot_01 = 0xE75B4B1C,
	PED_S_M_M_Pilot_02 = 0xF63DE8E1,
	PED_S_M_M_Postal_01 = 0x62599034,
	PED_S_M_M_Postal_02 = 0x7367324F,
	PED_S_M_M_PrisGuard_01 = 0x56C96FC6,
	PED_S_M_M_Scientist_01 = 0x4117D39B,
	PED_S_M_M_Security_01 = 0xD768B228,
	PED_S_M_M_SnowCop_01 = 0x1AE8BB58,
	PED_S_M_M_StrPerf_01 = 0x795AC7A8,
	PED_S_M_M_StrPreach_01 = 0x1C0077FB,
	PED_S_M_M_StrVend_01 = 0xCE9113A9,
	PED_S_M_M_Trucker_01 = 0x59511A6C,
	PED_S_M_M_UPS_01 = 0x9FC37F22,
	PED_S_M_M_UPS_02 = 0xD0BDE116,
	PED_S_M_O_Busker_01 = 0xAD9EF1BB,
	PED_S_M_Y_AirWorker = 0x62018559,
	PED_S_M_Y_AmmuCity_01 = 0x9E08633D,
	PED_S_M_Y_ArmyMech_01 = 0x62CC28E2,
	PED_S_M_Y_Autopsy_01 = 0xB2273D4E,
	PED_S_M_Y_Barman_01 = 0xE5A11106,
	PED_S_M_Y_BayWatch_01 = 0x0B4A6862,
	PED_S_M_Y_BlackOps_01 = 0xB3F3EE34,
	PED_S_M_Y_BlackOps_02 = 0x7A05FA59,
	PED_S_M_Y_BusBoy_01 = 0xD8F9CD47,
	PED_S_M_Y_Chef_01 = 0x0F977CEB,
	PED_S_M_Y_Clown_01 = 0x04498DDE,
	PED_S_M_Y_Construct_01 = 0xD7DA9E99,
	PED_S_M_Y_Construct_02 = 0xC5FEFADE,
	PED_S_M_Y_Cop_01 = 0x5E3DA4A4,
	PED_S_M_Y_Dealer_01 = 0xE497BBEF,
	PED_S_M_Y_DevinSec_01 = 0x9B557274,
	PED_S_M_Y_DockWork_01 = 0x867639D1,
	PED_S_M_Y_Doorman_01 = 0x22911304,
	PED_S_M_Y_DWService_01 = 0x75D30A91,
	PED_S_M_Y_DWService_02 = 0xF5908A06,
	PED_S_M_Y_Factory_01 = 0x4163A158,
	PED_S_M_Y_Fireman_01 = 0xB6B1EDA8,
	PED_S_M_Y_Garbage = 0xEE75A00F,
	PED_S_M_Y_Grip_01 = 0x309E7DEA,
	PED_S_M_Y_HwayCop_01 = 0x739B1EF5,
	PED_S_M_Y_Marine_01 = 0x65793043,
	PED_S_M_Y_Marine_02 = 0x58D696FE,
	PED_S_M_Y_Marine_03 = 0x72C0CAD2,
	PED_S_M_Y_Mime = 0x3CDCA742,
	PED_S_M_Y_PestCont_01 = 0x48114518,
	PED_S_M_Y_Pilot_01 = 0xAB300C07,
	PED_S_M_Y_PrisMuscl_01 = 0x5F2113A1,
	PED_S_M_Y_Prisoner_01 = 0xB1BB9B59,
	PED_S_M_Y_Ranger_01 = 0xEF7135AE,
	PED_S_M_Y_Robber_01 = 0xC05E1399,
	PED_S_M_Y_Sheriff_01 = 0xB144F9B9,
	PED_S_M_Y_Shop_MASK = 0x6E122C06,
	PED_S_M_Y_StrVend_01 = 0x927F2323,
	PED_S_M_Y_Swat_01 = 0x8D8F1B10,
	PED_S_M_Y_USCG_01 = 0xCA0050E9,
	PED_S_M_Y_Valet_01 = 0x3B96F23E,
	PED_S_M_Y_Waiter_01 = 0xAD4C724C,
	PED_S_M_Y_WinClean_01 = 0x550D8D9D,
	PED_S_M_Y_XMech_01 = 0x441405EC,
	PED_S_M_Y_XMech_02 = 0xBE20FA04,
	PED_U_F_M_Corpse_01 = 0x2E140314,
	PED_U_F_M_Miranda = 0x414FA27B,
	PED_U_F_M_ProMourn_01 = 0xA20899E7,
	PED_U_F_O_MovieStar = 0x35578634,
	PED_U_F_O_ProlHost_01 = 0xC512DD23,
	PED_U_F_Y_BikerChic = 0xFA389D4F,
	PED_U_F_Y_COMJane = 0xB6AA85CE,
	PED_U_F_Y_corpse_01 = 0x9C70109D,
	PED_U_F_Y_corpse_02 = 0x0D9C72F8,
	PED_U_F_Y_HotPosh_01 = 0x969B6DFE,
	PED_U_F_Y_JewelAss_01 = 0xF0D4BE2E,
	PED_U_F_Y_Mistress = 0x5DCA2528,
	PED_U_F_Y_PoppyMich = 0x23E9A09E,
	PED_U_F_Y_Princess = 0xD2E3A284,
	PED_U_F_Y_SpyActress = 0x5B81D86C,
	PED_U_M_M_Aldinapoli = 0xF0EC56E2,
	PED_U_M_M_BankMan = 0xC306D6F5,
	PED_U_M_M_BikeHire_01 = 0x76474545,
	PED_U_M_M_FIBArchitect = 0x342333D3,
	PED_U_M_M_FilmDirector = 0x2B6E1BB6,
	PED_U_M_M_GlenStank_01 = 0x45BB1666,
	PED_U_M_M_Griff_01 = 0xC454BCBB,
	PED_U_M_M_Jesus_01 = 0xCE2CB751,
	PED_U_M_M_JewelSec_01 = 0xACCCBDB6,
	PED_U_M_M_JewelThief = 0xE6CC3CDC,
	PED_U_M_M_MarkFost = 0x1C95CB0B,
	PED_U_M_M_PartyTarget = 0x81F74DE7,
	PED_U_M_M_ProlSec_01 = 0x709220C7,
	PED_U_M_M_ProMourn_01 = 0xCE96030B,
	PED_U_M_M_RivalPap = 0x60D5D6DA,
	PED_U_M_M_SpyActor = 0xAC0EA5D8,
	PED_U_M_M_WillyFist = 0x90769A8F,
	PED_U_M_O_FinGuru_01 = 0x46E39E63,
	PED_U_M_O_TapHillBilly = 0x9A1E5E52,
	PED_U_M_O_Tramp_01 = 0x6A8F1F9B,
	PED_U_M_Y_Abner = 0xF0AC2626,
	PED_U_M_Y_AntonB = 0xCF623A2C,
	PED_U_M_Y_BabyD = 0xDA116E7E,
	PED_U_M_Y_Baygor = 0x5244247D,
	PED_U_M_Y_BurgerDrug_01 = 0x8B7D3766,
	PED_U_M_Y_Chip = 0x24604B2B,
	PED_U_M_Y_Cyclist_01 = 0x2D0EFCEB,
	PED_U_M_Y_FIBMugger_01 = 0x85B9C668,
	PED_U_M_Y_Guido_01 = 0xC6B49A2F,
	PED_U_M_Y_GunVend_01 = 0xB3229752,
	PED_U_M_Y_Hippie_01 = 0xF041880B,
	PED_U_M_Y_ImpoRage = 0x348065F5,
	PED_U_M_Y_Justin = 0x7DC3908F,
	PED_U_M_Y_Mani = 0xC8BB1E52,
	PED_U_M_Y_MilitaryBum = 0x4705974A,
	PED_U_M_Y_Paparazzi = 0x5048B328,
	PED_U_M_Y_Party_01 = 0x36E70600,
	PED_U_M_Y_Pogo_01 = 0xDC59940D,
	PED_U_M_Y_Prisoner_01 = 0x7B9B4BC0,
	PED_U_M_Y_ProlDriver_01 = 0x855E36A3,
	PED_U_M_Y_RSRanger_01 = 0x3C438CD2,
	PED_U_M_Y_SBike = 0x6AF4185D,
	PED_U_M_Y_StagGrm_01 = 0x9194CE03,
	PED_U_M_Y_Tattoo_01 = 0x94AE2B8C,
	PED_U_M_Y_Zombie_01 = 0xAC4B4506,

	//Dlc Peds:
	//------------------------------------
	PED_A_F_Y_FemaleAgent = 0x50610C43,
	PED_CSB_Agent = 0xD770C9B4,
	PED_CSB_Chef2 = 0xAE5BE23A,
	PED_CSB_Money = 0x989DFD9A,
	PED_CSB_MP_Agent14 = 0x6DBBFC8B,
	PED_CSB_Paige = 0x5B1FA0C3,
	PED_CSB_Popov = 0x617D89E2,
	PED_CSB_Rashcosvki = 0x188099A9,
	PED_CSB_Undercover = 0xEF785A6A,
	PED_CS_Karen_Daniels = 0x4BAF381C,
	PED_IG_Agent = 0x246AF208,
	PED_IG_Chef2 = 0x85889AC3,
	PED_IG_Karen_Daniels = 0xEB51D959,
	PED_IG_Money = 0x37FACDA6,
	PED_IG_MP_Agent14 = 0xFBF98469,
	PED_IG_Paige = 0x154FCF3F,
	PED_IG_Popov = 0x267630FE,
	PED_IG_Rashcosvki = 0x380C4DE6,
	PED_S_M_M_CCrew_01 = 0xC9E5F56B,
	PED_S_M_M_FIBSec_01 = 0x7B8B434B,
	PED_S_M_Y_BlackOps_03 = 0x5076A73B,
	PED_U_M_M_DOA_01 = 0x621E6BFD,
	PED_U_M_M_EdToh = 0x2A797197
	
} PedHash;

typedef enum LicensePlateLayout{
	LP_FrontAndRear,
	LP_Front,
	LP_Rear,
	LP_None
}LicensePlateLayout;

typedef enum VehicleClass{
	VC_Compacts,
	VC_Sedans,
	VC_Suv,
	VC_Coupes,
	VC_Muscle,
	VC_SportClassics,
	VC_Sports,
	VC_Super,
	VC_Motorcycles,
	VC_OffRoad,
	VC_Industrial,
	VC_Utility,
	VC_Van,
	VC_Cycle,
	VC_Boats,
	VC_Helicopters,
	VC_Planes,
	VC_Service,
	VC_Emergency,
	VC_Military,
	VC_Commercial,
	VC_Trains
}VehicleClass;

typedef enum ScaleformButton
{
	SFB_ARROW_UP,
	SFB_ARROW_DOWN,
	SFB_ARROW_LEFT,
	SFB_ARROW_RIGHT,
	SFB_BUTTON_DPAD_UP,
	SFB_BUTTON_DPAD_DOWN,
	SFB_BUTTON_DPAD_RIGHT,
	SFB_BUTTON_DPAD_LEFT,
	SFB_BUTTON_DPAD_BLANK,
	SFB_BUTTON_DPAD_ALL,
	SFB_BUTTON_DPAD_UP_DOWN,
	SFB_BUTTON_DPAD_LEFT_RIGHT,
	SFB_BUTTON_LSTICK_UP,
	SFB_BUTTON_LSTICK_DOWN,
	SFB_BUTTON_LSTICK_LEFT,
	SFB_BUTTON_LSTICK_RIGHT,
	SFB_BUTTON_LSTICK,
	SFB_BUTTON_LSTICK_ALL,
	SFB_BUTTON_LSTICK_UP_DOWN,
	SFB_BUTTON_LSTICK_LEFT_RIGHT,
	SFB_BUTTON_LSTICK_ROTATE,
	SFB_BUTTON_RSTICK_UP,
	SFB_BUTTON_RSTICK_DOWN,
	SFB_BUTTON_RSTICK_LEFT,
	SFB_BUTTON_RSTICK_RIGHT,
	SFB_BUTTON_RSTICK,
	SFB_BUTTON_RSTICK_ALL,
	SFB_BUTTON_RSTICK_UP_DOWN,
	SFB_BUTTON_RSTICK_LEFT_RIGHT,
	SFB_BUTTON_RSTICK_ROTATE,
	SFB_BUTTON_A,
	SFB_BUTTON_B,
	SFB_BUTTON_X,
	SFB_BUTTON_Y,
	SFB_BUTTON_LB,
	SFB_BUTTON_LT,
	SFB_BUTTON_RB,
	SFB_BUTTON_RT,
	SFB_BUTTON_START,
	SFB_BUTTON_BACK,
	SFB_RED_BOX,
	SFB_RED_BOX_1,
	SFB_RED_BOX_2,
	SFB_RED_BOX_3,
	SFB_LOADING_HALF_CIRCLE_LEFT,
	SFB_ARROW_UP_DOWN,
	SFB_ARROW_LEFT_RIGHT,
	SFB_ARROW_ALL,
	SFB_LOADING_HALF_CIRCLE_LEFT_2,
	SFB_SAVE_HALF_CIRCLE_LEFT,
	SFB_LOADING_HALF_CIRCLE_RIGHT
} ScaleformButton;

typedef enum ScaleformSave
{
	SFS_LOADING_CIRCLE_RIGHT = 1,
	SFS_SAVE_CIRCLE_LEFT = 4,
	SFS_LOADING_CIRCLE_LEFT = 5
} ScaleformSave;