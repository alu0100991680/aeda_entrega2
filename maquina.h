#ifndef MAQUINA_H
#define MAQUINA_H

#include "hormiga.h"

class maquina {
public:
    maquina();
    maquina(const maquina& orig);
    virtual ~maquina();
    
    void add_hormiga(hormiga *h);
    
private:
    vector<hormiga> hormigas;
};

#endif /* MAQUINA_H */

