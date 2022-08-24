/**
  * @file letra_frecuente.cpp
  * @brief Programa para determinar la letra más frecuente
  *
  * @author Antonio Rodríguez Rodríguez
  * @date Noviembre-2020
  *
  * Suponga que se ha procesado un texto y se han obtenido las frecuencias con las que
  * aparecen cada una de las letras. Escriba un programa que lee pares de valores letra y
  * frecuencia y escribe como resultado la letra más frecuente. El programa lee un número
  * indeterminado de pares delimitado con un carácter centinela #.
  * Un ejemplo de ejecución es:
  *      Introduzca frecuencias:
  *      a 45
  *      c 32
  *      Z 39
  *      h 25
  *      #
  *      La letra más frecuente es 'a' con 45 repeticiones.
  *
  */
#include <iostream>

using namespace std;

int main(){

    char letra, letra_asoc;
    int frecuencia, mas_frec;
    mas_frec = 0;

    cout << "Introduzca una letra y una frecuencia" << endl;
    cin >> letra;

    while(letra != '#'){

        cin >> frecuencia;

        if(frecuencia > mas_frec){
            mas_frec = frecuencia;
            letra_asoc = letra;
        }

        cin >> letra;
    }

    cout << "La letra mas frecuente es " << letra_asoc << " con " << mas_frec << " repeticiones" << endl;
}
