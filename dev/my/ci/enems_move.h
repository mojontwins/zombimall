// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

 case 5:
       active = 1;
       if (must_draw_element(_en_y >> 4) == 0) {
              active = 0;
              break;
       } 
       vision_zombi = distance(gpx, gpy, _en_x, _en_y);

       if (zombi_dress == 1 && discovered == 0) {
              if (mount_move < 12) {
                     vision_zombi = 100; 
              } else {
                     discovered = 1;
              }
       }

       if (vision_zombi <= 64 /*&& flags[0] == 1*/) {

              if (en_an_base_frame [enit] == 0 || en_an_base_frame [enit] == 1) {
                     _en_direction = 1; //der
              } else if (en_an_base_frame [enit] == 2 || en_an_base_frame [enit] == 3) {
                     _en_direction = 2; //izq
              } else if (en_an_base_frame [enit] == 4 || en_an_base_frame [enit] == 5) {
                     _en_direction = 3; //abj
              } else if (en_an_base_frame [enit] == 6 || en_an_base_frame [enit] == 7) {
                     _en_direction = 4; //arr
              }

              diff_x = _en_x - gpx;
              diff_y = _en_y - gpy;

              if (diff_x >= 0 && diff_x >= abs(diff_y)) {
                     if (collide_enem(_en_x - 4, _en_y) == 0) _en_x--;
                     en_an_base_frame [enit] = 2;
              } else if (diff_x < 0 && abs(diff_x) >= abs(diff_y)) {
                     if (collide_enem(_en_x + 4, _en_y) == 0) _en_x++;
                     en_an_base_frame [enit] = 0;
              } 
              if (diff_y <= 0 && abs(diff_y) >= abs(diff_x)) {
                     if (collide_enem(_en_x, _en_y + 4) == 0) _en_y++;
                     en_an_base_frame [enit] = 6;
              } else if (diff_y > 0 && diff_y >= abs(diff_x)) {
                     if (collide_enem(_en_x, _en_y - 4) == 0) _en_y--;
                     en_an_base_frame [enit] = 4;
              }
              flags[0] = 0;
       } else {
              flags[0] = 1;
       }
       //if (zombi_dress == 0) sp_Border(BLACK);
       vision_zombi = 0;
       break;