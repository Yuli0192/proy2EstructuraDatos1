/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "listaGeneral.h"
#include "nodoAsiento.h"

ListaGeneral::ListaGeneral(double precio) { //Constructora
    longitud = 0;
    cabeza = NULL;
    precioAsiento = precio;
}

int ListaGeneral::getLongitud(void) const { //Analizadora
    return longitud;
}

NodoAsiento *ListaGeneral::getCabeza()const {
    return this->cabeza;
}

bool ListaGeneral::insertarAsiento(Asiento pasiento) //Modificadora
{

    return true;

}