/**
  * @file media_varianza.cpp
  * @brief Programa para calcular la media y varianza
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  * Escriba un programa que lea un n�mero entero que indica el n�mero de datos
  * y a continuaci�n tantos n�meros reales como indique dicho entero. Como
  * resultado, escribir� la media y la varianza de dichos datos.
  *
  * Consulte la formulaci�n en el ejercicio 3.13 (Media y varianza)
  */
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int numero;
    double x, media, variacion, suma, suma2;

    cout <<  "Introduzca un numero de datos" << endl;
    cin >> numero;

    for(int i = 0; i < numero;i++){
        cout << "Introduzca los valores reales" << endl;
        cin >> x;
        suma = suma + x;
        suma2 = suma2 + pow(x,2);

    }
    media = suma / numero;
    cout << "La media es: " << media << endl;

    variacion = (suma2/numero)-pow(media,2);
    cout << "La variacion es: " << variacion << endl;
}
