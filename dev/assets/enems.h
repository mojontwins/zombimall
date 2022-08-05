// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// Generated by ene2h.exe from ..\enems\enems.ene
// Copyleft 2010, 2017 by The Mojon Twins

typedef struct {
	unsigned char x, y;
	unsigned char x1, y1, x2, y2;
	char mx, my;
	char t;
#ifdef PLAYER_CAN_FIRE
	unsigned char life;
#endif
} MALOTE;

MALOTE malotes [] = {
	// Pantalla 0
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 1
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 2
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 3
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 4
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 5
 	{208, 32, 208, 32, 144, 32, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 6
 	{112, 32, 112, 32, 80, 32, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 7
 	{128, 112, 128, 112, 96, 112, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 8
 	{96, 64, 96, 64, 64, 64, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 9
 	{128, 32, 128, 32, 160, 32, 0, 0, 5},
 	{80, 112, 80, 112, 112, 112, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 10
 	{112, 32, 112, 32, 144, 32, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 11
 	{128, 48, 128, 48, 96, 48, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 12
 	{112, 32, 112, 32, 144, 32, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 13
 	{32, 80, 32, 80, 32, 48, 0, 0, 5},
 	{192, 80, 192, 80, 192, 48, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 14
 	{80, 32, 80, 32, 96, 32, 0, 0, 5},
 	{160, 48, 160, 48, 144, 48, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 15
 	{128, 128, 128, 128, 160, 128, 0, 0, 5},
 	{128, 32, 128, 32, 160, 32, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 16
 	{144, 112, 144, 112, 112, 112, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 17
 	{160, 128, 160, 128, 128, 128, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 18
 	{64, 32, 64, 32, 64, 64, 0, 0, 5},
 	{112, 80, 112, 80, 144, 80, 0, 0, 5},
 	{112, 128, 112, 128, 160, 128, 0, 0, 5},

	// Pantalla 19
 	{96, 32, 96, 32, 128, 32, 0, 0, 5},
 	{64, 96, 64, 96, 64, 128, 0, 0, 5},
 	{160, 80, 160, 80, 160, 48, 0, 0, 5},

	// Pantalla 20
 	{80, 32, 80, 32, 80, 64, 0, 0, 5},
 	{128, 96, 128, 96, 128, 80, 0, 0, 5},
 	{160, 48, 160, 48, 160, 80, 0, 0, 5},

	// Pantalla 21
 	{64, 48, 64, 48, 80, 48, 0, 0, 5},
 	{144, 112, 144, 112, 160, 112, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 22
 	{32, 80, 32, 80, 32, 48, 0, 0, 5},
 	{208, 80, 208, 80, 208, 48, 0, 0, 5},
 	{112, 80, 112, 80, 144, 80, 0, 0, 5},

	// Pantalla 23
 	{112, 128, 112, 128, 80, 128, 0, 0, 5},
 	{128, 32, 128, 32, 112, 32, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 24
 	{112, 32, 112, 32, 112, 48, 0, 0, 5},
 	{16, 48, 16, 48, 48, 48, 0, 0, 5},
 	{80, 128, 80, 128, 80, 112, 0, 0, 5},

	// Pantalla 25
 	{32, 80, 32, 80, 64, 80, 0, 0, 5},
 	{176, 112, 176, 112, 176, 96, 0, 0, 0},
 	{112, 80, 112, 80, 112, 64, 0, 0, 5},

	// Pantalla 26
 	{160, 112, 160, 112, 144, 112, 0, 0, 0},
 	{64, 128, 64, 128, 80, 128, 0, 0, 5},
 	{160, 32, 160, 32, 112, 32, 0, 0, 5},

	// Pantalla 27
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 28
 	{112, 112, 112, 112, 112, 80, 0, 0, 5},
 	{64, 80, 64, 80, 64, 48, 0, 0, 5},
 	{144, 48, 144, 48, 176, 48, 0, 0, 5},

	// Pantalla 29
 	{64, 48, 64, 48, 96, 48, 0, 0, 5},
 	{160, 80, 160, 80, 160, 64, 0, 0, 5},
 	{64, 112, 64, 112, 96, 112, 0, 0, 5},

	// Pantalla 30
 	{176, 112, 176, 112, 176, 80, 0, 0, 5},
 	{208, 16, 208, 16, 208, 32, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 31
 	{48, 80, 48, 80, 64, 80, 0, 0, 5},
 	{192, 64, 192, 64, 176, 64, 0, 0, 5},
 	{112, 112, 112, 112, 112, 96, 0, 0, 5},

	// Pantalla 32
 	{64, 96, 64, 96, 64, 80, 0, 0, 5},
 	{176, 80, 176, 80, 176, 48, 0, 0, 5},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 33
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 34
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 35
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0}

};

#define N_ENEMS_TYPE_0 56
#define N_ENEMS_TYPE_1 0
#define N_ENEMS_TYPE_2 0
#define N_ENEMS_TYPE_3 0
#define N_ENEMS_TYPE_5 52
#define N_ENEMS_TYPE_6 0
#define N_ENEMS_TYPE_7 0

// This is output the way it worked originally, please modify if you need
// You may want to add type 5 or 6's below.
#define BADDIES_COUNT (N_ENEMS_TYPE_1+N_ENEMS_TYPE_2+N_ENEMS_TYPE_3)

typedef struct {
	unsigned char xy, tipo, act;
} HOTSPOT;

HOTSPOT hotspots [] = {
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{210, 2, 0}, 
	{18, 2, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{211, 2, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}
};

#define N_HOTSPOTS_TYPE_0 33
#define N_HOTSPOTS_TYPE_1 0
#define N_HOTSPOTS_TYPE_2 3
#define N_HOTSPOTS_TYPE_3 0
#define N_HOTSPOTS_TYPE_4 0
#define N_HOTSPOTS_TYPE_5 0
#define N_HOTSPOTS_TYPE_6 0
#define N_HOTSPOTS_TYPE_7 0

