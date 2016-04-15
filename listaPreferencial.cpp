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

void ListaPreferencial::setTipoArea(string ptipoArea){
    tipoArea = ptipoArea;
}

bool ListaPreferencial::escogerHilera(int numPila) //Modificadora
{
    if(numPila > 0 && numPila <= 10){
        NodoPila *aux = cabeza;
        while(aux){
            if(aux->getPila()->getNumPila() == numPila){
                Asiento a = Asiento(0, 1); //el numero de asiento no se ocupa en la pila xq no se puede escoger
                if(aux->getPila()->pushElemento(a)){
                    cout << "EXITO: La operación fue realizada satisfactoriamente!" << endl;
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