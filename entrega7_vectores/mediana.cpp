/**
  * @file mediana.cpp
  * @brief Programa para calcular la mediana de una secuencia de valores
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Diciembre-2020
  *
  * Escriba un programa que procese una secuencia de datos encabezada con
  * la longitud para obtener el valor de la mediana.
  *
  * Recuerde que la mediana es el valor que se sitúa en el centro cuando
  * los datos están ordenados. En caso de que hay un número par de datos,
  * puede seleccionar cualquiera de los dos centrales.
  *
  * Un ejemplo de ejecución es:
  *     9   6.1  1.5  2  1.9  2.6  6  2.1  2.2  4
  *     Mediana de 9 valores: 2.2
  *
  * donde la primera línea es la entrada del programa y la segunda el resultado.
  */
#include<iostream>

using namespace std;

int main(){

    int n = 10000;
    double datos[n];
    double lista_ordenada[n];
    double mediana;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> datos[i];
    }

   for (int izda = 0 ; izda < n ; izda++){
      int menor = datos[izda];
      int pos_menor = izda;

      for (int a = izda + 1; a < n ; a++){
         if (datos[a] < menor){
            menor = datos[a];
            pos_menor = a;
         }
      }

    int intercambia = datos[izda];
    datos[izda] = datos[pos_menor];
    datos[pos_menor] = intercambia;

    }


//    for(int j = 0; j < n; j++){
//        cout << datos[j] << " ";
//    } //Borrar cuando acabe el programa. Para ver si se ha guardado bien.
//    cout << endl;


    int operacion = (n-(n/2))-1;
    mediana = datos[operacion];

    cout << "Mediana de " << n << " valores: " << mediana << endl;

}
