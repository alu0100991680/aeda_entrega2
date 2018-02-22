#include "rejilla.h"

rejilla::rejilla(int dx, int dy) {
    this->dx = dx;
    this->dy = dy;

    // Redimensionamos la matriz
    this->c_rejilla.resize(dx);
    for (int i = 0; i < dx; ++i){
        this->c_rejilla[i].resize(dy);
    }
    
    //Seteamos por defecto los primeros valores
    for (int i = 0; i < dx; ++i){
        for (int j = 0; j < dy; ++j){
            // Default = 1 Blanco
            this->c_rejilla[i][j] = 1;
        }
    }
    
    //Test
    //this->c_rejilla[2][3] = 0;
}

string rejilla::get_rejilla_status(){
    string aux_ = "";
    for (int i = 0; i < this->dx; ++i){
        for (int j = 0; j < this->dy; ++j){
            if (this->c_rejilla[i][j]==0){
                aux_ += "X ";
            }
            if (this->c_rejilla[i][j]==1){
                aux_ += "  ";
            }
        }
        aux_ += "\r\n";
    }
    return aux_;
}


int rejilla::get_position_status(int x, int y){
    return this->c_rejilla[x][y];
}

void rejilla::set_position_status(int x, int y, int value_color){
    this->c_rejilla[x][y] = value_color;
}

rejilla::rejilla(const rejilla& orig) {
}

rejilla::~rejilla() {
}

