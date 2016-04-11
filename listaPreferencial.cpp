/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include "nodoPila.h"
#include <string>
#include "listaPreferencial.h"

ListaPreferencial::ListaPreferencial(double precio) { //Constructora
    longitud = 0;
    tipoArea = "Lista Preferencial";
    cabeza = NULL;
    precioAsiento = precio;
}

int ListaPreferencial::getLongitud(void) const { //Analizadora
    return longitud;
}

string ListaPreferencial::getTipoArea(void) const { //Analizadora
    return tipoArea;
}

NodoPila *ListaPreferencial::getCabeza()const {
    return this->cabeza;
}

void ListaPreferencial::setTipoArea(string ptipoArea){
    tipoArea = ptipoArea;
}

bool ListaPreferencial::escogerHilera(PilaAsiento ppila) //Modificadora
{

    return true;

}