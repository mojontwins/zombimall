// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

//TAKE OBJECTS
rda = pad0 & sp_FIRE;

if (rda == 0) {
    rdc = 0;
    //comprobar si hay objeto a recoger
    rdb = get_object();

    if (rdb == 6) { //guantes
        textbox(11);
        catch_custom_object(6, 0);
        if (object_in_hand != 0) {
            leave_custom_object();
        } 
        object_in_hand = 6;
        rdc = 1;
    }

    if (rdb == 1) { //llave moto
        textbox(12);
        catch_custom_object(1, 0);
        if (object_in_hand != 0) {
            leave_custom_object();
        } 
        object_in_hand = 1;
        rdc = 1;
    }

//TODO estudiar este caso, esta raro la parte de rdd
    if (rdb == 2) { //bidon
        if (object_in_hand == 5) {
            textbox(14);
            destroy_object_in_hand(5);
            object_in_hand = 3;
            catch_custom_object(3, 1);
        } else {
            textbox(13);
            rdd = catch_custom_object(2, 0);  // <- cuando bidon en mano y manguera en suelo, no devuelve rdd == 0, deberia de devolverlo. ver codigo asm para retorno de C
            if (object_in_hand != 0) {
                leave_custom_object();
            } 
            if (_c == 0) {
                object_in_hand = 2;
            } else if (_c == 1) {
                object_in_hand = 3;
            } else {
                object_in_hand = 4;
            }
            
        }
        rdc = 1;
    }

    if (rdb == 5) { //manguera
        if (object_in_hand == 2) {
            textbox(14);
            destroy_object_in_hand(5);
            object_in_hand = 3;
            catch_custom_object(3, 1);
        } else {
            textbox(15);
            catch_custom_object(5, 0);
            if (object_in_hand != 0) {
                leave_custom_object();
            } 
            object_in_hand = 5;
            //soltar objeto
        }
        rdc = 1;
    }

    if (rdb == 13) { 
        zombi_dress = 1; //nos vestimos de zombi
        textbox (1);
        sp_Border(YELLOW);
        if (p_hemorragia == 1) {
            invalidate_viewport();
            //MUERTE POR SUBNORMAL
            textbox(25);
            success = playing = 0;
            p_killed = 1; 
        }
        rdc = 1;
    }

    if (rdb == 14) {
        if (object_in_hand == 4) { //llenamos el generador
            destroy_object_in_hand(4);
            generator_on = 1;
            textbox(2);
        } else {
            textbox(20);
        }
        rdc = 1;
    }

    if (rdb == 19 && electric_circuit_active == 0) {
        textbox(34);
        rdc = 1;
    }
    if (rdb == 19 && electric_circuit_active == 1) {
        closed_doors = 1;
        textbox(21);
        rdc = 1;
    } 

    if (rdb == 15) {
        if (generator_on == 1) { // enciende los fusibles. Opciones: guantes ok, sin guantes KO
            if (object_in_hand == 6) {
                destroy_object_in_hand(6);
                electric_circuit_active = 1;
                textbox(3);
            } else {
                //MUERTE ELECTROCUTADO
                //parpadeo de pantalla
                textbox(4);
                p_killed = 1;
                success = playing = 0;
            }
        } else {
            textbox(19);
        }
        rdc = 1;
    }
    
    if (rdb == 16) { //moto
        if (object_in_hand == 1) {  // abrir la moto
            moto_open = 1;
            destroy_object_in_hand(1);
            textbox(6);
        } else if (object_in_hand == 3 && moto_open == 1) { //llenar bidon de gasolina
            object_in_hand = 4;
            catch_custom_object(4, 1);
            textbox(7);
        } else {
            textbox(5);   
        }
        rdc = 1;
    }

    if (rdb == 7) { //pila
        if (object_in_hand == 8) {//encender lampara
            basement_light_on = 1;
            object_in_hand = 9;
            destroy_object_in_hand(7);
            catch_custom_object(9, 1);
            textbox(8);
        } else {
            textbox(10);
            catch_custom_object(7, 0);
            if (object_in_hand != 0) {
                 leave_custom_object();
            } 
            object_in_hand = 7;
        } 
        rdc = 1;
    }

    if (rdb == 8) { //lampara
        if (object_in_hand == 7) {//encender lampara
            basement_light_on = 1;
            destroy_object_in_hand(7);
            object_in_hand = 9;
            //pintar losa
            catch_custom_object(9, 1);
            textbox(8);
        } else {
            textbox(9);
            rdd = catch_custom_object(8, 0);
            if (object_in_hand != 0) {
                 leave_custom_object();
            } 
            if (rdd == 0) {
                object_in_hand = 8;
            } else {
                object_in_hand = 9;
            }
                
        } 
        rdc = 1;
    }

    if (rdb == 10) {  //bengala
        if (object_in_hand == 11) {
            destroy_object_in_hand(10);
            object_in_hand = 12;
            //pintar losa
            catch_custom_object(12, 1);
            textbox(16);
        } else {
            textbox(17);
            catch_custom_object(10, 0);
            if (object_in_hand != 0) {
                 leave_custom_object();
            } 
            object_in_hand = 10;
        }
        rdc = 1;
    } 

    if (rdb == 11) {  //pistola
        if (object_in_hand == 10) {
            destroy_object_in_hand(10);
            object_in_hand = 12;
            catch_custom_object(12, 1);
            textbox(16);
        } else {
            textbox(18);
            rdd = catch_custom_object(11, 0);
            if (object_in_hand != 0) {
                 leave_custom_object();
            } 
            if (rdd == 0) {
                object_in_hand = 11;
            } else {
                object_in_hand = 12;
            }
        }
        rdc = 1;
    } 
    
    if (rdb == 17) {  //lavabo
        if (p_hemorragia == 1) {
            p_hemorragia = 0;
            textbox(22);
        } else if (zombi_dress == 1) {
            zombi_dress = 0;
            dress_count = 0;
            infection = 0;
            textbox(23);
        } else {
            textbox(24);
        }
        rdc = 1;
    }

    if (rdb == 18) {
        textbox(33);
        rdc = 1;
    }

    if (object_in_hand == 12 && rdc == 0) { //dispara la bengala. Opciones: hacerlo en azotea o no
        if (n_pant == 0 || n_pant == 1) {
            if (zombi_dress == 1) {
                // TE MATAN HUMANOS
                textbox(29);
                success = playing = 0;
            } else if (closed_doors == 0) {
                //TE MATAN LOS ZOMBIS
                textbox(30);
                success = playing = 0;
            } else {
                // FIN DE JUEGO!!!!!
                textbox(31);
                success = 1;
                playing = 0;
            }
        } else {
            textbox(32);
            success = playing = 0;
            // DESPERDICIA LA BENGALA. MUERE
        }
        rdc = 1;
    }

    if (rdb == 0 && rdc == 0) {
        textbox(0);
        paint_custom_objects();
    }

    draw_object_in_hand_marker();
}

paint_custom_objects();

