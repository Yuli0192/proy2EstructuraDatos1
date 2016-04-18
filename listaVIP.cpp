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
    montoTotal = 0;
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

double ListaVIP::getMontoTotal(void) const { //Analizadora
    return montoTotal;
}

void ListaVIP::setTipoArea(string ptipoArea){
    tipoArea = ptipoArea;
}

bool ListaVIP::escogerAsiento(int numAsiento) //Modificadora
{
    if(numAsiento > 0 && numAsiento <= 10){
        NodoAsiento *aux = cabeza;
        while(aux){
            if(aux->getAsiento().getNumAsiento() == numAsiento){
                if(aux->getAsiento().getEstado() == 0){
                    Asiento asiento = Asiento(aux->getAsiento().getNumAsiento(), 1);
                    aux->setAsiento(asiento);
                    cout << "EXITO: La operación fue realizada satisfactoriamente!" << endl;
                    return true;
                }
                cout << "INFO: Este asiento ya ha sido reservado..." << endl;
                return false;
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

bool ListaVIP::pagarAsiento(int numAsiento){
    if(numAsiento > 0 && numAsiento <= 10){
        NodoAsiento *aux = cabeza;
        while(aux){
            if(aux->getAsiento().getNumAsiento() == numAsiento){
                if(aux->getAsiento().getEstado() == 1){
                    Asiento asiento = Asiento(aux->getAsiento().getNumAsiento(), 2);
                    aux->setAsiento(asiento);
                    montoTotal = montoTotal + precioAsiento;
                    cout << "EXITO: La operación fue realizada satisfactoriamente!" << endl;
                    return true;
                }
                cout << "INFO: Ud no tiene reservación para este asiento..." << endl;
                return false;
            }
            aux = aux->getSig();
        }
    }
    cout << "ERROR: Ingrese un número de asiento válido..." << endl;
    return false;
}

bool ListaVIP::liberarAsiento(int numAsiento){
    if(numAsiento > 0 && numAsiento <= 10){
        NodoAsiento *aux = cabeza;
        while(aux){
            if(aux->getAsiento().getNumAsiento() == numAsiento){
                int estadoActual = aux->getAsiento().getEstado();
                if(estadoActual == 1 || estadoActual == 2){
                    Asiento asiento = Asiento(aux->getAsiento().getNumAsiento(), 0);
                    aux->setAsiento(asiento);
                    if(estadoActual == 2){
                        montoTotal = montoTotal - precioAsiento;
                    }
                    cout << "EXITO: La operación fue realizada satisfactoriamente!" << endl;
                    return true;
                }
                cout << "INFO: Ud no tiene reservación para este asiento..." << endl;
                return false;
            }
            aux = aux->getSig();
        }
    }
    cout << "ERROR: Ingrese un número de asiento válido..." << endl;
    return false;
}

int ListaVIP::contarAsientosVendidos(void){
    int numAsientosVendidos = 0;

    NodoAsiento *aux = cabeza;
    while (aux) {
        if (aux->getAsiento().getEstado() == 2) {
            numAsientosVendidos++;
        }
        aux = aux->getSig();
    }
    
    return numAsientosVendidos;
}