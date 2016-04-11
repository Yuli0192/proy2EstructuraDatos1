/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stddef.h>

#include "nodoEspera.h"

using namespace std;


NodoEspera::NodoEspera(int x) { //Constructora
    numero = x;
    sig = NULL;
}

void NodoEspera::setNumero(int pnumero) //Modificadora
{
    numero = pnumero;
}

int NodoEspera::getNumero(void) //Analizadora
{
    return numero;
}

NodoEspera * NodoEspera::getSig(void) //Analizadora
{
    return sig;
}

void NodoEspera::setSig(NodoEspera * psig) //Modificadora
{
    sig = psig;
}