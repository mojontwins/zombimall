/* // MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

case 5:
    //zombi muerto
    break;
case 6:
    //pistola
    break;
case 7:
    //bengala
    break;
case 8:
    //guante
    break;
case 9:
    //llave
    break;
case 10:
    //linterna
    rda = pad0 & sp_FIRE;
    if (rda == 0) {
        if (object_in_hand == 7) {
            basement_light_on = 1;
            object_in_hand = 0;
            //hacer ruido
            textbox(8);
        } else {
            //coge la linterna
            object_in_hand = 8;
            //hacer ruido
            textbox(9);
            //soltar objeto si lleva
        }
    }
    break;
case 11:
    //pila
    rda = pad0 & sp_FIRE;
     if (rda == 0) {
        if (object_in_hand == 8) {
            basement_light_on = 1;
            object_in_hand = 0;
            textbox(8);
        } else {
            //coge la pila
            object_in_hand = 7;
            //hacer ruido
            textbox(10);
            //soltar objeto si lleva
        }
    } 
    break;
case 12:
    //manguera
    break;
case 13:
    //bidon
    break;
case 14:
    //cuadro luz
    rda = pad0 & sp_FIRE;
    if (rda == 0 && generator_on == 1) { // enciende los fusibles. Opciones: guantes ok, sin guantes KO
        if (object_in_hand == 6) {
            object_in_hand = 0;
            electric_circuit_active = 1;
            textbox(3);
            //hacer ruido
        } else {
             //MUERTE ELECTROCUTADO
             //parpadeo de pantalla
             textbox(4);
             p_killed = 1;
        }
    }
    break;
case 15:
    //generador
    rda = pad0 & sp_FIRE;
    if (rda == 14 && object_in_hand == 4) { //llenamos el generador
         object_in_hand = 0;
         generator_on = 1;
         textbox(2);
         //hacer ruido
    }
    break;
case 16:
case 17:
    //lavabo
    break;
case 18:
case 19:
case 20:
    //moto
    rda = pad0 & sp_FIRE;
    if (rda == 0 && object_in_hand == 1) {  // abrir la moto
        moto_open = 1;
        object_in_hand = 0;
        textbox(6);
    } else if (rda == 0 && object_in_hand == 3 && moto_open == 1) { //llenar bidon de gasolina
        object_in_hand = 4;
        textbox(7);
    } else {
        textbox(5);
    }
    break; */