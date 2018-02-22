#include <cstdlib>
#include <iostream>
#include "rejilla.h"

using namespace std;

int main(int argc, char** argv) {
    rejilla *r = new rejilla(10,5);
    r->set_position_status(2, 3, 0);
    cout << r->get_rejilla_status();
    
    return 0;
}

