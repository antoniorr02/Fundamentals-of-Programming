/**
  * @file Fibonacci.cpp
  * @brief Dise�ar una clase para generar la sucesi�n de fibonacci
  *
  * @author Antonio Rodr�guez Rodr�guez.
  * @date Mes-2020
  *
  * La sucesi�n de Fibonacci es la sucesi�n infinita:
  *
  *    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144...
  *
  * que se forma considerando que x0= 0, x1= 1 y xi es la suma de los dos
  * anteriores (el i-1 y el i-2).
  *
  * Se desea dise�ar una clase que permita obtener la secuencia de una forma
  * simple y c�moda. Los programadores han establecido una interfaz para que
  * el programa (main) que se incluye sea v�lido.
  *
  * El problema consiste en crear una clase compatible con esta interfaz y que
  * obtenga los valores correspondientes. Una posible ejecuci�n es:
  *
  *    �Cu�ntos elementos?
  *    5
  *    1 : 1
  *    2 : 1
  *    3 : 2
  *    4 : 3
  *    5 : 5
  *
  * Deber� decidir qu� atributos incluir como datos miembro privados y c�mo
  * implementar el constructor sin par�metros y las funciones miembro que aparecen
  * en el main.
  *
  * No modifique el main, simplemente a�ada una clase antes para que funcione como
  * se ha especificado.
  */


// FIXME: A�ada una clase Fibonacci para que funcione el main
#include<iostream>
using namespace std;

class Fibonacci{
private:

    static const int TAMANIO = 100;
    int vector_privado[TAMANIO];
    int dato = 1;
    int cantidad = 0;

public:
    int Indice(){
        cantidad++;
        return cantidad;
    }

    int Valor(){

        vector_privado[cantidad] = dato;

        return vector_privado[cantidad];
    }

    int Siguiente(){
        if(cantidad > 1){
            dato = vector_privado[cantidad] + vector_privado[cantidad-1];
            return dato;
        }
    }
};

int main(){
   Fibonacci serie;
   int num;

   cout << "�Cu�ntos elementos? " << endl;
   cin >> num;

   for (int i=0; i<num; i++) {
      cout << serie.Indice() << " : "  << serie.Valor() << endl;
      serie.Siguiente();
   }
}

