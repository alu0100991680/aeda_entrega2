#include "hormiga.h"

hormiga::hormiga(int x, int y, rejilla *r) {
    this->x = x;
    this->y = y;
    this->direccion_display = 0;
    this->r_asocida = r;
}

void hormiga::mover() {
    //int color_actual  = this->r_asocida[this->x][this->y];
    int color_actual  = this->r_asocida->get_position_status(this->x, this->y);
    
    //Comportamientos
    if (color_actual==0){
        if (this->direccion_display == 0){ // Giro a la der desde ^
            //Giramos a la derecha
            this->direccion_display = 2; // >
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, 1); // Pasa blanco
            //Movemos hormiga
            this->x = this->x; //Avance derecha
            this->y = this->y+1;
        }else if (this->direccion_display == 1){ // Giro a la der desde v
            //Giramos a la derecha
            this->direccion_display = 3; // <
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, 1); // Pasa blanco
            //Movemos hormiga
            this->x = this->x; // Avance izqu
            this->y = this->y-1;
        }else if (this->direccion_display == 2){ // Giro a la der desde >
            //Giramos a la derecha
            this->direccion_display = 1; // v
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, 1); // Pasa blanco
            //Movemos hormiga
            this->x = this->x+1; // Avance abajo
            this->y = this->y; 
        }else if (this->direccion_display == 3){ // Giro a la der desde <
            //Giramos a la derecha
            this->direccion_display = 0; // ^
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, 1); // Pasa blanco
            //Movemos hormiga
            this->x = this->x-1; // Avance arriba
            this->y = this->y;   
        }
    }else if (color_actual==1){
        if (this->direccion_display == 0){ // Giro a la der desde ^
            //Giramos a la derecha
            this->direccion_display = 3; // <
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, 0); // Pasa negro
            //Movemos hormiga
            this->x = this->x; //Avance izquierda
            this->y = this->y-1;
        }else if (this->direccion_display == 1){ // Giro a la der desde v
            //Giramos a la derecha
            this->direccion_display = 2; // >
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, 0); // Pasa negro
            //Movemos hormiga
            this->x = this->x; // Avance derecha
            this->y = this->y+1;
        }else if (this->direccion_display == 2){ // Giro a la der desde >
            //Giramos a la derecha
            this->direccion_display = 0; // ^
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, 0); // Pasa negro
            //Movemos hormiga
            this->x = this->x-1; // Avance arriba
            this->y = this->y; 
        }else if (this->direccion_display == 3){ // Giro a la der desde <
            //Giramos a la derecha
            this->direccion_display = 1; // v
            //Cambiamos de 0 a 1
            (*this->r_asocida).set_position_status(this->x, this->y, 0); // Pasa negro
            //Movemos hormiga
            this->x = this->x+1; // Avance arriba
            this->y = this->y;   
        }
    }
}

int hormiga::get_x() {
    return this->x;
}

int hormiga::get_y() {
    return this->y;
}

string hormiga::get_direccion_display() {
    if(this->direccion_display == arriba){
        return "^";
    }
    if(this->direccion_display == abajo){
        return "v";
    }    
    if(this->direccion_display == izquierda){
        return "<";
    }    
    if(this->direccion_display == derecha){
        return ">";
    }

}

hormiga::~hormiga() {
}

