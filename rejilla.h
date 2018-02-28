#ifndef REJILLA_H
#define REJILLA_H

#include <string>
#include <vector>
//#include "hormiga.h"

using namespace std;

class rejilla {
public:
    //Métodos básicos
    //rejilla(int **p_m, int dx, int dy);
    rejilla(int dx, int dy);
    rejilla(const rejilla& orig);
    virtual ~rejilla();
    
    //Métodos internos
    //void add_hormiga(hormiga &h);
    
    
    //Atrib
    int get_size_x();
    int get_size_y();
    string get_rejilla_status();
    char get_position_status(int x, int y);
    void set_position_status(int x, int y, char value_color);
    //int cantidad_hormigas();
    //hormiga& ver_hormiga(int pos);
    
    //Extra
    enum colores {negro=0, blanco=1};
private:
    vector<vector<char> > c_rejilla;
    //vector<hormiga> hormigas;
    int dx;
    int dy;
};

#endif /* REJILLA_H */

