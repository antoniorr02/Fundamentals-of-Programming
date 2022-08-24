/**
  * @file datos2ascii.cpp
  * @brief Programa para dibujar una gráfica de datos
  *
  * @author Antonio Rodríguez Rodríguez
  * @date Diciembre-2020
  *
  * Escriba un programa que transforme una secuencia de datos encabezada
  * con la longitud en una gráfica que representa la variación de los datos.
  * Un ejemplo con los datos 1, 10, 3, 24 y 5 es:
  *
  *   >
  *   --------------------------->
  *   ------>
  *   ---------------------------------------------------------------------->
  *   ------------>
  *
  * Como puede ver, puede rellenar con el carácter '-', terminar con el
  * carácter '>' y hacer que el máximo alcance un ancho de 70.
  *
  * Para representar la función, necesitamos determinar el intervalo donde se sitúan
  * los valores. Conociendo este intervalo, es fácil calcular de forma proporcional
  * hasta dónde hay que dibujar un determinado valor. Si es igual al mínimo, se queda
  * en un simple carácter y si es el máximo alcanza la longitud máxima.
  *
  * Por ejemplo, una ejecición de este programa podría ser:
  * 5 -10 3 7 10 3
  * Representación de datos en [-10 , 10]
  *   >
  *   --------------------------------------------->
  *   ----------------------------------------------------------->
  *   ---------------------------------------------------------------------->
  *   --------------------------------------------->
  * donde la primera línea corresponde a los datos de entrada. Observe que también se
  * informa del intervalo donde se sitúan los datos antes de hacer el dibujo.
  *
  * Nota: una vez resuelto el problema, compruebe que también funciona para una secuencia
  * de valores idénticos.
  */

#include<iostream>

using namespace std;

int main(){

    int n = 10000;
    double lista[n];
    int long_max = 70;
    double maximo = 0;
    double minimo = 0;
    int salida;

    cin >> n;

    for(int a = 0; a < n; a++){
        cin >> lista[a];
    }

    maximo = lista[0];
    minimo = lista[0];

    for(int i = 0; i < n; i++){

        if(lista[i] < minimo){
            minimo = lista[i];
        }
        if(lista[i] > maximo){
            maximo = lista[i];
        }
    }

    cout << "Representacion de datos en: [" << minimo << " , "<< maximo << "]" << endl;

    const char primero = '-';
    const char segundo = '>';

    for(int c = 0; c < n; c++){

        if(minimo == maximo){
            salida = long_max;
        } else {
            salida = long_max*((lista[c] - minimo)/(maximo - minimo));
        }

        for(int b = 0; b < salida; b++){
            cout << primero;
        }

        cout << segundo << endl;

    }

}
