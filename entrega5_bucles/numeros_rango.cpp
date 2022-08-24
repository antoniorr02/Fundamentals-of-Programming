/**
  * @file numeros_rango.cpp
  * @brief Comprobación de números incluidos en un rango (ej. 3.16)
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  * Escriba un programa que lea un entero y dos números reales: n, min y max.
  * Estos valores indican que hay n números de entrada y que deberían estar
  * en el intervalo [min,max]. A continuación, deberá leer los n valores de
  * entrada y confirmar que todos están en el intervalo indicado. En caso
  * de que uno de los valores no lo esté, parará la lectura y terminará el
  * programa indicando que hay valores fuera de rango. Resuelva el
  * ejercicio usando un ciclo for. A continuación se muestran dos posibles
  * ejecuciones de este programa:
  *
  *      N, min, max: 3 0.0 5.0
  *      Introduzca valor 0: 2.3
  *      Introduzca valor 1: 2
  *      Introduzca valor 2: 5.0
  *      Los 3 valores introducidos están en el intervalo [0.0,5.0]
  *
  * Una ejecución en la que hay un valor fuera de rango:
  *
  *      N, min, max: 3 0.0 10.0
  *      Introduzca valor 0: 12
  *      Error. Finalización inesperada del programa: Valor fuera de rango.
  */
#include<iostream>
using namespace std;

int main(){

    int n;
    int c = 0;
    double minimo,maximo,numero;

    cout << "Introduzca el numero de numeros de entrada, el minimo y el maximo" << endl;
    cin >> n >> minimo >> maximo;

    for(int i = 0; i < n; i++){
        c++;
        cout << "Introduzca el numero " << c << ":" << endl;
        cin >> numero;

        if(numero > maximo || numero < minimo){
            cout << "Error. Finalizacion inesperada del programa: Valor fuera de rango." << endl;
            break;
        }
        if(n == c){
            cout << "Los " << n << " valores introducidos estan en el intervalo " << "[" << minimo << "," << maximo << "]" << endl;
        }

    }
}



