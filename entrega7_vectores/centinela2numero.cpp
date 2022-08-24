/**
  * @file centinela2numero.cpp
  * @brief Programa para transformar secuencia con centinela a secuencia con número de datos
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Mes-2020
  *
  * Escriba un programa que transforme una secuencia de longitud indeterminada marcada con
  * un centinela a una secuencia que comienza con el número de datos y sigue con los mismos
  * valores pero sin centinela.
  *
  * El programa lee una secuencia de valores de temperatura hasta que se introduce una
  * temperatura menor que el cero absoluto (-273.15 grados).
  *
  * Una vez cargada la secuencia, deberá escribirla en el mismo orden con un valor por línea.
  * La primera línea será un entero con el número de datos. Las siguientes serán valores
  * flotantes con las temperaturas.
  *
  * Un ejemplo de ejecución donde hay 2 temperaturas es:
  *     2.5 3.2 -300
  *     2
  *     2.5
  *     3.2
  *
  * Otro ejemplo, con una secuencia vacía:
  *     -300
  *     0
  */
#include<iostream>

using namespace std;

int main(){

    const int n = 10000;
    const double cero_abs = -273.15;
    double temperaturas[n];
    int f = 0;

    cin >> temperaturas[0];

    if(temperaturas[0] > cero_abs){

        while(temperaturas[f] > cero_abs){

            f++;
            cin >> temperaturas[f];

        }

        cout << f << endl;

        for(int i = 0; i < f; i++){

            cout << temperaturas[i] << endl;

        }

        cout << "0" << endl;

    } else {

        cout << "0" << endl;

    }
}
