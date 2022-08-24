/**
  * @file maxima_variacion.cpp
  * @brief Programa para calcular el máximo y mínimo incremento
  *
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Mes-2020
  *
  * Escriba un programa que lee una secuencia de valores de temperatura hasta que
  * se introduce una temperatura menor que el cero absoluto (-273.15 grados).
  *
  * El programa debe escribir como resultado el mayor incremento y el mayor
  * decremento de temperatura. Para ello, deberá calcular el máximo y el mínimo
  * de las diferencias entre cada valor y el siguiente. Algunos ejemplos
  * de ejecución son:
  *
  *     Introduzca temperaturas: 2.5 3 6 7.1 1 -300
  *     El máximo incremento es: 3
  *     El máximo decremento es: 6.1
  *
  *     Introduzca temperaturas: 1 2 3 4 5 -300
  *     El máximo incremento es: 1
  *     El máximo decremento es: no hay decrementos
  *
  *     Introduzca temperaturas: 1 -300
  *     El máximo incremento es: no hay incrementos
  *     El máximo decremento es: no hay decrementos
  *
  *     Introduzca temperaturas: -300
  *     No hay datos.
  */

#include <iostream>
using namespace std;

int main(){

    double incremento, temperaturas, temperaturas1, decremento, max_incremento, max_decremento;
    max_incremento = 0;
    max_decremento = 0;

    cout << "Introduzca temperaturas" << endl;

    cin >> temperaturas;

    temperaturas1 = temperaturas;

        while(temperaturas1 > (-273.15) && temperaturas > (-273.15)){

            temperaturas1 = temperaturas;

            cin >> temperaturas;

            if(temperaturas > -273.15 && temperaturas1 > -273.15){
                if(temperaturas1 > temperaturas){
                    incremento = temperaturas1 - temperaturas;
                    if(max_incremento < incremento){
                    max_incremento = incremento;
                    }
                } else {
                    decremento = temperaturas - temperaturas1;
                    if(max_decremento > decremento){
                    max_decremento = decremento;
                    }
                }/*Pienso que el error debe de estar en el orden de algunas variables al
                restar o en alguna comparación pero no consigo encontrarla*/
            }
        }

    if(max_incremento == 0){
    cout << "No hay incrementos" << endl;
    } else {
    cout << "Este es el incremento: " << max_incremento << endl;
    }
    if(max_decremento == 0){
        cout << "No hay decrementos" << endl;
    } else {
    cout << "Este es el decremento: " << max_decremento << endl;
    }
}


