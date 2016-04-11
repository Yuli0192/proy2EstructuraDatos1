/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   persona.h
 *
 * Created on April 10, 2016, 11:12 PM
 */

#ifndef NODOESPERA_H
#define NODOESPERA_H

using namespace std;

class NodoEspera {
private:
    int numero; //Elemento de la lista
    NodoEspera *sig; //Siguiente elemento, es el puntero autoreferenciable
    
public:
    NodoEspera(int x=0); //Constructora
    int getNumero(void); //Analizadora
    void setNumero(int numero); //Modificadora
    NodoEspera * getSig(void); //Analizadora
    void setSig(NodoEspera *); //Modificadora
};

#endif /* NODOESPERA_H */

