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

/*
#asm
		ld  a, (_p_hemorragia)
		or  a
		jr  z, p_hemorragia_done            // IF p_hemorragia == 0 GOTO p_hemorragia_done
	
	.p_hemorragia_do                        // -> p_hemorragia != 0
		ld  a, (_cont_hemorragia)
		or  a 
		jr  nz, p_hemorragia_dec_cont       // IF cont_hemorragia != 0 GOTO p_hemorragia_dec_cont

											// -> cont_hemorraiga = 0
		ld  hl, _p_life 
		dec (hl)                            // p_life --;

		call _draw_sub_life

		ld  a, 30
		jr  p_hemorragia_cont_done

	.p_hemorragia_dec_cont
		dec a 

	.p_hemorragia_cont_done
		ld  (_cont_hemorragia), a

		ld  a, (_borde_hemorragia)          // A = borde_hemorragia (0 | 1)
		ld  c, a                            // C = borde_hemorragia
		ld  a, 1                            // A = 1
		sub c                               // A = 1 - borde_hemorragia (pasa de 0 a 1 y de 1 a 0)
		ld  (_borde_hemorragia), a          // borde_hemorragia = 1 - borde_hemorragia
		sla a                               // A = A << 1: 0->0, 1->2
		out (254), a                        // BORDER A

	.p_hemorragia_done
#endasm */

if (zombi_dress == 1) {
	#asm
	ld a, 4
	out (254), a                        // BORDER A
	#endasm
	
} else {
	#asm
	ld a, 0
	out (254), a                        // BORDER A
	#endasm
}
/*
if (p_life <= 0 || p_life > 100) {
   success = playing = 0;
}
*/

// p_life es unsigned char. < 0 es lo mismo que >= 128 (complemento a 2), que se incluye en el >100
#asm
		ld  a, (_p_life)
		or  a 
		jr  z, set_game_over                // If p_life == 0 GOTO set_game_over

		// p_life > 100 --> p_life >= 101
		cp  101
		jr  c, set_game_over_done           // IF p_life < 101 GOTO set_game_over_done

	.set_game_over
		xor a
		ld  (_success), a 
		ld  (_playing), a

	.set_game_over_done
#endasm


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

if (dress_count >= 1200) {
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
if (halo == 1) {
	prxc = (gpx >> 3); pryc = (gpy >> 3);

	if (justlit == 1 || prxc != ovl_x || pryc != ovl_y) {
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
