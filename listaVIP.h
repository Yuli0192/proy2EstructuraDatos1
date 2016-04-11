/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaVIP.h
 * 
 * Created on April 10, 2016, 12:54 PM
 */

#ifndef LISTAVIP_H
#define LISTAVIP_H
#include <iostream>
#include <string>
#include "nodoAsiento.h"  //La clase Lista usa la clase NodoAsiento.

using namespace std;

class ListaVIP {
private:
    int longitud; //Longitud de la lista
    string tipoArea;
    double precioAsiento;
    NodoAsiento *cabeza; //Puntero al primero de la lista
public:
    ListaVIP(double precioAsiento); //Constructora
    int getLongitud(void) const; //Analizadora
    string getTipoArea(void) const; //Analizadora
    double getPrecioAsiento(void) const; //Analizadora
    NodoAsiento * getCabeza(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setTipoArea(string tipoArea); //Modificadora
    void setPrecio(double precio); //Modificadora
    void setCabeza(NodoAsiento *); //Modificadora
    bool escogerAsiento(Asiento asiento); //Modificadora
};

#endif /* LISTAVIP_H */

