// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

discovered = 0;
dress_count = 0;

if ((o_pant == 18 && p_tx <= 2) ||
    (o_pant == 25 && p_ty >= 9) ||
    (o_pant == 30 && ((p_ty <= 2) || (p_ty >= 12)))) {
    n_pant = 27;
    gpx = 11 << 4; p_x = gpx << FIXBITS;
    gpy = 4 << 4; p_y = gpy << FIXBITS;
    p_life = 0;
    p_killme = 1;
} else if (o_pant == 30 && p_tx >= 14) {
    n_pant = 20;
    gpx = 13 << 4; p_x = gpx << FIXBITS;
    gpy = 3 << 4; p_y = gpy << FIXBITS;
} else if (o_pant == 30) {
    n_pant = 27;
    gpx = 11 << 4; p_x = gpx << FIXBITS;
    gpy = 4 << 4; p_y = gpy << FIXBITS;
    p_life = 0;
    p_killme = 1;
} else if (o_pant == 20 && p_tx >= 14) {
    n_pant = 30;
    gpx = 13 << 4; p_x = gpx << FIXBITS;
    gpy = 3 << 4; p_y = gpy << FIXBITS;
} 
// se comprueba si estamos en una pantalla "doble". Si no, usamos rutina de pintado normal

//textbox (0);

//screen_render_type
paint_y1 = 0;
paint_y2 = 150;
if (n_pant == 3 || n_pant == 6 || n_pant == 9 || n_pant == 11 || n_pant == 12 || n_pant == 14 || n_pant == 15 || n_pant == 17 || n_pant == 21 || n_pant == 23 || n_pant == 24 || n_pant == 26) {
    if (p_ty < 5) {
        paint_y1 = 0;
        paint_y2 = 75;
    } else {
        paint_y1 = 75;
        paint_y2 = 150;
    }

    if (o_pant == 29 && n_pant == 26) {
        paint_y1 = 75;
        paint_y2 = 150;
    }
}


