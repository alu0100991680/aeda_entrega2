#include "maquina.h"

maquina::maquina() {
}

maquina::maquina(const maquina& orig) {
}

maquina::~maquina() {
}

void maquina::add_hormiga(hormiga* h){
    this->hormigas.push_back(*h);
}
