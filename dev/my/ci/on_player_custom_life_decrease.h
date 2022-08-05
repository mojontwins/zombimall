// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

if (p_life > 1) {
    p_life--;
    draw_sub_life();
} else {
    p_life = 0;
}

rda = rand();
if (rda < 10) {
    p_hemorragia = 1;
} 

if (p_hemorragia == 1 && zombi_dress == 1) {
    textbox(35);
    p_killed = 1;
    success = playing = 0;
}
