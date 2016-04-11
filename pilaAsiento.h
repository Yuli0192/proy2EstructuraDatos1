/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pilaAsiento.h
 *
 * Created on April 10, 2016, 8:53 PM
 */

#ifndef PILAASIENTO_H
#define PILAASIENTO_H
#include <iostream>
#include "nodoAsiento.h"  //La clase Lista usa la clase NodoAsiento.

using namespace std;

class PilaAsiento {
private:
    int longitud; //Longitud de la pila
    NodoAsiento *tope; //Puntero al primero de la pila
public:
    PilaAsiento(void); //Constructora
    int getLongitud(void) const; //Analizadora
    NodoAsiento * getTope(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setTope(NodoAsiento *); //Modificadora
    bool pushElemento(Asiento a);
    bool popElemento();
};   
#endif /* PILAASIENTO_H */

