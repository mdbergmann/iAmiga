/*
 *  sdl.h
 *  iAmiga
 *
 *  Created by Stuart Carnie on 5/18/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef _SDL_H
#define _SDL_H

#ifdef __cplusplus
extern "C" {
#endif

	/* General keyboard/mouse state definitions */
#define SDL_RELEASED	0
#define SDL_PRESSED		1
	
/**
 * \enum SDLMod
 *
 * \brief Enumeration of valid key mods (possibly OR'd together)
 */
typedef enum
{
	KMOD_NONE = 0x0000,
	KMOD_LSHIFT = 0x0001,
	KMOD_RSHIFT = 0x0002,
	KMOD_LCTRL = 0x0040,
	KMOD_RCTRL = 0x0080,
	KMOD_LALT = 0x0100,
	KMOD_RALT = 0x0200,
	KMOD_LGUI = 0x0400,
	KMOD_RGUI = 0x0800,
	KMOD_NUM = 0x1000,
	KMOD_CAPS = 0x2000,
	KMOD_MODE = 0x4000,
	KMOD_RESERVED = 0x8000
} SDLMod;

typedef enum {
	/* The keyboard syms have been cleverly chosen to map to ASCII */
	SDLK_UNKNOWN            = 0,
	SDLK_FIRST              = 0,
	SDLK_BACKSPACE          = 8,
	SDLK_TAB                = 9,
	SDLK_CLEAR              = 12,
	SDLK_RETURN             = 13,
	SDLK_PAUSE              = 19,
	SDLK_ESCAPE             = 27,
	SDLK_SPACE              = 32,
	SDLK_EXCLAIM            = 33,
	SDLK_QUOTEDBL           = 34,
	SDLK_HASH               = 35,
	SDLK_DOLLAR             = 36,
	SDLK_AMPERSAND          = 38,
	SDLK_QUOTE              = 39,
	SDLK_LEFTPAREN          = 40,
	SDLK_RIGHTPAREN         = 41,
	SDLK_ASTERISK           = 42,
	SDLK_PLUS               = 43,
	SDLK_COMMA              = 44,
	SDLK_MINUS              = 45,
	SDLK_PERIOD             = 46,
	SDLK_SLASH              = 47,
	SDLK_0                  = 48,
	SDLK_1                  = 49,
	SDLK_2                  = 50,
	SDLK_3                  = 51,
	SDLK_4                  = 52,
	SDLK_5                  = 53,
	SDLK_6                  = 54,
	SDLK_7                  = 55,
	SDLK_8                  = 56,
	SDLK_9                  = 57,
	SDLK_COLON              = 58,
	SDLK_SEMICOLON          = 59,
	SDLK_LESS               = 60,
	SDLK_EQUALS             = 61,
	SDLK_GREATER            = 62,
	SDLK_QUESTION           = 63,
	SDLK_AT                 = 64,
	/*
	 Skip uppercase letters
	 */
	SDLK_LEFTBRACKET        = 91,
	SDLK_BACKSLASH          = 92,
	SDLK_RIGHTBRACKET       = 93,
	SDLK_CARET              = 94,
	SDLK_UNDERSCORE         = 95,
	SDLK_BACKQUOTE          = 96,
	SDLK_a                  = 97,
	SDLK_b                  = 98,
	SDLK_c                  = 99,
	SDLK_d                  = 100,
	SDLK_e                  = 101,
	SDLK_f                  = 102,
	SDLK_g                  = 103,
	SDLK_h                  = 104,
	SDLK_i                  = 105,
	SDLK_j                  = 106,
	SDLK_k                  = 107,
	SDLK_l                  = 108,
	SDLK_m                  = 109,
	SDLK_n                  = 110,
	SDLK_o                  = 111,
	SDLK_p                  = 112,
	SDLK_q                  = 113,
	SDLK_r                  = 114,
	SDLK_s                  = 115,
	SDLK_t                  = 116,
	SDLK_u                  = 117,
	SDLK_v                  = 118,
	SDLK_w                  = 119,
	SDLK_x                  = 120,
	SDLK_y                  = 121,
	SDLK_z                  = 122,
	SDLK_DELETE             = 127,
	/* End of ASCII mapped keysyms */
	
	/* International keyboard syms */
	SDLK_WORLD_0            = 160,          /* 0xA0 */
	SDLK_WORLD_1            = 161,
	SDLK_WORLD_2            = 162,
	SDLK_WORLD_3            = 163,
	SDLK_WORLD_4            = 164,
	SDLK_WORLD_5            = 165,
	SDLK_WORLD_6            = 166,
	SDLK_WORLD_7            = 167,
	SDLK_WORLD_8            = 168,
	SDLK_WORLD_9            = 169,
	SDLK_WORLD_10           = 170,
	SDLK_WORLD_11           = 171,
	SDLK_WORLD_12           = 172,
	SDLK_WORLD_13           = 173,
	SDLK_WORLD_14           = 174,
	SDLK_WORLD_15           = 175,
	SDLK_WORLD_16           = 176,
	SDLK_WORLD_17           = 177,
	SDLK_WORLD_18           = 178,
	SDLK_WORLD_19           = 179,
	SDLK_WORLD_20           = 180,
	SDLK_WORLD_21           = 181,
	SDLK_WORLD_22           = 182,
	SDLK_WORLD_23           = 183,
	SDLK_WORLD_24           = 184,
	SDLK_WORLD_25           = 185,
	SDLK_WORLD_26           = 186,
	SDLK_WORLD_27           = 187,
	SDLK_WORLD_28           = 188,
	SDLK_WORLD_29           = 189,
	SDLK_WORLD_30           = 190,
	SDLK_WORLD_31           = 191,
	SDLK_WORLD_32           = 192,
	SDLK_WORLD_33           = 193,
	SDLK_WORLD_34           = 194,
	SDLK_WORLD_35           = 195,
	SDLK_WORLD_36           = 196,
	SDLK_WORLD_37           = 197,
	SDLK_WORLD_38           = 198,
	SDLK_WORLD_39           = 199,
	SDLK_WORLD_40           = 200,
	SDLK_WORLD_41           = 201,
	SDLK_WORLD_42           = 202,
	SDLK_WORLD_43           = 203,
	SDLK_WORLD_44           = 204,
	SDLK_WORLD_45           = 205,
	SDLK_WORLD_46           = 206,
	SDLK_WORLD_47           = 207,
	SDLK_WORLD_48           = 208,
	SDLK_WORLD_49           = 209,
	SDLK_WORLD_50           = 210,
	SDLK_WORLD_51           = 211,
	SDLK_WORLD_52           = 212,
	SDLK_WORLD_53           = 213,
	SDLK_WORLD_54           = 214,
	SDLK_WORLD_55           = 215,
	SDLK_WORLD_56           = 216,
	SDLK_WORLD_57           = 217,
	SDLK_WORLD_58           = 218,
	SDLK_WORLD_59           = 219,
	SDLK_WORLD_60           = 220,
	SDLK_WORLD_61           = 221,
	SDLK_WORLD_62           = 222,
	SDLK_WORLD_63           = 223,
	SDLK_WORLD_64           = 224,
	SDLK_WORLD_65           = 225,
	SDLK_WORLD_66           = 226,
	SDLK_WORLD_67           = 227,
	SDLK_WORLD_68           = 228,
	SDLK_WORLD_69           = 229,
	SDLK_WORLD_70           = 230,
	SDLK_WORLD_71           = 231,
	SDLK_WORLD_72           = 232,
	SDLK_WORLD_73           = 233,
	SDLK_WORLD_74           = 234,
	SDLK_WORLD_75           = 235,
	SDLK_WORLD_76           = 236,
	SDLK_WORLD_77           = 237,
	SDLK_WORLD_78           = 238,
	SDLK_WORLD_79           = 239,
	SDLK_WORLD_80           = 240,
	SDLK_WORLD_81           = 241,
	SDLK_WORLD_82           = 242,
	SDLK_WORLD_83           = 243,
	SDLK_WORLD_84           = 244,
	SDLK_WORLD_85           = 245,
	SDLK_WORLD_86           = 246,
	SDLK_WORLD_87           = 247,
	SDLK_WORLD_88           = 248,
	SDLK_WORLD_89           = 249,
	SDLK_WORLD_90           = 250,
	SDLK_WORLD_91           = 251,
	SDLK_WORLD_92           = 252,
	SDLK_WORLD_93           = 253,
	SDLK_WORLD_94           = 254,
	SDLK_WORLD_95           = 255,          /* 0xFF */
	
	/* Numeric keypad */
	SDLK_KP0                = 256,
	SDLK_KP1                = 257,
	SDLK_KP2                = 258,
	SDLK_KP3                = 259,
	SDLK_KP4                = 260,
	SDLK_KP5                = 261,
	SDLK_KP6                = 262,
	SDLK_KP7                = 263,
	SDLK_KP8                = 264,
	SDLK_KP9                = 265,
	SDLK_KP_PERIOD          = 266,
	SDLK_KP_DIVIDE          = 267,
	SDLK_KP_MULTIPLY        = 268,
	SDLK_KP_MINUS           = 269,
	SDLK_KP_PLUS            = 270,
	SDLK_KP_ENTER           = 271,
	SDLK_KP_EQUALS          = 272,
	
	/* Arrows + Home/End pad */
	SDLK_UP                 = 273,
	SDLK_DOWN               = 274,
	SDLK_RIGHT              = 275,
	SDLK_LEFT               = 276,
	SDLK_INSERT             = 277,
	SDLK_HOME               = 278,
	SDLK_END                = 279,
	SDLK_PAGEUP             = 280,
	SDLK_PAGEDOWN           = 281,
	
	/* Function keys */
	SDLK_F1                 = 282,
	SDLK_F2                 = 283,
	SDLK_F3                 = 284,
	SDLK_F4                 = 285,
	SDLK_F5                 = 286,
	SDLK_F6                 = 287,
	SDLK_F7                 = 288,
	SDLK_F8                 = 289,
	SDLK_F9                 = 290,
	SDLK_F10                = 291,
	SDLK_F11                = 292,
	SDLK_F12                = 293,
	SDLK_F13                = 294,
	SDLK_F14                = 295,
	SDLK_F15                = 296,
	
	/* Key state modifier keys */
	SDLK_NUMLOCK            = 300,
	SDLK_CAPSLOCK           = 301,
	SDLK_SCROLLOCK          = 302,
	SDLK_RSHIFT             = 303,
	SDLK_LSHIFT             = 304,
	SDLK_RCTRL              = 305,
	SDLK_LCTRL              = 306,
	SDLK_RALT               = 307,
	SDLK_LALT               = 308,
	SDLK_RMETA              = 309,
	SDLK_LMETA              = 310,
	SDLK_LSUPER             = 311,          /* Left "Windows" key */
	SDLK_RSUPER             = 312,          /* Right "Windows" key */
	SDLK_MODE               = 313,          /* "Alt Gr" key */
	SDLK_COMPOSE            = 314,          /* Multi-key compose key */
	
	/* Miscellaneous function keys */
	SDLK_HELP               = 315,
	SDLK_PRINT              = 316,
	SDLK_SYSREQ             = 317,
	SDLK_BREAK              = 318,
	SDLK_MENU               = 319,
	SDLK_POWER              = 320,          /* Power Macintosh power key */
	SDLK_EURO               = 321,          /* Some european keyboards */
	SDLK_UNDO               = 322,          /* Atari keyboard has Undo */
	
	/* Add any other keys here */
	
	SDLK_LAST
} SDLKey;

