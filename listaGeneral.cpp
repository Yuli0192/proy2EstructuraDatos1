/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include <string>
#include "listaGeneral.h"
#include "nodoAsiento.h"

ListaGeneral::ListaGeneral(double precio) { //Constructora
    longitud = 0;
    tipoArea = "Lista General";
    cabeza = NULL;
    precioAsiento = precio;
}

int ListaGeneral::getLongitud(void) const { //Analizadora
    return longitud;
}

string ListaGeneral::getTipoArea(void) const { //Analizadora
    return tipoArea;
}

NodoAsiento *ListaGeneral::getCabeza()const {
    return this->cabeza;
}

void ListaGeneral::setTipoArea(string ptipoArea){
    tipoArea = ptipoArea;
}

bool ListaGeneral::insertarAsiento(Asiento pasiento) //Modificadora
{

    return true;

}