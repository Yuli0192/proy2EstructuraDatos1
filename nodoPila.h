/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoPila.h
 *
 * Created on April 10, 2016, 9:27 PM
 */

#ifndef NODOPILA_H
#define NODOPILA_H

#include "pilaAsiento.h"

using namespace std;

class NodoPila {
private:
    PilaAsiento pila; //Elemento de la lista
    NodoPila *sig; //Siguiente elemento, es el puntero autoreferenciable
    NodoPila *ant;
public:
    NodoPila(PilaAsiento pila); //Constructora
    PilaAsiento getPila(void); //Analizadora
    void setPila(PilaAsiento pila); //Modificadora
    NodoPila * getSig(void); //Analizadora
    NodoPila * getAnt(void);
    void setSig(NodoPila *); //Modificadora
    void setAnt(NodoPila *);

};


#endif /* NODOPILA_H */

