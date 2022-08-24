/**
  * @file submuestreo.cpp
  * @brief Programa para muestrear una secuencia de temperaturas
  *
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Mes-2020
  *
  * Escriba un programa que lee una secuencia de valores de temperatura para
  * obtener un submuestreo. El programa deber� seleccionar un subconjunto de
  * muestras a partir de un par�metro que corresponde a la tasa de muestreo,
  * es decir, cada cu�ntos elementos seleccionamos una muestra.
  *
  * Tenga en cuenta que los datos de entrada terminar�n cuando se introduce
  * una temperatura menor que el cero absoluto (-273.15 grados cent�grados).
  * Adem�s el resultado ser� una secuencia terminada en un valor menor que
  * el cero absoluto para marcar el final de secuencia.
  *
  * Por ejemplo, si el programa tiene n muestras x1, x2, ..., xn, -300, un
  * factor de 3 obtendr� la secuencia x1, x4, ..., -300.
  *
  * Para que el programa pueda trabajar s�lamente con la secuencia de
  * temperaturas, la tasa de muestreo no se leer� desde la entrada est�ndar.
  * Deber� quedar fijada en el programa. Puede usar, por ejemplo, el valor 3
  * (el resultado tendr� aproximadamente un 33% de los datos).
  *
  * Algunos ejemplos de ejecuci�n son:
  * Introduzca temperaturas: 2.5 3 6 7.1 1 -300
  * 2.5 7.1 -300
  *
  * Introduzca temperaturas: 1 2 3 4 -300
  * 1 4 -300
  *
  * Introduzca temperaturas: 1 -300
  * 1 -300
  *
  * Introduzca temperaturas: -300
  * -300
  *
  * donde la segunda l�nea corresponde a la salida del programa.
  *
  * Note que no es necesario cargar todos los valores, es decir, podemos
  * ir leyendo y generando la secuencia resultante sin almacenar los valores
  * anteriores. Puede suponer que la secuencia de salida tendr� al menos un
  * elemento.
  */
#include <iostream>
using namespace std;

int main(){

    const int tasa_muestreo = 3;
    double temperatura, salida;
    int cogidos = 0;
    int introducidos = 1;

    cout << "Introduzca las temperaturas " << endl;
    cin >> temperatura;
    if(temperatura <= -273.15){
        cout << temperatura << endl;

    } else {

        while(temperatura >= -273.15){
            if (introducidos == (1 + tasa_muestreo * cogidos)){
                salida = temperatura;
                cout << salida << " ";
                cogidos++;
            }

            cin >> temperatura;
            introducidos++;

        }

    cout << "Las salidas son: " << temperatura << endl;
    }

}