typedef unsigned int Uint32;
typedef unsigned Uint8;

typedef struct SDL_Color {
	unsigned r,g,b;
} SDL_Color;

typedef struct SDL_Joystick {	
} SDL_Joystick;

typedef struct tagMotion {
	int type;
	int xrel, yrel;
	int x,y;
} tagMotion;

typedef struct tagButtons {
	int type;
	int button;
	int x,y;
} tagButtons;

typedef struct SDL_keysym {
	SDLKey sym;
	int unicode;
	SDLMod mod;
} SDL_keysym;

typedef struct tagKeyEvent {
	int			type;
	SDL_keysym keysym;
} tagKeyEvent;

/**
 * \struct SDL_JoyAxisEvent
 *
 * \brief Joystick axis motion event structure (event.jaxis.*)
 */
typedef struct SDL_JoyAxisEvent
{
	Uint8 type;         /**< SDL_JOYAXISMOTION */
	Uint8 which;        /**< The joystick device index */
	Uint8 axis;         /**< The joystick axis index */
	int value;          /**< The axis value (range: -32768 to 32767) */
} SDL_JoyAxisEvent;

/**
 * \struct SDL_JoyBallEvent
 *
 * \brief Joystick trackball motion event structure (event.jball.*)
 */
typedef struct SDL_JoyBallEvent
{
	Uint8 type;         /**< SDL_JOYBALLMOTION */
	Uint8 which;        /**< The joystick device index */
	Uint8 ball;         /**< The joystick trackball index */
	int xrel;           /**< The relative motion in the X direction */
	int yrel;           /**< The relative motion in the Y direction */
} SDL_JoyBallEvent;

