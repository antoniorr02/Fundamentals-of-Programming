/**
  * @file leer_dos.cpp
  * @brief Programa para comprobar la lectura de dos valores enteros
  *
  * @author Antonio
  * @date Noviembre-2020
  *
  * Realice un programa que permita leer dos valores enteros, el primero negativo y el
  * segundo positivo. El programa debe repetir la lectura de cada uno de ellos hasta que se
  * cumpla la correspondiente condición.
  *
  * En el primero valor, se debe usar un bucle do-while, mientras que en el segundo debe
  * usarse un bucle while. Como resultado final, el programa escribe los dos números
  * introducidos.
  *
  */
#include <iostream>

using namespace std;

int main(){

    int numero1,numero2;

    do{
        cout << "Introduce un numero entero negativo" << endl;
        cin >> numero1;
    } while(numero1 >= 0);

    numero2 = -1;
    while(numero2 < 0){
        cout << "Introduce un numero entero positivo" << endl;
        cin >> numero2;
    }
}
