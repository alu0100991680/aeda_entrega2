#include <cstdlib>
#include <iostream>
#include "rejilla.h"

using namespace std;

int main(int argc, char** argv) {
    rejilla *r = new rejilla(10,10); 
    cout << r->get_rejilla_status();
    return 0;
}

