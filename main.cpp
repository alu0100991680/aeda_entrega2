#include <cstdlib>
#include <iostream>
#include "rejilla.h"
#include "hormiga.h"
#include "maquina.h"

using namespace std;

int main(int argc, char** argv) {

    rejilla *r = new rejilla(15,15);
    
    hormiga *a = new hormiga(2,7,r);
    hormiga *b = new hormiga(5,7,r);
    
    maquina *m = new maquina(r);
    m->add_hormiga(a);
    m->add_hormiga(b);
    
    m->iteracion();
    cout << m->estado();
    m->iteracion();
    cout << m->estado();
    m->iteracion();
    cout << m->estado();
    m->iteracion();
    cout << m->estado();
    m->iteracion();
    cout << m->estado();
    m->iteracion();
    cout << m->estado();
    m->iteracion();
    cout << m->estado();
    m->iteracion();
    cout << m->estado();
    m->iteracion();
    
    cout << m->estado();
    
    return 0;
}