/**
 * \struct SDL_JoyHatEvent
 *
 * \brief Joystick hat position change event structure (event.jhat.*)
 */
typedef struct SDL_JoyHatEvent
{
	Uint8 type;         /**< SDL_JOYHATMOTION */
	Uint8 which;        /**< The joystick device index */
	Uint8 hat;          /**< The joystick hat index */
	Uint8 value;        /**< The hat position value:
						 SDL_HAT_LEFTUP   SDL_HAT_UP       SDL_HAT_RIGHTUP
						 SDL_HAT_LEFT     SDL_HAT_CENTERED SDL_HAT_RIGHT
						 SDL_HAT_LEFTDOWN SDL_HAT_DOWN     SDL_HAT_RIGHTDOWN
						 Note that zero means the POV is centered.
						 */
} SDL_JoyHatEvent;

/*
 * Get the current state of a POV hat on a joystick
 * The return value is one of the following positions:
 */
#define SDL_HAT_CENTERED	0x00
#define SDL_HAT_UP			0x01
#define SDL_HAT_RIGHT		0x02
#define SDL_HAT_DOWN		0x04
#define SDL_HAT_LEFT		0x08
#define SDL_HAT_RIGHTUP		(SDL_HAT_RIGHT|SDL_HAT_UP)
#define SDL_HAT_RIGHTDOWN	(SDL_HAT_RIGHT|SDL_HAT_DOWN)
#define SDL_HAT_LEFTUP		(SDL_HAT_LEFT|SDL_HAT_UP)
#define SDL_HAT_LEFTDOWN	(SDL_HAT_LEFT|SDL_HAT_DOWN)

