/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "asiento.h"

Asiento::Asiento(){
    
}
Asiento::Asiento(int numAsiento, int estado) { //Constructora
    
    setNumAsiento(numAsiento);
    setEstado(estado);
}

int Asiento::getNumAsiento(void){ //Analizadora
    return numAsiento;
}
void Asiento::setNumAsiento(int numeroAsiento){ //Modificadora
    numAsiento = numeroAsiento;
}
int Asiento::getEstado(void){ //Analizadora
    return estado;
}
void Asiento::setEstado(int pestado){ //Modificadora
    estado = pestado;
}
