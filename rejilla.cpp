#include "rejilla.h"

/*rejilla::rejilla(int **p_m, int dx, int dy) {
    //int **array = new int[ 2 ];
    *p_m = new int[dx];

    for(int i=0; i<dy; ++i ){
        //array[i] = new int[dx];
        p_m[i] = new int[dx];
    }
}*/

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
            // Default = 0
            this->c_rejilla[i][j] = 0;
        }
    }
}

string rejilla::get_rejilla_status(){
    string aux_ = "";
    for (int i = 0; i < this->dx; ++i){
        for (int j = 0; j < this->dy; ++j){
            if (this->c_rejilla[i][j]==0){
                aux_ += "0 ";
            }
            if (this->c_rejilla[i][j]==1){
                aux_ += "1 ";
            }
        }
        aux_ += "\r\n";
    }
    return aux_;
}

rejilla::rejilla(const rejilla& orig) {
}

rejilla::~rejilla() {
}

