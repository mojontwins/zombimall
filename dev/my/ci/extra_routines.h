// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins


if (p_hemorragia == 1) {
    if (cont_hemorragia == 0) {
        p_life--;
        cont_hemorragia = 30;
		draw_sub_life();
    } else {
        cont_hemorragia--;
    }

    if (borde_hemorragia == 0) {
        sp_Border(BLACK);
        borde_hemorragia = 1;
    } else {
        sp_Border(RED);
        borde_hemorragia = 0;
    }
}

if (p_life <= 0 || p_life > 100) {
   success = playing = 0;
}

//acumulador de movimiento
if (((pad0 & sp_LEFT) == 0 || 
    (pad0 & sp_RIGHT) == 0 || 
    (pad0 & sp_UP) == 0 || 
    (pad0 & sp_DOWN) == 0) && zombi_dress == 1) {
    mount_move++;
} else {
    mount_move = 0;
}

if (zombi_dress == 1) {
    dress_count++;
}

if (dress_count >= 2000) {
    if (infection == 0) {
        textbox(36);
    } else if (infection == 1) {
        textbox(37);
    } else if (infection == 2) {
        textbox(38);
        p_killed = 1;
        success = playing = 0;
    }
    dress_count = 0;
    infection++;
}


//halo
if (halo) {

      if (justlit || prxc != ovl_x || pryc != ovl_y) {
        ovl_x = prxc; ovl_y = pryc;
        #asm
          call _ovl_draw_scr
          call _ovl_draw_buff
          call _ovl_del
        #endasm
        justlit = 0;
      }

}
*((unsigned char*) 23304) = halo;
