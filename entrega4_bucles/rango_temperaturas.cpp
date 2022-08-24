/**
  * @file rango_temperaturas.cpp
  * @brief Calcula el rango de temperaturas (mínimo, máximo, lectura anticipada, centinela)
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  * Escriba un programa que lee una secuencia de valores de temperatura hasta que se
  * introduce una temperatura menor que el cero absoluto (-273,15 grados centígrados).
  *
  * El programa debe escribir como resultado el intervalo mínimo donde se sitúan el
  * conjunto de temperaturas.
  *
  * Por ejemplo, si se introducen los siguientes valores:
  *      2.5 3 6 7.1 1 -300
  * El programa deberá escribir: [1,7.1]
  *
  * Si se introducen los valores:
  *      -5 -4 -10 -2 -300
  * El programa deberá escribir: [-10,-2]
  *
  * Si se introduce:
  *      -300
  * El programa deberá escribir: No hay datos
  *
  */
#include <iostream>

using namespace std;

int main(){

    double temperatura;
    double minimo;
    double maximo;
    int contador = 0;

    cout << "Introduzca una serie de temperaturas: " << endl;
    cin >> temperatura;

    while(temperatura >= -273.15){

        cin >> temperatura;

        if(minimo > temperatura && temperatura > -273.15){
            minimo = temperatura;
        } else {
            if(temperatura >-273.15 && maximo > -273.15){
                maximo = temperatura;
            }
        }
        contador++;
    }

    if(contador == 0){
        cout << "No hay datos" << endl;
    } else {
        cout << "[" << maximo << "," << minimo << "]" << endl;
        }
}

