// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

//pintado de objetos

paint_custom_objects();

if (closed_doors) {
    switch (n_pant) {
        case 18:
            for (rdd = 0; rdd < 2; rdd++) {
                _t = 4;
                _x = 0;
                _y = 4 + rdd;
                _n = 8;
                update_tile();
            }
            break;

        case 20:
            for (rdd = 0; rdd < 2; rdd++) {
                _t = 3;
                _x = 14;
                _y = 4 + rdd;
                _n = 8;
                update_tile();
            }
            break;

        case 25:
           for (rdd = 0; rdd < 3; rdd++) {
                _t = 5;
                _x = 6 + rdd;
                _y = 9;
                _n = 8;
                update_tile();
            }             
            break;
    }
}
