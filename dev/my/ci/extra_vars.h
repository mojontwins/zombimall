// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

#include "plugins/textbox.h"

unsigned char floor = 3;

unsigned char over_tile;
unsigned char paint_y1 = 0; 
unsigned char paint_y2 = 0;


unsigned char vision_zombi = 0;
unsigned char _en_direction = 0;

int diff_x = 0;
int diff_y = 0;

//vbles hemorragia
unsigned char p_hemorragia = 0;
unsigned char cont_hemorragia = 30;
unsigned char borde_hemorragia = 1;

// logica juego
unsigned char object_in_hand = 0;
unsigned char zombi_dress = 0;
unsigned char closed_doors = 0;
unsigned char electric_circuit_active = 0;
unsigned char generator_on = 0;
unsigned char moto_open = 0;
//unsigned char basement_light_on = 0;
unsigned char aux_sotano = 0;
unsigned char guantes_equipados = 0;

unsigned char justlit;
unsigned char halo;
unsigned char prxc;
unsigned char pryc;
unsigned char ovl_x;
unsigned char ovl_y;

unsigned char mount_move = 0;
unsigned char discovered = 0;
unsigned int dress_count = 0;
unsigned char infection = 0;


typedef struct {
    unsigned char np, x, y, st, t, c;
} CUSTOM_OBJECTS;

CUSTOM_OBJECTS custom_objects[8] = {
    {21, 1, 7, 1, 22, 0}, //pistola
    {14, 12, 2, 1, 23, 0}, //cartucho
    {6, 1, 3, 1, 24, 0}, //guantes
    {2, 10, 2, 1, 25, 0}, //llave moto
    {17, 1, 7, 1, 26, 0}, //linterna
    {8, 12, 2, 1, 27, 0}, //pila
    {12, 1, 2, 1, 28, 0}, //manguera
    {31, 12, 8, 1, 29, 0} //bidon
};
