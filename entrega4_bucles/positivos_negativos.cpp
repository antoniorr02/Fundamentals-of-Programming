/**
  * @file positivos_negativos.cpp
  * @brief Cuenta los números positivos y negativos (lectura anticipada y centinela)
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  * Se desea implementar un programa que cuente la cantidad de datos que son positivos y
  * negativos en una secuencia de valores enteros. Implemente un programa que lea datos hasta
  * que se lea el valor cero. Como resultado, indicará en la salida estándar cuántos han sido
  * positivos y cuántos negativos.
  *
  */
#include <iostream>

using namespace std;

int main(){

    int numero;
    int negativos = 0;
    int positivos = 0;

    while(numero != 0){
        cout << "Introduzca un numero entero" << endl;
        cout << "Si desea finalizar el programa introduzca 0" << endl;
        cin >> numero;

        if(numero > 0){
            positivos = positivos + 1;
        } else {
            if(numero < 0){
                negativos = negativos + 1;
            }
        }
    }

    cout << "Ha introducido estos numeros positivos: " << positivos << endl;
    cout << "Ha introducido estos numeros negativos: " << negativos << endl;
}
