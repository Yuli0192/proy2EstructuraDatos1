/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "nodoSolicitud.h"
#include "nodoAsiento.h"

using namespace std;


NodoSolicitud::NodoSolicitud(string ptipoArea, NodoAsiento* pasientoReservado) { //Constructora
    asientoReservado = pasientoReservado;
    tipoArea = ptipoArea;
    sig = NULL;
}

void NodoSolicitud::setAsientoReservado(NodoAsiento* pasiento) //Modificadora
{
    asientoReservado = pasiento;
}

NodoAsiento* NodoSolicitud::getAsientoReservado(void) //Analizadora
{
    return asientoReservado;
}

string NodoSolicitud::getTipoArea(void) { //Analizadora
    return tipoArea;
}

void NodoSolicitud::setTipoArea(string ptipoArea){
    tipoArea = ptipoArea;
}

NodoSolicitud * NodoSolicitud::getSig(void) //Analizadora
{
    return sig;
}

void NodoSolicitud::setSig(NodoSolicitud * psig) //Modificadora
{
    sig = psig;
}
