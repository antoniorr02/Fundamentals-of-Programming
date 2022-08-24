/**
  * @file media_varianza.cpp
  * @brief Programa que calcula la media y varianza de una secuencia de temperaturas
  *
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Mes-2020
  *
  * Escriba un programa que procesa una secuencia de valores de temperatura hasta
  * que se introduce una temperatura menor que el cero absoluto (-273.15 grados).
  *
  * Como resultado, escribirá la media y la varianza de dichos datos.
  *
  * Nota: tenga en cuenta que no se pueden almacenar todos los datos
  */
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n = -1;
    double temperatura, media, variacion, suma, suma2;
    temperatura = 0;

    cout << "Introduzca temperaturas:" << endl;

    while(temperatura > -273.15){


        suma = suma + temperatura;
        suma2 = suma2 + pow(temperatura,2);
        n++;
        cin >> temperatura;

    }

    media = suma / n;
    cout << "La media es: " << media << endl;

    variacion = (suma2/n)-pow(media,2);
    cout << "La variacion es: " << variacion << endl;
}

