/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaGeneral.h
 *
 * Created on April 10, 2016, 10:35 PM
 */

#ifndef LISTAGENERAL_H
#define LISTAGENERAL_H
#include <iostream>
#include <string>
#include "nodoAsiento.h"  //La clase Lista usa la clase NodoAsiento.

using namespace std;

class ListaGeneral {
private:
    int longitud; //Longitud de la lista
    string tipoArea;
    double precioAsiento;
    double montoTotal;
    NodoAsiento *cabeza; //Puntero al primero de la lista
public:
    ListaGeneral(double precioAsiento); //Constructora
    int getLongitud(void) const; //Analizadora
    string getTipoArea(void) const; //Analizadora
    double getPrecioAsiento(void) const; //Analizadora
    NodoAsiento * getCabeza(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setTipoArea(string tipoArea); //Modificadora
    void setPrecio(double precio); //Modificadora
    void setCabeza(NodoAsiento *); //Modificadora
    bool insertarAsiento(Asiento asiento); //Modificadora
    bool pagarAsiento(int);
    bool liberarAsiento(int);
};



#endif /* LISTAGENERAL_H */

