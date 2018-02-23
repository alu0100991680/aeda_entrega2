#include <cstdlib>
#include <iostream>
#include "rejilla.h"
#include "hormiga.h"
#include "maquina.h"

using namespace std;

int main(int argc, char** argv) {

    rejilla *r = new rejilla(10,10);
    r->set_position_status(2, 3, 0);

    hormiga *a = new hormiga(2,3,r);
    a->mover();

    maquina *m = new maquina();
    m->add_hormiga(a);
    
    return 0;
}