/**
 * \struct SDL_JoyButtonEvent
 *
 * \brief Joystick button event structure (event.jbutton.*)
 */
typedef struct SDL_JoyButtonEvent
{
	Uint8 type;         /**< SDL_JOYBUTTONDOWN or SDL_JOYBUTTONUP */
	Uint8 which;        /**< The joystick device index */
	Uint8 button;       /**< The joystick button index */
	Uint8 state;        /**< SDL_PRESSED or SDL_RELEASED */
} SDL_JoyButtonEvent;

typedef union SDL_Event {
	int type;
	struct tagMotion motion;
	struct tagButtons button;
	struct tagKeyEvent key;
	SDL_JoyAxisEvent jaxis;         /**< Joystick axis event data */
	SDL_JoyBallEvent jball;         /**< Joystick ball event data */
	SDL_JoyHatEvent jhat;           /**< Joystick hat event data */
	struct SDL_JoyButtonEvent jbutton;
} SDL_Event;

typedef void (*sound_callback_t)(void *userdata, Uint8 *stream, int len);

typedef struct SDL_AudioSpec {
	int freq;
	int format;
	int channels;
	int samples;
	sound_callback_t callback;
	void *userdata;
} SDL_AudioSpec;

typedef struct tagFormat {
	unsigned long Rmask, Gmask, Bmask;
	unsigned short Rshift, Gshift, Bshift;
	unsigned BytesPerPixel;
} tagFormat;

typedef struct SDL_Surface {
	int w,h;
	void *pixels;
	struct tagFormat *format;
	unsigned pitch;
	
} SDL_Surface; 

