/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaEspera.h
 *
 * Created on April 10, 2016, 11:24 PM
 */

#ifndef LISTAESPERA_H
#define LISTAESPERA_H

#include <iostream>

#include "nodoEspera.h"  //La clase Lista usa la clase NodoEspera.

using namespace std;

class ListaEspera {
private:
    int longitud; //Longitud de la lista
    NodoEspera * frente;
    NodoEspera * final;
public:
    ListaEspera(); //Constructora
    int getLongitud(void) const; //Analizadora
    bool insertarElemento(int x);
    void setLongitud(int l); //Modificadora
    bool eliminarElemento(int x); //Modificadora
};

#endif /* LISTAESPERA_H */

