/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoSolicitud.h
 *
 * Created on April 10, 2016, 11:53 PM
 */

#ifndef NODOSOLICITUD_H
#define NODOSOLICITUD_H
#include <string>
using namespace std;

class NodoSolicitud {
private:
    int numero; //Elemento de la lista
    string tipoArea;
    NodoSolicitud *sig; //Siguiente elemento, es el puntero autoreferenciable
    
public:
    NodoSolicitud(string tipoArea); //Constructora
    string getTipoArea(void); //Analizadora
    void setTipoArea(string tipoArea); //Modificadora
    NodoSolicitud * getSig(void); //Analizadora
    void setSig(NodoSolicitud *); //Modificadora
};


#endif /* NODOSOLICITUD_H */

