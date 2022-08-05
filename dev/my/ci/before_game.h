// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

//iniciar objetos

//iniciar enemigos

floor = 3;
p_hemorragia = 0;
cont_hemorragia = 30;
borde_hemorragia = 1;

object_in_hand = 0;
zombi_dress = 0;
closed_doors = 0;
electric_circuit_active = 0;
generator_on = 0;
moto_open = 0;
basement_light_on = 0;
justlit = 0;
halo = 0;
discovered = 0;
dress_count = 0;
infection = 0;
sp_Border(BLACK);
flags[0] = 0;

rdd = rand() % 3;
if (rdd == 0) {
    custom_objects[0].np=21;custom_objects[0].x=1;custom_objects[0].y=7;
    custom_objects[1].np=14;custom_objects[1].x=12;custom_objects[1].y=2;
    custom_objects[2].np=6;custom_objects[2].x=1;custom_objects[2].y=3;
    custom_objects[4].np=17;custom_objects[4].x=12;custom_objects[4].y=2;
    custom_objects[5].np=8;custom_objects[5].x=12;custom_objects[5].y=2;
    custom_objects[6].np=12;custom_objects[6].x=1;custom_objects[6].y=2;
} else if (rdd == 1) {
    custom_objects[0].np=15;custom_objects[0].x=1;custom_objects[0].y=8;
    custom_objects[1].np=6;custom_objects[1].x=1;custom_objects[1].y=7;
    custom_objects[2].np=12;custom_objects[2].x=1;custom_objects[2].y=7;
    custom_objects[4].np=3;custom_objects[4].x=1;custom_objects[4].y=2;
    custom_objects[5].np=23;custom_objects[5].x=12;custom_objects[5].y=2;
    custom_objects[6].np=14;custom_objects[6].x=12;custom_objects[6].y=7;
} else {
    custom_objects[0].np=23;custom_objects[0].x=12;custom_objects[0].y=2;
    custom_objects[1].np=11;custom_objects[1].x=12;custom_objects[1].y=7;
    custom_objects[2].np=9;custom_objects[2].x=1;custom_objects[2].y=7;
    custom_objects[4].np=11;custom_objects[4].x=12;custom_objects[4].y=2;
    custom_objects[5].np=24;custom_objects[5].x=1;custom_objects[5].y=2;
    custom_objects[6].np=3;custom_objects[6].x=1;custom_objects[6].y=8;
}

custom_objects[0].st=1;custom_objects[0].t=22;custom_objects[0].c=0;
custom_objects[1].st=1;custom_objects[1].t=23;custom_objects[1].c=0;
custom_objects[2].st=1;custom_objects[2].t=24;custom_objects[2].c=0;
custom_objects[3].np=2;custom_objects[3].x=10;custom_objects[3].y=2;custom_objects[3].st=1;custom_objects[3].t=25;custom_objects[3].c=0;
custom_objects[4].st=1;custom_objects[4].t=26;custom_objects[4].c=0;
custom_objects[5].st=1;custom_objects[5].t=27;custom_objects[5].c=0;
custom_objects[6].st=1;custom_objects[6].t=28;custom_objects[6].c=0;
custom_objects[7].np=31;custom_objects[7].x=12;custom_objects[7].y=8;custom_objects[7].st=1;custom_objects[7].t=29;custom_objects[7].c=0;

for (enit = 0; enit < MAP_W*MAP_H*MAX_ENEMS; enit++) {
    malotes [enit].x = malotes [enit].x1;
    malotes [enit].y = malotes [enit].y1;
}