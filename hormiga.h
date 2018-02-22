#ifndef HORMIGA_H
#define HORMIGA_H

#include <string>

using namespace std;

class hormiga {
public:
    //Métodos básicos
    hormiga(int x, int y);
    //hormiga(const hormiga& orig);
    virtual ~hormiga();
    
    //Atrib
    int get_x();
    int get_y();
    string get_direccion_display();
    
    //Métodos internos
    void mover();
    
    //Extra
    enum direcciones { arriba=0, abajo=1, derecha=2, izquierda=3 };
private:
    int x;
    int y;
    int direccion_display;
    int rejilla; // una regilla pertenece a muchas  hormigas  1.reg-N.hor
};

#endif /* HORMIGA_H */

