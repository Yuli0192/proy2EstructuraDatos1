/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   asiento.h
 *
 * Created on April 10, 2016, 12:53 PM
 */

#ifndef ASIENTO_H
#define ASIENTO_H

using namespace std;

class Asiento {
private:
    int numAsiento;
    int estado;
public:
    Asiento();
    Asiento(int numAsiento, int estado); //Constructora
    int getNumAsiento(void); //Analizadora
    void setNumAsiento(int numAsiento); //Modificadora
    int getEstado(void); //Analizadora
    void setEstado(int estado); //Modificadora
};



#endif /* ASIENTO_H */

