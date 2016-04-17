/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaEnt.h
 *
 * Created on April 10, 2016, 12:53 PM
 */

#ifndef LISTAPREFERENCIA_H
#define LISTAPREFERENCIA_H
#include <string>
#include <iostream>
#include "nodoPila.h"  //La clase Lista usa la clase NodoPila.

using namespace std;

class ListaPreferencial {
private:
    int longitud; //Longitud de la lista
    string tipoArea;
    double precioAsiento;
    double montoTotal;
    NodoPila *cabeza; //Puntero al primero de la lista
public:
    ListaPreferencial(double precioAsiento); //Constructora
    int getLongitud(void) const; //Analizadora
    string getTipoArea(void) const; //Analizadora
    double getPrecioAsiento(void) const; //Analizadora
    NodoPila * getCabeza(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setTipoArea(string tipoArea); //Modificadora
    void setPrecio(double precio); //Modificadora
    void setCabeza(NodoPila *); //Modificadora
    bool escogerHilera(int); //Modificadora
    bool insertarPila(PilaAsiento*);
    bool pagarAsiento(int, int);
    bool liberarAsiento(int, int);
};

#endif /* LISTAPREFERENCIA_H */

