/**
  * @file media_varianza.cpp
  * @brief Programa para calcular la media y varianza de una secuencia de valores
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Mes-2020

  *
  * Escriba un programa que procesa una secuencia de valores de temperatura hasta
  * que se introduce una temperatura menor que el cero absoluto (-273.15 grados).
  *
  * Como resultado, escribirá la media y la varianza de dichos datos. Las fórmula
  * que se utilizará para la varianza es la que calcula la media de las diferencias
  * al cuadrado.


  *
  * Nota: tenga en cuenta que primero calcula la media y una vez obtenida,
  * calculamos la varianza. Por tanto, se almacenarán los datos en un vector.
  */
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const double centinela = -273.15;
    int n = 10000;
    double temperaturas[n];
    int f = 0;
    double media, variacion;

    cin >> temperaturas[f];

    while(temperaturas[f] > centinela){
        f++;
        cin >> temperaturas[f];
    }

    for(int i = 0; i < f; i++){
        double sumando = temperaturas[i];
        double sumando_total = sumando_total + sumando;
        media = (sumando_total)/f;
        variacion = (pow(sumando_total - media,2))/f;
    }



    int b = 2;
    double resultados[b];
    resultados[0] = media;
    resultados[1] = variacion;

//    for(int e  = 0; e <= b; e++){
//        cout << resultados[e] << " ";
//
//    }

    cout << " LA MEDIA: " << resultados[0] << endl;
    cout << " LA VARIACION: " << resultados[1] << endl;

}
