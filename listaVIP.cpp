/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include <string>
#include "listaVIP.h"
#include "nodoAsiento.h"

ListaVIP::ListaVIP(double precio) { //Constructora
    longitud = 0;
    tipoArea = "Lista VIP";
    cabeza = NULL;
    precioAsiento = precio;
}

int ListaVIP::getLongitud(void) const { //Analizadora
    return longitud;
}

string ListaVIP::getTipoArea(void) const { //Analizadora
    return tipoArea;
}

NodoAsiento *ListaVIP::getCabeza()const {
    return this->cabeza;
}

void ListaVIP::setTipoArea(string ptipoArea){
    tipoArea = ptipoArea;
}

bool ListaVIP::escogerAsiento(int numAsiento, int estado) //Modificadora
{
    if(numAsiento > 0 && numAsiento <= 10){
        NodoAsiento *aux = cabeza;
        while(aux){
            if(aux->getAsiento().getNumAsiento() == numAsiento){
                aux->getAsiento().setEstado(estado);
                cout << "EXITO: La operación fue realizada satisfactoriamente!" << endl;
                return true;
            }
            aux = aux->getSig();
        }
    }
    cout << "ERROR: Ingrese un número de asiento válido..." << endl;
    return false;
}

bool ListaVIP::insertarAsiento(Asiento pasiento) {
    NodoAsiento * nuevo = new NodoAsiento(pasiento);
    if(nuevo == NULL){ //Verifica si hay memoria
        return false;
    }
    if(cabeza == NULL){
        cabeza = nuevo;
    }else{
        nuevo->setSig(cabeza);
        cabeza = nuevo;
    }
    longitud++;
    return true;
}
