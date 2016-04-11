/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaSolicitud.h
 *
 * Created on April 11, 2016, 11:08 AM
 */

#ifndef LISTASOLICITUD_H
#define LISTASOLICITUD_H
#include <string>
#include <iostream>
#include "nodoSolicitud.h"  //La clase Lista usa la clase NodoPila.

using namespace std;

class ListaSolicitud {
private:
    int longitud; //Longitud de la lista
    NodoSolicitud *cabeza; //Puntero al primero de la lista
public:
    ListaSolicitud(void); //Constructora
    int getLongitud(void) const; //Analizadora
    NodoSolicitud * getCabeza(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setCabeza(NodoSolicitud *); //Modificadora
    bool insertarSolicitud(Asiento pasiento); //Modificadora
};


#endif /* LISTASOLICITUD_H */

