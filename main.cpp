#include <cstdlib>
#include <iostream>
#include "rejilla.h"
#include "hormiga.h"

using namespace std;

int main(int argc, char** argv) {
    
    hormiga *a = new hormiga(1,2);
    
    rejilla *r = new rejilla(10,5);
    r->set_position_status(2, 3, 0);
    cout << r->get_rejilla_status() << endl;
    
    r->add_hormiga(*a);
    cout << r->cantidad_hormigas() << endl;
    hormiga a2 = r->ver_hormiga(0);
    
    return 0;
}

