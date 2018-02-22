#ifndef REJILLA_H
#define REJILLA_H

#include <string>
#include <vector>

using namespace std;

class rejilla {
public:
    //Métodos básicos
    //rejilla(int **p_m, int dx, int dy);
    rejilla(int dx, int dy);
    rejilla(const rejilla& orig);
    virtual ~rejilla();
    
    //Métodos internos
    
    
    //Atrib
    string get_rejilla_status();
    
    //Extra
    enum colores {negro=0, blanco=1};
private:
    vector<vector<int> > c_rejilla;
    int dx;
    int dy;
};

#endif /* REJILLA_H */

