/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include <string>
#include "listaVIP.h"
#include "nodoAsiento.h"
#include "nodoSolicitud.h"
#include "listaSolicitud.h"

ListaSolicitud::ListaSolicitud() { //Constructora
    longitud = 0;
    cabeza = NULL;
}

int ListaSolicitud::getLongitud(void) const { //Analizadora
    return longitud;
}

NodoSolicitud *ListaSolicitud::getCabeza()const {
    return this->cabeza;
}

bool ListaSolicitud::insertarSolicitud(Asiento pasiento) //Modificadora
{

    return true;

}


