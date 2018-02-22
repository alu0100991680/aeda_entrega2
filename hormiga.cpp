#include "hormiga.h"

hormiga::hormiga() {
}

hormiga::hormiga(const hormiga& orig) {
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

