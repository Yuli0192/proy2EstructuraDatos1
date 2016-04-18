/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include <string>
#include "listaGeneral.h"
#include "nodoAsiento.h"

ListaGeneral::ListaGeneral(double precio) { //Constructora
    longitud = 0;
    tipoArea = "Lista General";
    cabeza = NULL;
    precioAsiento = precio;
    montoTotal = 0;
}

int ListaGeneral::getLongitud(void) const { //Analizadora
    return longitud;
}

string ListaGeneral::getTipoArea(void) const { //Analizadora
    return tipoArea;
}

NodoAsiento *ListaGeneral::getCabeza()const {
    return this->cabeza;
}

double ListaGeneral::getMontoTotal(void) const { //Analizadora
    return montoTotal;
}

void ListaGeneral::setTipoArea(string ptipoArea){
    tipoArea = ptipoArea;
}

bool ListaGeneral::insertarAsiento(Asiento pasiento) //Modificadora
{
    if(longitud == 50){
        cout << "INFO: Ya no quedan asientos disponibles!" << endl;
        return false;
    }
    NodoAsiento * nuevo = new NodoAsiento(pasiento);
    if(nuevo == NULL){
        return false;
    }
    if(cabeza == NULL){
        cabeza = nuevo;
        longitud++;
        cout << "EXITO: Ha reservado el asiento #" << longitud << endl;
        return true;
    }else{
        NodoAsiento *aux = cabeza;
        while(aux){
            if(!aux->getSig()){
                aux->setSig(nuevo);
                nuevo->setAnt(aux);
                longitud++;
                cout << "EXITO: Ha reservado el asiento #" << longitud << endl;
                return true;
            }
            aux = aux->getSig();
        }
    }
}

bool ListaGeneral::pagarAsiento(int numAsiento){
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

bool ListaGeneral::liberarAsiento(int numAsiento){
    if(numAsiento > 0 && numAsiento <= 50){
        NodoAsiento *aux = cabeza;
        while(aux){
            if(aux->getAsiento().getNumAsiento() == numAsiento){
                int estadoActual = aux->getAsiento().getEstado();
                if(estadoActual == 1 || estadoActual == 2){
                    if(numAsiento == 1){
                        cabeza->setSig(aux->getSig());
                    }else{
                        aux->getAnt()->setSig(aux->getSig());
                    }
                    aux = NULL;
                    delete aux;
                    if(estadoActual == 2){
                        montoTotal = montoTotal - precioAsiento;
                    }
                    longitud--;
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

int ListaGeneral::contarAsientosVendidos(void){
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