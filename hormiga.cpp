#include "hormiga.h"

hormiga::hormiga(int x, int y, rejilla *r) {
    this->x = x;
    this->y = y;
    this->direccion_display = 0;
    this->r_asocida = r;
}

void hormiga::modificar_posicion(int _x, int _y){
    
    //----------------------x----------------------
    
    if (this->x+_x<0){
        this->x=0;
    }else{
        //this->x = this->x+_x;
        if (this->r_asocida->get_size_x()<this->x+_x){
            this->x=this->r_asocida->get_size_x();
        }else{
            this->x = this->x+_x;
        }
    }
    
    //-----------------------y-------------------------
    
    if (this->y+_y<0){
        this->y=0;
    }else{
        //this->y = this->y+_y;
        if (this->r_asocida->get_size_y()<this->y+_y){
            this->y=this->r_asocida->get_size_y();
        }else{
            this->y = this->y+_y;
        }
    }
    
    //this->x = this->x+_x;
    //this->y = this->y+_y;

}

void hormiga::mover() {
    //int color_actual  = this->r_asocida[this->x][this->y];
    int color_actual  = this->r_asocida->get_position_status(this->x, this->y);
    
    //Comportamientos
    if (color_actual=='0'){ //Negro
        if (this->direccion_display == 0){ // Giro a la der desde ^
            //Giramos a la derecha
            this->direccion_display = 2; // >
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, '1'); // Pasa blanco
            //Movemos hormiga
            //this->x = this->x; //Avance derecha
            //this->y = this->y+1;
            this->modificar_posicion(0,1);
        }else if (this->direccion_display == 1){ // Giro a la der desde v
            //Giramos a la derecha
            this->direccion_display = 3; // <
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, '1'); // Pasa blanco
            //Movemos hormiga
            //this->x = this->x; // Avance izqu
            //this->y = this->y-1;
            this->modificar_posicion(0,-1);
        }else if (this->direccion_display == 2){ // Giro a la der desde >
            //Giramos a la derecha
            this->direccion_display = 1; // v
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, '1'); // Pasa blanco
            //Movemos hormiga
            //this->x = this->x+1; // Avance abajo
            //this->y = this->y;
            this->modificar_posicion(1,0); 
        }else if (this->direccion_display == 3){ // Giro a la der desde <
            //Giramos a la derecha
            this->direccion_display = 0; // ^
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, '1'); // Pasa blanco
            //Movemos hormiga
            //this->x = this->x-1; // Avance arriba
            //this->y = this->y;
            this->modificar_posicion(-1,0);   
        }
    }else if (color_actual=='1'){ // Blanco
        if (this->direccion_display == 0){ // Giro a la der desde ^
            //Giramos a la derecha
            this->direccion_display = 3; // <
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, '0'); // Pasa negro
            //Movemos hormiga
            //this->x = this->x; //Avance izquierda
            //this->y = this->y-1;
            this->modificar_posicion(0,-1);
        }else if (this->direccion_display == 1){ // Giro a la der desde v
            //Giramos a la derecha
            this->direccion_display = 2; // >
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, '0'); // Pasa negro
            //Movemos hormiga
            //this->x = this->x; // Avance derecha
            //this->y = this->y+1;
            this->modificar_posicion(0,1);
        }else if (this->direccion_display == 2){ // Giro a la der desde >
            //Giramos a la derecha
            this->direccion_display = 0; // ^
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, '0'); // Pasa negro
            //Movemos hormiga
            //this->x = this->x-1; // Avance arriba
            //this->y = this->y;
            this->modificar_posicion(-1,0); 
        }else if (this->direccion_display == 3){ // Giro a la der desde <
            //Giramos a la derecha
            this->direccion_display = 1; // v
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, '0'); // Pasa negro
            //Movemos hormiga
            //this->x = this->x+1; // Avance arriba
            //this->y = this->y;
            this->modificar_posicion(1,0);   
        }
    }
}

int hormiga::get_x() {
    return this->x;
}

int hormiga::get_y() {
    return this->y;
}

rejilla * hormiga::get_rejilla(){
    return this->r_asocida;
}

char hormiga::get_direccion_display() {
    if(this->direccion_display == arriba){
        return '^';
    }
    if(this->direccion_display == abajo){
        return 'v';
    }    
    if(this->direccion_display == izquierda){
        return '<';
    }    
    if(this->direccion_display == derecha){
        return '>';
    }
}

hormiga::~hormiga() {
}

