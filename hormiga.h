#ifndef HORMIGA_H
#define HORMIGA_H

#include <string>
#include "rejilla.h"

using namespace std;

class hormiga {
public:
    //Métodos básicos
    hormiga(int x, int y, rejilla *r);
    //hormiga(const hormiga& orig);
    virtual ~hormiga();
    
    //Atrib
    int get_x();
    int get_y();
    rejilla *get_rejilla();
    char get_direccion_display();
    
    //Métodos internos
    void mover();
    
    //Extra
    enum direcciones { arriba=0, abajo=1, derecha=2, izquierda=3 };
private:
    int x;
    int y;
    int direccion_display;
    rejilla *r_asocida;
};

#endif /* HORMIGA_H */

