/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "pilaAsiento.h"

using namespace std;

PilaAsiento::PilaAsiento(int pnumPila) { //Constructora
    numPila = pnumPila;
    longitud = 0;
    tope = NULL;
}

int PilaAsiento::getLongitud(void) const { //Analizadora
    return longitud;
}

bool PilaAsiento::pushElemento(Asiento pelem) { //Modificadora
    if(longitud == 10){
        return false;
    }
    NodoAsiento * nuevo;
    nuevo = new NodoAsiento(pelem);

    if (nuevo == NULL) {//Para verificar que exista memoria
        return false;
    } else {
        if (this->tope == NULL) {//Si la cabeza es igual a null
            tope = nuevo;
        } else {
            nuevo->setSig(tope);
            tope = nuevo;
        }
        longitud++;

        return true;
    }
}

NodoAsiento *PilaAsiento::getTope()const {
    return this->tope;
}

bool PilaAsiento::popElemento() {
    NodoAsiento *aux;
    if (!(this->tope == NULL)) {
        aux = tope;
//        cout<< tope->getAsiento()<<endl;
        tope = tope->getSig();
        longitud--;
        
        delete aux;
        return true;
    } else {
        return false;
    }
}

int PilaAsiento::getNumPila(){
    return numPila;
}