extern Uint32 SDL_GetTicks();
extern void SDL_UnlockSurface(SDL_Surface*);
extern void SDL_LockSurface(SDL_Surface*);
extern void SDL_FreeSurface(SDL_Surface*);
extern void SDL_FillRect(SDL_Surface*, void*, int);
extern void SDL_UpdateRect(SDL_Surface*, int, int, int, int);
extern void SDL_Delay(Uint32);
extern long int SDL_MapRGB(tagFormat*, int, int, int);
extern int SDL_PollEvent(SDL_Event*);
extern void SDL_JoystickUpdate();
extern void SDL_VideoQuit();

extern int SDL_JoystickGetAxis(SDL_Joystick*, int);
extern int SDL_JoystickNumButtons(SDL_Joystick*);
extern int SDL_JoystickGetButton(SDL_Joystick*, int);

extern int SDL_NumJoysticks();
extern SDL_Joystick* SDL_JoystickOpen(int);
extern int SDL_JoystickClose(SDL_Joystick*);

extern int SDL_Init(int);
extern SDL_Surface* SDL_SetVideoMode(int, int, int, int);
extern char* SDL_GetError();
extern int SDL_OpenAudio(SDL_AudioSpec*,void*);
extern void SDL_CloseAudio();
extern void SDL_PauseAudio(int);


#define SDL_ENABLE 1
#define SDL_DISABLE 0
#define SDL_INIT_VIDEO 0
#define SDL_HWSURFACE 1
#define AUDIO_S16 0
#define AUDIO_U8 0

extern int SDL_ShowCursor(int);

/* Event enumerations */
enum { SDL_NOEVENT = 0,                 /* Unused (do not remove) */
	SDL_ACTIVEEVENT,                 /* Application loses/gains visibility */
	SDL_KEYDOWN,                     /* Keys pressed */
	SDL_KEYUP,                       /* Keys released */
	SDL_MOUSEMOTION,                 /* Mouse moved */
	SDL_MOUSEBUTTONDOWN,             /* Mouse button pressed */
	SDL_MOUSEBUTTONUP,               /* Mouse button released */
	SDL_JOYAXISMOTION,               /* Joystick axis motion */
	SDL_JOYBALLMOTION,               /* Joystick trackball motion */
	SDL_JOYHATMOTION,                /* Joystick hat position change */
	SDL_JOYBUTTONDOWN,               /* Joystick button pressed */
	SDL_JOYBUTTONUP,                 /* Joystick button released */
	SDL_QUIT,                        /* User-requested quit */
	SDL_SYSWMEVENT,                  /* System specific event */
	SDL_EVENT_RESERVEDA,             /* Reserved for future use.. */
	SDL_EVENT_RESERVEDB,             /* Reserved for future use.. */
	SDL_VIDEORESIZE,                 /* User resized video mode */
	SDL_VIDEOEXPOSE,                 /* Screen needs to be redrawn */
	SDL_EVENT_RESERVED2,             /* Reserved for future use.. */
	SDL_EVENT_RESERVED3,             /* Reserved for future use.. */
	SDL_EVENT_RESERVED4,             /* Reserved for future use.. */
	SDL_EVENT_RESERVED5,             /* Reserved for future use.. */
	SDL_EVENT_RESERVED6,             /* Reserved for future use.. */
	SDL_EVENT_RESERVED7,             /* Reserved for future use.. */
	/* Events SDL_USEREVENT through SDL_MAXEVENTS-1 are for your use */
	SDL_USEREVENT = 24,
	/* This last event is only for bounding internal arrays
	 It is the number of bits in the event mask datatype -- Uint32
	 */
	SDL_NUMEVENTS = 32
};

#define KMOD_CTRL	(KMOD_LCTRL|KMOD_RCTRL)
#define KMOD_SHIFT	(KMOD_LSHIFT|KMOD_RSHIFT)
#define KMOD_ALT	(KMOD_LALT|KMOD_RALT)
#define KMOD_GUI	(KMOD_LGUI|KMOD_RGUI)
	
#import "sdl_event.h"
	
#ifdef __cplusplus
}
#endif

#endif