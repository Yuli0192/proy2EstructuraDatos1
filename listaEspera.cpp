/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "listaEspera.h"
#include "nodoEspera.h"

ListaEspera::ListaEspera() { //Constructora
    frente = NULL;
    final = NULL;
    longitud = 0;
}

bool ListaEspera::insertarElemento(int x){
    NodoEspera * nuevo = new NodoEspera(x);
    if(nuevo == NULL){
        return false;
    }
    if(frente == NULL){
        frente = nuevo;
        final = nuevo;
    }else{
        final->setSig(nuevo);
        final = nuevo;
    }
    longitud++;
    return true;
}


int ListaEspera::getLongitud(void) const { //Analizadora
    return longitud;
}

bool ListaEspera::eliminarElemento(int x){
    return true;
}


