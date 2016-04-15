/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "nodoPila.h"

using namespace std;


NodoPila::NodoPila(PilaAsiento *ppilaAsiento) { //Constructora
    pila = ppilaAsiento;
    sig = NULL;
    ant = NULL;
}

void NodoPila::setPila(PilaAsiento *ppilaAsiento) //Modificadora
{
    pila = ppilaAsiento;
}

PilaAsiento *NodoPila::getPila(void) //Analizadora
{
    return pila;
}

NodoPila * NodoPila::getSig(void) //Analizadora
{
    return sig;
}

void NodoPila::setSig(NodoPila * psig) //Modificadora
{
    sig = psig;
}

NodoPila * NodoPila::getAnt(void) //Analizadora
{
    return ant;
}

void NodoPila::setAnt(NodoPila * pant) //Modificadora
{
    ant = pant;
}