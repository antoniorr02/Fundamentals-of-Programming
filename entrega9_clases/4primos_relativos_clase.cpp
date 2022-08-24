/**
  * @file primos_relativos_clase.cpp
  * @brief Determinar si dos n�meros son primos relativos
  *
  * @author Antonio Rodr�guez Rodr�guez.
  * @date Enero-2020
  *
  * Escriba un programa que lea dos n�meros enteros positivos y escriba en la
  * salida est�ndar la descomposici�n en primos y si son primos relativos.
  *
  * Recuerde que dos n�meros son primos relativos si no tienen ning�n divisor
  * com�n. Si disponemos de las dos secuencias que corresponden a la descomposici�n
  * en n�meros primos de ambos n�meros, son primos relativos si no tienen ning�n
  * primo en com�n.
  *
  * El programa consiste fundamentalmente en crear una clase dise�ada para obtener
  * la descomposici�n en primos de un entero. Es una clase que permite almacenar
  * una secuencia de primos obtenidos a partir de un entero a descomponer.
  *
  * Un ejemplo de su ejecuci�n es el siguiente:
  *
  *    Introduzca dos n�meros para ver si son primos relativos: 10 20
  *    10: 2 5
  *    20: 2 2 5
  *   Los n�meros 10 y 20 no son primos relativos
  *
  * Note que la entrada de datos consiste en los dos n�meros 10 y 20 y el programa
  * ha obtenido como resultado las tres �ltimas l�neas: las descomposiciones y si son
  * primos relativos.
  *
  * Otro ejemplo en el que se obtiene un resultado de primos relativos es el siguiente:
  *    Introduzca dos n�meros para ver si son primos relativos: 65536 1334025
  *    65536: 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2
  *    1334025: 3 3 5 5 7 7 11 11
  *    Los n�meros 65536 y 1334025 son primos relativos
  * Para resolver el problema, ya tiene un esqueleto con la mayor parte del problema
  * resuelto. En este programa no modifique las funciones ya resueltas de la clase.
  * A�ada lo que considere oportuno y complete la funci�n main para que resuelva
  * el problema indicado.
  *
  */

#include <iostream>
using namespace std;

class FactoresPrimos{
private:
   static const int TAMANIO = 30;
   int vector_privado[TAMANIO]; // Factores primos, ordenados
   int total_utilizados;


   void Aniade(int nuevo){
      // FIXME: Completar a�adiendo el elemento al final del vector
        if(total_utilizados < TAMANIO){
            vector_privado[total_utilizados] = nuevo;
            total_utilizados++;
        }
   }

public:

   FactoresPrimos()
      :total_utilizados(0) {
   }

   int TotalUtilizados() {
      return total_utilizados;
   }

   int Capacidad() {
      return TAMANIO;
   }

   void EliminaTodos() {
      total_utilizados = 0;
   }

   int Elemento(int indice) {
      return vector_privado[indice];
   }

   // FIXME: A�adir funci�n para cargar la secuencia a partir de un n�mero

    void CargarSecuencia(int numero){
        int i = 2;
        while(numero >= i){
            if(numero%i == 0){
                Aniade(i);
                numero = numero / i;
            } else
                i++;
        }
    }

   // FIXME: A�adir una funci�n que recibe una descomposici�n y dice si son primos relativos
    bool SonPrimos(FactoresPrimos s1, FactoresPrimos s2){
        for(int i = 0; i < s1.TotalUtilizados(); i++){
            for(int j = 0; i < s2.TotalUtilizados(); j++){
                if(s1.Elemento(i) == s2.Elemento(j))
                    return true;
                else
                    return false;
            }
        }
    }

};


int main(){

    int numero1, numero2; // N�meros para comprobar si son primos

    cout <<"Introduzca dos n�meros para ver si son primos relativos: ";
    cin >> numero1 >> numero2;

    if (numero1>1 && numero2>1) {
      // FIXME: Usar la clase para obtener dos descomposiciones

        FactoresPrimos s1, s2;
        s1.CargarSecuencia(numero1);
        s2.CargarSecuencia(numero2);

      // FIXME: Imprimir descomposiciones de n�meros

        cout << numero1 << ": ";
        for(int i = 0; i < s1.TotalUtilizados(); i++)
            cout << s1.Elemento(i) << " ";
        cout << endl;

        cout << numero2 << ": ";
        for(int i = 0; i < s2.TotalUtilizados(); i++)
            cout << s2.Elemento(i) << " ";
        cout << endl;

      // FIXME: Usar la funci�n miembro para indicar si son primos relativos

        if(s1.SonPrimos(s1, s2))
            cout << "No son primos relativos.";
        else
            cout << "Son primos relativos.";

   }  else {
      cout << "Los n�meros deben ser mayores que 1" << endl;
   }
}

