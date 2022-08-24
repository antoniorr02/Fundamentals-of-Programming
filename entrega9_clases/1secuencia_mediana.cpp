/**
  * @file secuencia_mediana.cpp
  * @brief C�lculo de la mediana
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Enero-2020
  *
  * Escriba un programa que lea una secuencia de datos  y que escriba en la salida
  * est�ndar el valor de la mediana.
  *
  * Recuerde que la mediana es aquel valor que despu�s de ordenar los datos queda
  * en medio. Si hubiera un n�mero par de datos, cualquiera de los dos centrales
  * es v�lido. Un ejemplo de ejecuci�n es:
  *
  *    �Cu�ntos datos quiere procesar? 17
  *    Introduzca los datos: 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1
  *    Mediana: 5
  *
  * Otro ejemplo de ejecuci�n es:
  *
  *    �Cu�ntos datos quiere procesar? -5
  *    No es posible procesar esos datos.
  *
  * puesto que el programa requiere que haya al menos 2 datos.
  *
  * Para resolver el problema, ya tiene un esqueleto con la mayor parte del problema
  * resuelto. En este programa no modifique las funciones ya resueltas de la clase.
  * A�ada lo que considere oportuno y complete la funci�n  main para que resuelva el
  * problema indicado.
  *
  */

#include <iostream>
using namespace std;


class SecuenciaDatos{
private:
   static const int TAMANIO = 1000;
   double vector_privado[TAMANIO];
   int total_utilizados;

   void IntercambiaComponentesDirectamente (int pos_izda, int pos_dcha){
      double intercambia;

      intercambia = vector_privado[pos_izda];
      vector_privado[pos_izda] = vector_privado[pos_dcha];
      vector_privado[pos_dcha] = intercambia;
   }
public:

   SecuenciaDatos()
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

   void Aniade(double nuevo) {
      if (total_utilizados < TAMANIO){
         vector_privado[total_utilizados] = nuevo;
         total_utilizados++;
      }
   }

   void Modifica(int posicion, double nuevo) {
      if (posicion >= 0 && posicion < total_utilizados)
         vector_privado[posicion] = nuevo;
   }

   double Elemento(int indice) {
      return vector_privado[indice];
   }

   void Elimina (int posicion){
      if (posicion >= 0 && posicion < total_utilizados) {
         int tope = total_utilizados-1;

         for (int i = posicion ; i < tope ; i++)
            vector_privado[i] = vector_privado[i+1];

         total_utilizados--;
      }
   }

   // Hace falta a�adir m�s c�digo para facilitar el c�lculo de la mediana

    void Mediana(int total_utilizados){
        int mediana = total_utilizados/2;
        cout << Elemento(mediana);
    }

    void OrdenarVector(int util){

        int intercambiar, minimo, pos_min;

        for(int izda = 0; izda < util; izda++){
            minimo = vector_privado[izda];
            pos_min = izda;
            for(int i = izda + 1; i < util; i++){
                if(vector_privado[i] < minimo){
                    minimo = vector_privado[i];
                    pos_min = i;
                }
            }

            IntercambiaComponentesDirectamente(izda, pos_min);

        }
    }

};

int main(){
    SecuenciaDatos secuencia;
    int total_leer;
    int capacidad_secuencia = 1000;
    double dato;

    cout << "�Cu�ntos datos quiere procesar? ";
    cin >> total_leer;
    capacidad_secuencia = secuencia.Capacidad();

    if (total_leer>1 && total_leer <= capacidad_secuencia) {
      cout << "Introduzca los datos: ";

      // hay que leer los datos y escribir la mediana de la secuencia

        for(int i = 0; i < total_leer; i++){
            cin >> dato;
            secuencia.Aniade(dato);
        }

        secuencia.OrdenarVector(total_leer);
        secuencia.Mediana(total_leer);

   }
   else {
      cout << "No es posible procesar esos datos.\n";
   }

}
