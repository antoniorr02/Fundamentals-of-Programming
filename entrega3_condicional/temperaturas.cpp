/**
  * @file temparaturas.cpp
  * @brief Programa para transformar entre escalas de temperatura (Ej. 2.3)
  *
  * @author Antonio Rofríguez Rodríguez
  * @date Octubre-2020
  *
  * Escriba un programa que permita traducir entre grados Celsius (C),
  * Fahrenheit (F), Kelvin (K) y Rankine (R). El programa preguntará en qué unidades damos
  * la temperatura de entrada y a qué escala queremos convertir. Para ello sabemos que:
  *       K = C + 273'15    R = F + 459'67   9 C = 5(F - 32)
  * Tenga en cuenta que el programa pregunta la temperatura y que ésta se introduce como un
  * número seguido de dos letras que indican las unidades. Por ejemplo: 35CF indica que
  * queremos pasar 35 grados Celsius (C) a grados Fahrenheit (F).
  *
  * Importante: no se permite usar operadores lógicos (&&, ||, !). Posiblemente la primera idea
  * que nos viene a la cabeza para resolver este problema es establecer las fórmulas para
  * convertir de todas a todas las escalas. Esto nos da un total de 4x4=16 fórmulas diferentes
  * (si tuviésemos más escalas, la cantidad de fórmulas aumenta rápidamente). Esta
  * solución, además, necesitaría el uso de condiciones compuestas (que usan operadores
  * lógicos). Debe pensar en una solución alternativa.
  *
  */

#include <iostream>

using namespace std;

int main()
{
    double valor;
    char unidad_inicial;
    char unidad_final;

cout << "Introduzca el valor a pasar, seguido de las unidades iniciales y de las unidades finales.  Ej: 35CF" << endl;
cin >> valor >> unidad_inicial >> unidad_final;

    if(unidad_inicial == 'C'){

        if(unidad_final == 'K'){
            cout << valor + 273.15 << endl;
        }

        if(unidad_final == 'R'){
            cout << ((valor * 9)/5) + 32 + 459.67 << endl;
        }

        if(unidad_final == 'F'){
            cout << ((valor * 9)/5) + 32 << endl;
        }

        if(unidad_final == 'C'){
            cout << valor << endl;
        }
    }

    if(unidad_inicial == 'R'){

        if(unidad_final == 'K'){
            cout << (((5*(valor - 32 - 459.67))/9)+273.15)<<endl;
        }

        if(unidad_final == 'C'){
            cout << 5*((valor - 32 - 459.67)/9) <<endl;
        }

        if(unidad_final == 'F'){
            cout << valor - 459.67 <<endl;
        }

        if(unidad_final == 'R'){
            cout << valor <<endl;
        }
    }

    if(unidad_inicial == 'K'){

        if(unidad_final == 'C'){
            cout << valor - 273.15 <<endl;
        }

        if(unidad_final == 'R'){
            cout << (((9*(valor - 273.15))/5) + 32 +459.67)<<endl;
        }

        if(unidad_final == 'F'){
            cout << ((9*(valor - 273.15))/5) + 32 <<endl;
        }

        if(unidad_final == 'K'){
            cout << valor <<endl;
        }
    }

    if(unidad_inicial == 'F'){

        if(unidad_final == 'K'){
            cout << ((5/9)*(valor - 32)) + 273.15 <<endl;
        }

        if(unidad_final == 'R'){
            cout << valor + 459.67 <<endl;
        }

        if(unidad_final == 'C'){
            cout << (5*(valor - 32))/9 <<endl;
        }

        if(unidad_final == 'F'){
            cout << valor <<endl;
        }
    }
}
