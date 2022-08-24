/**
  * @file leer_dos.cpp
  * @brief Programa para comprobar la lectura de dos valores enteros
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  * Realice un programa que permita leer un número real en el intervalo [0,1]. El programa
  * debe diseñarse mediante una lectura anticipada, es decir, una lectura para el primer dato
  * y un bucle que implementa la repetición de la lectura hasta que el valor sea correcto.
  *
  * Tenga en cuenta que dado que el primer dato se lee aparte, el mensaje para introducirlo
  * indicará el intervalo válido, mientras que en las siguientes entradas podemos usar un
  * mensaje que avisa de que el valor anterior no es válido.
  *
  * Como resultado final, el programa debe escribir el dato introducido.
  *
  */
#include <iostream>

using namespace std;

int main(){
    double numero = 2;

    while(numero>1 || numero<0){
        cout << "Introduzca un numero entre 0 y 1" << endl;
        cin >> numero;
    }
}
