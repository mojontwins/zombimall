// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins
if (qtile(p_tx, p_ty) == 1) {aux_sotano = 0;}
//bajar planta
if (qtile (p_tx, p_ty) == 11) {
  if (floor == 3) {
        warp_to_level = 1;
        n_pant = 10;
        floor = 2;
        gpx = 11 << 4; p_x = gpx << FIXBITS;
        gpy = 2 << 4; p_y = gpy << FIXBITS;
  } else if (floor == 2) {
        warp_to_level = 1;
        n_pant = 19;
        floor = 1;
        gpx = 11 << 4; p_x = gpx << FIXBITS;
        gpy = 2 << 4; p_y = gpy << FIXBITS;
  } else if (floor == 1) {
      if (basement_light_on == 1) {
            floor = 0;
            n_pant = 29;
            gpx = 11 << 4; p_x = gpx << FIXBITS;
            gpy = 2 << 4; p_y = gpy << FIXBITS;
            halo = justlit = 1;
      } else if (aux_sotano == 0) {
            textbox(28);
            aux_sotano = 1;
      }
  }
} else if (qtile (p_tx, p_ty) == 12) {
  if (floor == 2) {
        warp_to_level = 1;
        n_pant = 7;
        floor = 3;
        gpx = 11 << 4; p_x = gpx << FIXBITS;
        gpy = 8 << 4; p_y = gpy << FIXBITS;
  } else if (floor == 1) {
        warp_to_level = 1;
        n_pant = 16;
        floor = 2;
        gpx = 11 << 4; p_x = gpx << FIXBITS;
        gpy = 8 << 4; p_y = gpy << FIXBITS;
  } else if (floor == 0) {
      floor = 1;
      n_pant = 26;
      gpx = 11 << 4; p_x = gpx << FIXBITS;
      gpy = 8 << 4; p_y = gpy << FIXBITS;
      halo = 0;
  }
}
    
