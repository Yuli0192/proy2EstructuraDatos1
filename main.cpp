/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 *
 * Created on April 10, 2016, 12:54 PM
 */

#include <iostream>
#include "listaPreferencial.h"
#include "listaVIP.h"
#include "asiento.h"
using namespace std;

void menuPrincipal(void);
void selecZona(void);
void mostrarTeatro();

int main(void) {
    //Crear la lista de asientos VIP
    ListaVIP *zonaVIP = new ListaVIP(50000);
    for(int i=1; i <= 10; i ++){
        Asiento asiento = Asiento(i, 0); //0 libre, 1 reservado, 2 ocupado
        zonaVIP->insertarAsiento(asiento);
    }
    int opcion;
    bool continuar = true;
    cout << "BOLETARÍA VIRTUAL" << endl;
    while(continuar){
        menuPrincipal();
        cin >> opcion;
        if(opcion == 1){
            int zona;
            selecZona();
            cin >> zona;
            if(zona == 1){
                int numAsiento;
                mostrarTeatro(); 
                cin >> numAsiento;
                zonaVIP->escogerAsiento(numAsiento, 0);
                return 1;
            }
        }
    }
}

void menuPrincipal(){
    cout << endl;
    cout << "1. Realizar reservación" << endl;
    cout << "2. Pagar reservación" << endl;
    cout << "3. Liberar reservación" << endl;
    cout << "Seleccione una opción: ";
}

void selecZona(){
    cout << endl;
    cout << "1. Zona VIP" << endl;
    cout << "2. Zona Preferencial" << endl;
    cout << "3. Zona General" << endl;
    cout << "Digite el número de zona: ";
}

void mostrarTeatro(){
    cout << endl;
    cout << " ________________________________________ " << endl;
    cout << "|               Escenario                |" << endl;
    cout << "|========================================|" << endl;
    cout << "|----------------------------------------|" << endl;
    cout << "| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |" << " VIP: ₡50.000" << endl;
    cout << "|----------------------------------------|" << endl;
    cout << "| 1. |1|2|3|4|5|          6. |1|2|3|4|5| |" << endl;
    cout << "| 2. |1|2|3|4|5|          7. |1|2|3|4|5| |" << endl;
    cout << "| 3. |1|2|3|4|5|          8. |1|2|3|4|5| |" << " Preferencial: ₡35.000" << endl;
    cout << "| 4. |1|2|3|4|5|          9. |1|2|3|4|5| |" << endl;
    cout << "| 5. |1|2|3|4|5|         10. |1|2|3|4|5| |" << endl;
    cout << "|----------------------------------------|" << endl;
    cout << "| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |" << endl;
    cout << "| 20| 19| 18| 17| 16| 15| 14| 13| 12| 11 |" << endl;
    cout << "| 21| 22| 23| 24| 25| 26| 27| 28| 29| 30 |" << " General: ₡20.000" << endl;
    cout << "| 40| 39| 38| 37| 36| 35| 34| 33| 32| 31 |" << endl;
    cout << "| 41| 42| 43| 44| 45| 46| 47| 48| 49| 50 |" << endl;
    cout << "|________________________________________|" << endl;
    cout << endl;
    cout << "Digite el número de asiento: ";
}