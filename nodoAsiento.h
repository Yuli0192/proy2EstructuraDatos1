/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoVIP.h
 *
 * Created on April 10, 2016, 12:54 PM
 */

#ifndef NODOASIENTO_H
#define NODOASIENTO_H

#include "asiento.h"

using namespace std;

class NodoAsiento {
private:
    Asiento asiento; //Elemento de la lista
    NodoAsiento *sig; //Siguiente elemento, es el puntero autoreferenciable
    NodoAsiento *ant;
public:
    NodoAsiento(Asiento asiento); //Constructora
    Asiento getAsiento(void); //Analizadora
    void setAsiento(Asiento asiento); //Modificadora
    NodoAsiento * getSig(void); //Analizadora
    NodoAsiento * getAnt(void);
    void setSig(NodoAsiento *); //Modificadora
    void setAnt(NodoAsiento *); //Modificadora
};


#endif /* NODOASIENTO_H */

