/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "nodoPila.h"
#include "listaPreferencial.h"

ListaPreferencial::ListaPreferencial(double precio) { //Constructora
    longitud = 0;
    cabeza = NULL;
    precioAsiento = precio;
}

int ListaPreferencial::getLongitud(void) const { //Analizadora
    return longitud;
}

NodoPila *ListaPreferencial::getCabeza()const {
    return this->cabeza;
}

bool ListaPreferencial::escogerHilera(PilaAsiento ppila) //Modificadora
{

    return true;

}