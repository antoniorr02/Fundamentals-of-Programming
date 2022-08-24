/**
  * @file sustituir_char_inplace.cpp
  * @brief Programa para sustituir un car�cter de un texto
  *
  * @author Antonio Rodr�guez Rodr�guez
  * @date Diciembre-2020
  *
  * La entrada del programa consiste en:
  *   - Un texto seguido del car�cter delimitador '#'
  *   - Un texto que sustituye, seguido por otro delimitador '#'.
  *   - Un car�cter que hay que sustituir
  *
  * El resultado del programa ser� el mismo texto pero donde se han sustituido todas las
  * ocurrencias del car�cter a sustituir por el texto que sustituye. En la soluci�n debe:
  *
  *   -# Cargar el texto en un vector de char.
  *   -# Cargar el texto que sustituye en un segundo vector de char.
  *   -# Realizar la sustituci�n del texto rellenando el primer vector.
  *   -# Escribir el vector resultado.
  *
  * Por tanto, no debe haber un vector aparte donde se pueda guardar el resultado, sino
  * que tiene que usar el mismo vector de entrada. Para ello, tenga en cuenta que_
  *   - Puede contar el n�mero de caracteres que hay en la entrada.
  *   - Si quiere sustituir en el mismo vector, puede calcular el tama�o final que tendr�.
  *   - Puede rellenar el vector que se obtendr� de derecha a izquierda, sin pisar otros datos.
  *
  * Un ejemplo de ejecuci�n es:
  *     * quiere que probemos este programa. Seguro que le satisface a *.#Antonio#*
  *     Antonio quiere que probemos este programa. Seguro que le satisface a Antonio.
  * donde la primera l�nea es la entrada y la segunda la salida.
  *
  */
#include<iostream>

using namespace std;

int main(){

    const char CENTINELA = '#';
    const int LONG_MAX = 1e6;
    char cadena[LONG_MAX];
    char nuevo_texto[LONG_MAX];
    char resultado[LONG_MAX];
    char borrar;

    int i = 0;
    cin.get(cadena[i]);

    while(cadena[i] != CENTINELA){
        i++;
        cin.get(cadena[i]);
    } // Cargar el texto en un vector de char.

    int c = 0;
    cin.get(nuevo_texto[c]);

    while(nuevo_texto[c] != CENTINELA){
        c++;
        cin.get(nuevo_texto[c]);
    } // Cargar el texto que sustituye en un segundo vector de char.

    cin.get(borrar);

    // Localizo el numero de veces que voy a sustituir.
    int repeticiones = 0;

    for(int t = 0; t < i; t++){
        if(cadena[t] == borrar){
            repeticiones++;
        }
    }

    int n_letras = i + repeticiones*c - repeticiones;

    for(int i = n_letras; i > 0; i--){
        if(cadena[i] == borrar){
            for(int t = n_letras; t > c; t--){
                resultado[i] = nuevo_texto[t];
            }
            i = i - c;
        } else {
             resultado[i] = cadena[i];
        }

    }// esta parte deber�a de realizar la sustituci�n del texto, pero no lo he logrado.

    for(int q = 0; q < n_letras; q++){
        if(cadena[q] != CENTINELA){
            resultado[q] = cadena[q];
            cout << resultado[q];
        }
    } // Escribir el vector resultado.
}
