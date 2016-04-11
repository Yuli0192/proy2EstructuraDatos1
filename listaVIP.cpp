/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include "listaVIP.h"
#include "nodoAsiento.h"

ListaVIP::ListaVIP(double precio) { //Constructora
    longitud = 0;
    cabeza = NULL;
    precioAsiento = precio;
}

int ListaVIP::getLongitud(void) const { //Analizadora
    return longitud;
}

NodoAsiento *ListaVIP::getCabeza()const {
    return this->cabeza;
}

bool ListaVIP::escogerAsiento(Asiento pasiento) //Modificadora
{

    return true;

}

