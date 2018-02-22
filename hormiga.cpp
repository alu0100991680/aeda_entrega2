#include "hormiga.h"

hormiga::hormiga(int x, int y) {
    this->x = x;
    this->y = y;
    this->direccion_display = -1;
    this->rejilla = -1;
}

void hormiga::mover() {
}

int hormiga::get_x() {
    return 0;
}

int hormiga::get_y() {
    return 0;
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

