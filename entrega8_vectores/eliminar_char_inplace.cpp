/**
  * @file eliminar_char_inplace.cpp
  * @brief Programa para eliminar un car�cter de un texto
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Diciembre-2020
  *
  * La entrada del programa consiste en:
  *   - Un texto seguido del car�cter delimitador '#'
  *   - Un car�cter a eliminar.
  *
  * El resultado del programa ser� el mismo texto pero donde se han eliminado todas las
  * ocurrencias del car�cter a eliminar. En la soluci�n debe:
  *
  *   -# Cargar el texto en un vector de char.
  *   -# Realizar la eliminaci�n del texto modificando el mismo vector de entrada.
  *   -# Escribir el vector resultado.
  *
  * Por tanto, no debe haber un vector aparte donde se pueda guardar el resultado, sino
  * que tiene que usar el mismo vector de entrada.
  *
  * Un ejemplo de ejecuci�n es:
  *     *Esto es un* ejemplo,* una frase que debe **salir sin el ***car�cter extra�o.#*
  *     Esto es un ejemplo, una frase que debe salir sin el car�cter extra�o.
  * donde la primera l�nea es la entrada y la segunda la salida.
  */
#include<iostream>

using namespace std;

int main(){

    const char CENTINELA = '#';
    const int LONG_MAX = 1e6;
    char cadena[LONG_MAX];
    char resultado[LONG_MAX];
    char borrar;
    int i = 0;

    cin.get(cadena[i]);

    while(cadena[i] != CENTINELA){
        i++;
        cin.get(cadena[i]);
    } //Cargar el texto en un vector de char.

    cin.get(borrar);

    for(int a = 0; a < i; a++){
        if(cadena[a] != borrar){
            cadena[a] = cadena[a];
        } else {
            cadena[a] = 0; //En ASCII es car�cter nulo.
        }
        resultado[a] = cadena[a];
        cout << resultado[a];
    }
}
