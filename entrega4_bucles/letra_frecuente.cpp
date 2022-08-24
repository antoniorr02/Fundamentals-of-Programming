/**
  * @file letra_frecuente.cpp
  * @brief Programa para determinar la letra m�s frecuente
  *
  * @author Antonio Rodr�guez Rodr�guez
  * @date Noviembre-2020
  *
  * Suponga que se ha procesado un texto y se han obtenido las frecuencias con las que
  * aparecen cada una de las letras. Escriba un programa que lee pares de valores letra y
  * frecuencia y escribe como resultado la letra m�s frecuente. El programa lee un n�mero
  * indeterminado de pares delimitado con un car�cter centinela #.
  * Un ejemplo de ejecuci�n es:
  *      Introduzca frecuencias:
  *      a 45
  *      c 32
  *      Z 39
  *      h 25
  *      #
  *      La letra m�s frecuente es 'a' con 45 repeticiones.
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
