/**
  * @file sustituir_char.cpp
  * @brief Programa para sustituir un carácter de un texto
  *
  * @author Fulanito...
  * @date Diciembre-2020
  *
  * La entrada del programa consiste en:
  *   - Un texto seguido del carácter delimitador '#'
  *   - Un texto que sustituye, seguido por otro delimitador '#'.
  *   - Un carácter que hay que sustituir
  *
  * El resultado del programa será el mismo texto pero donde se han sustituido todas las
  * ocurrencias del carácter a sustituir por el texto que sustituye. En la solución debe:
  *
  *   -# Cargar el texto en un vector de char.
  *   -# Cargar el texto que sustituye en un segundo vector de char.
  *   -# Realizar la sustitución del texto rellenando un tercer vector resultado.
  *   -# Escribir el vector resultado.
  *
  * Un ejemplo de ejecución es:
  *     * quiere que probemos este programa. Seguro que le satisface a *.#Antonio#*
  *     Antonio quiere que probemos este programa. Seguro que le satisface a Antonio.
  * donde la primera línea es la entrada y la segunda la salida.
  *
  */
#include<iostream>

using namespace std;

int main(){

    const char CENTINELA = '#';
    const int LONG_MAX = 1000000;
    char cadena[LONG_MAX];
    char nuevo_texto[LONG_MAX];
    char resultado[LONG_MAX];
    char borrar;

    int i = 0;
    cin.get(cadena[i]);

    while(cadena[i] != CENTINELA){
        i++;
        cin.get(cadena[i]);
    }

    int n = 0;
    cin.get(nuevo_texto[n]);

    while(nuevo_texto[n] != CENTINELA){
        n++;
        cin.get(nuevo_texto[n]);
    }

//    string texto;
//    for(int t = 0; t < n; t++){
//        texto = texto + nuevo_texto[t];
//    } //NO HACER CASO!!

    cin.get(borrar);

    int o = 0;
    for(int a = 0; a < LONG_MAX; a++){
        if(cadena[o] == borrar){
            for(int b = 0; b < n; b++){
                resultado[a] = nuevo_texto[b];
                a++;
            }
        } else {
            resultado[a] = cadena[o];
        }
        o++;
    }

    for(int p = 0; p < LONG_MAX; p++){
        if(resultado[p] != CENTINELA){
            cout << resultado[p];
        }
    }

}
