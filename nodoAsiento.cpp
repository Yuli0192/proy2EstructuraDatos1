/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include "nodoAsiento.h"

using namespace std;


NodoAsiento::NodoAsiento(Asiento pasiento) { //Constructora
    asiento = pasiento;
    sig = NULL;
    ant = NULL;
}

void NodoAsiento::setAsiento(Asiento pasiento) //Modificadora
{
    asiento = pasiento;
}

Asiento NodoAsiento::getAsiento(void) //Analizadora
{
    return asiento;
}

NodoAsiento * NodoAsiento::getSig(void) //Analizadora
{
    return sig;
}

void NodoAsiento::setSig(NodoAsiento * psig) //Modificadora
{
    sig = psig;
}

NodoAsiento * NodoAsiento::getAnt(void) //Analizadora
{
    return ant;
}

void NodoAsiento::setAnt(NodoAsiento * pant) //Modificadora
{
    ant = pant;
}