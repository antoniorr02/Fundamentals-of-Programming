/**
  * @file mezcla_ordenadas.cpp
  * @brief Mezcla de secuencias ordenadas
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Enero-2020
  *
  * En este ejercicio se va a trabajar con una clase diseñada para mantener una
  * secuencia de elementos de forma ordenada. No se asignarán a una posición
  * concreta, sino que se introducirán en la posición adecuada al orden de menor
  * a mayor.
  *
  * Para resolver el problema, ya dispone con una solución parcial de una clase
  * SecuenciaOrdenada que mantiene una secuencia de números double. Las funciones
  * básicas que ya tiene resueltas son las de consulta básica.
  *
  * Es importante tener en cuenta que la secuencia siempre tendrá los elementos
  * almacenados de forma ordenada. Por tanto, no se puede modificar un elemento
  * de una determinada posición. En lugar de eso, complete:
  *    - Una función que recibe un solo dato de tipo double y lo añade al vector.
  *      La posición donde termine siendo almacenado deberá garantizar el orden.
  *
  * Una vez resuelta la clase, debe añadir una función externa a la clase.
  * Esta función no está en la clase y por tanto no puede acceder a los miembros
  * privados de la clase.
  *
  *    - La función tiene dos parámetros de entrada que corresponden a dos secuencias
  *      ordenadas y devuelve una nueva secuencia que contendrá la mezcla ordenada
  *      de las de entrada.
  * Para más detalles, observe que en la función main ya tiene el código que llamará
  * a la mezcla.
  *
  * Complete un programa que lea dos secuencias, las mezcle con una llamada a esta
  * función y escriba el resultado. Un ejemplo de ejecución es:
  *
  *    Introduzca enteros positivos (negativo para fin): 1 3 5 7 9 21 19 17 15 13 11 -1
  *    Introduzca enteros positivos (negativo para fin): 2 4 6 8 10 20 18 16 14 12 -1
  *    Mezcla: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
  *
  * Para resolver el problema, ya tiene un esqueleto con la mayor parte del problema
  * resuelto. En este programa no modifique las funciones de la clase. Añada lo que
  * considere oportuno y complete la función main para que resuelva el problema indicado.
  *
  */
#include <iostream>
using namespace std;

class SecuenciaOrdenada{
private:
   static const int TAMANIO = 1000;
   double vector_privado[TAMANIO];
   int total_utilizados;
public:
   SecuenciaOrdenada()
      :total_utilizados(0) {
   }

   int TotalUtilizados() {
      return total_utilizados;
   }

   int Capacidad(){
      return TAMANIO;
   }

   void EliminaTodos(){
      total_utilizados = 0;
   }

   double Elemento(int indice){
      return vector_privado[indice];
   }

   void Aniade(double nuevo){
       if(total_utilizados < TAMANIO){
       // FIXME: Completar añadiendo el elemento en su posición
            vector_privado[total_utilizados] = nuevo;
            total_utilizados++;
       }
   }

   void IntercambiaPosicionesDirectamente(int pos_izq, int pos_dcha){
      double cambia;
      cambia=vector_privado[pos_izq];
      vector_privado[pos_izq]=vector_privado[pos_dcha] ;
      vector_privado[pos_dcha]=cambia;
    }

    void OrdenarVector(){
    int pos_min, minimo;
       for(int izq=0; izq<TotalUtilizados();izq++){
            minimo=vector_privado[izq];
            pos_min=izq;
            for(int j=izq+1; j<TotalUtilizados();j++){
                if(vector_privado[j]<minimo){
                    minimo=vector_privado[j];
                    pos_min=j;
                }
            }
       IntercambiaPosicionesDirectamente(izq, pos_min);
       }
    }
};

// FIXME: Función que recibe dos secuencias ordenadas y devuelve una nueva mezcla

SecuenciaOrdenada Mezclar(SecuenciaOrdenada s1, SecuenciaOrdenada s2){
    SecuenciaOrdenada mezcla;
    for(int i=0; i< s1.TotalUtilizados(); i++)
       mezcla.Aniade(s1.Elemento(i));
    for(int i=0; i< s2.TotalUtilizados(); i++)
        mezcla.Aniade(s2.Elemento(i));

    return mezcla;
}



int main(){
    SecuenciaOrdenada s1, s2;
    double dato;

   // FIXME: Leer la secuencia 1

   cout << "Introduce la secuencia 1: ";
   cin >> dato;
   while(dato >= 0){
        s1.Aniade(dato);
        cin >> dato;
   }
   s1.OrdenarVector();


   // FIXME: Leer la secuencia 2

   cout << "Introduce la secuencia 2: ";
   cin >> dato;
   while(dato >= 0){
        s2.Aniade(dato);
        cin >> dato;
   }
   s2.OrdenarVector();


   SecuenciaOrdenada mezcla;
   mezcla = Mezclar(s1,s2);
   mezcla.OrdenarVector();

   for(int i=0; i<s1.TotalUtilizados()+s2.TotalUtilizados(); i++)
        cout << mezcla.Elemento(i) << " ";
}

