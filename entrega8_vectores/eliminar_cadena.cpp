/**
  * @file eliminar_cadena.cpp
  * @brief Programa para eliminar una cadena de un texto
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Diciembre-2020
  *
  * La entrada del programa consiste en:
  *   - Un texto seguido del carácter delimitador '#'
  *   - Un texto a eliminar, seguido por otro delimitador '#'.
  *
  * El resultado del programa será el mismo texto pero donde se han eliminado todas las
  * ocurrencias del texto a eliminar. En la solución debe:
  *
  *   -# Cargar el texto en un vector de char.
  *   -# Cargar el texto a eliminar en un segundo vector de char.
  *   -# Realizar la eliminación del texto rellenando un tercer vector resultado.
  *   -# Escribir el vector resultado.
  *
  * Un ejemplo de ejecución es:
  *     Esto es un ejemplo prueba, una frase prueba que debe salir sin la cadena prueba.#prueba#
  *     Esto es un ejemplo, una frase que debe salir sin la cadena .
  * donde la primera línea es la entrada y la segunda la salida.
  *
  * Otro ejemplo puede ser:
  *     prueba para probar de nuevo un ejemplo, con la cadena al principio, y un final:prueba#prueba#
  *      para probar de nuevo un ejemplo, con la cadena al principio, y un final:
  */
#include<iostream>

using namespace std;

int main(){

    const char CENTINELA = '#';
    const int LONG_MAX = 1e6;
    char texto[LONG_MAX];
    char cadena[LONG_MAX];
    char resultado[LONG_MAX];

    int t = 0;
    cin.get(texto[t]);

    while(texto[t] != CENTINELA){
        t++;
        cin.get(texto[t]);
    } // Cargar el texto en un vector de char.

    int a = 0;
    cin.get(cadena[a]);

    while(cadena[a] != CENTINELA){
        a++;
        cin.get(cadena[a]);
    } // Cargar el texto a eliminar en un segundo vector de char.

    int posicion = -1;
    bool diferente;

    for(int i = 0; i < t; i++){
        diferente = false;
        for(int n = 0; n < a && !diferente; n++)
            if(texto[i + n] != cadena[n])
                diferente = true;
            if(!diferente)
                posicion = i;
    }// Busca la posición de la palabra a eliminar.

        if(posicion!=-1){
            for(int i=0; i < posicion; i++){
                resultado[i] = texto[i];
                cout << resultado[i];
            }
            for(int i = posicion + a; i < t; i++){
                resultado[i] = texto[i];
                cout << resultado[i];
            }
        }

}
