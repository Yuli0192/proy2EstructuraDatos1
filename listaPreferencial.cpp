/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include "nodoPila.h"
#include <string>
#include "listaPreferencial.h"

ListaPreferencial::ListaPreferencial(double precio) { //Constructora
    longitud = 0;
    tipoArea = "Lista Preferencial";
    cabeza = NULL;
    precioAsiento = precio;
    montoTotal = 0;
}

int ListaPreferencial::getLongitud(void) const { //Analizadora
    return longitud;
}

string ListaPreferencial::getTipoArea(void) const { //Analizadora
    return tipoArea;
}

NodoPila *ListaPreferencial::getCabeza()const {
    return this->cabeza;
}

double ListaPreferencial::getMontoTotal(void) const { //Analizadora
    return montoTotal;
}

void ListaPreferencial::setTipoArea(string ptipoArea){
    tipoArea = ptipoArea;
}

bool ListaPreferencial::escogerHilera(int numPila) //Modificadora
{
    if(numPila > 0 && numPila <= 10){
        NodoPila *aux = cabeza;
        while(aux){
            if(aux->getPila()->getNumPila() == numPila){
                int numAsiento = aux->getPila()->getLongitud() + 1;
                Asiento a = Asiento(numAsiento, 1);
                if(aux->getPila()->pushElemento(a)){
                    cout << "EXITO: Ha reservado el asiento #" << numAsiento << endl;
                    return true;
                }
                cout << "INFO: Ya no quedan asientos para esta fila..." << endl;
                return false;
            }
            aux = aux->getSig();
        }
    }
    cout << "ERROR: Ingrese un número de fila válido..." << endl;
    return false;
}

bool ListaPreferencial::insertarPila(PilaAsiento *ppila){
    NodoPila *nuevo = new NodoPila(ppila);
    if(nuevo == NULL){
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

bool ListaPreferencial::pagarAsiento(int numPila, int numAsiento){
    if((numPila > 0 && numPila <= 10) && (numAsiento > 0 && numAsiento <= 10)){
        NodoPila *aux = cabeza;
        while(aux){
            if(aux->getPila()->getNumPila() == numPila){ //obtengo la fila indicada  
                PilaAsiento *pilaAux = aux->getPila();
                PilaAsiento *elemsSacados;
                while(pilaAux->getLongitud() > 0){
                    if(pilaAux->getTope()->getAsiento().getNumAsiento() == numAsiento){
                        Asiento a = Asiento(numAsiento, 2);
                        pilaAux->getTope()->setAsiento(a);
                        while(elemsSacados->getLongitud() > 0){ //vuelvo a meter los elementos que habia sacado
                            Asiento b = elemsSacados->getTope()->getAsiento();
                            pilaAux->pushElemento(b);
                            elemsSacados->popElemento();
                        }
                        montoTotal = montoTotal + precioAsiento;
                        cout << "EXITO: La operación se realizó satisfactoriamente!" << endl;
                        return true;
                    }
                    //guardo en una pila temporal los elementos que voy sacando
                    elemsSacados->pushElemento(pilaAux->getTope()->getAsiento());
                    pilaAux->popElemento();
                }
                cout << "INFO: Ud no tiene reservación para este asiento...";
                return false;
            }
            aux = aux->getSig();
        }
    }
    cout << "ERROR: Ingrese un número de fila o asiento válido...";
}

bool ListaPreferencial::liberarAsiento(int numPila, int numAsiento){
    if((numPila > 0 && numPila <= 10) && (numAsiento > 0 && numAsiento <= 10)){
        NodoPila *aux = cabeza;
        while(aux){
            if(aux->getPila()->getNumPila() == numPila){ 
                PilaAsiento *pilaAux = aux->getPila();
                PilaAsiento *elemsSacados;
                while(pilaAux->getLongitud() > 0){
                    if(pilaAux->getTope()->getAsiento().getNumAsiento() == numAsiento){
                        pilaAux->popElemento();
                        while(elemsSacados->getLongitud() > 0){
                            Asiento b = elemsSacados->getTope()->getAsiento();
                            pilaAux->pushElemento(b);
                            elemsSacados->popElemento();
                        }
                        montoTotal = montoTotal - precioAsiento;
                        cout << "EXITO: La operación se realizó satisfactoriamente!" << endl;
                        return true;
                    }
                    elemsSacados->pushElemento(pilaAux->getTope()->getAsiento());
                    pilaAux->popElemento();
                }
                cout << "INFO: Ud no tiene reservación para este asiento...";
                return false;
            }
            aux = aux->getSig();
        }
    }
    cout << "ERROR: Ingrese un número de fila o asiento válido...";
}

int ListaPreferencial::contarAsientosVendidos(void){
    int numAsientosVendidos = 0;

    NodoPila *aux = cabeza;
    while (aux) {
        PilaAsiento *pilaAux = aux->getPila();
        if (pilaAux->getTope()->getAsiento().getEstado() == 2) {
            numAsientosVendidos++;
        }
        aux = aux->getSig();
    }
    
    return numAsientosVendidos;
}