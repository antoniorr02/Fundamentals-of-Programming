/**
  * @file datos2ascii.cpp
  * @brief Programa para dibujar una gr�fica de datos
  *
  * @author Antonio Rodr�guez Rodr�guez
  * @date Diciembre-2020
  *
  * Escriba un programa que transforme una secuencia de datos encabezada
  * con la longitud en una gr�fica que representa la variaci�n de los datos.
  * Un ejemplo con los datos 1, 10, 3, 24 y 5 es:
  *
  *   >
  *   --------------------------->
  *   ------>
  *   ---------------------------------------------------------------------->
  *   ------------>
  *
  * Como puede ver, puede rellenar con el car�cter '-', terminar con el
  * car�cter '>' y hacer que el m�ximo alcance un ancho de 70.
  *
  * Para representar la funci�n, necesitamos determinar el intervalo donde se sit�an
  * los valores. Conociendo este intervalo, es f�cil calcular de forma proporcional
  * hasta d�nde hay que dibujar un determinado valor. Si es igual al m�nimo, se queda
  * en un simple car�cter y si es el m�ximo alcanza la longitud m�xima.
  *
  * Por ejemplo, una ejecici�n de este programa podr�a ser:
  * 5 -10 3 7 10 3
  * Representaci�n de datos en [-10 , 10]
  *   >
  *   --------------------------------------------->
  *   ----------------------------------------------------------->
  *   ---------------------------------------------------------------------->
  *   --------------------------------------------->
  * donde la primera l�nea corresponde a los datos de entrada. Observe que tambi�n se
  * informa del intervalo donde se sit�an los datos antes de hacer el dibujo.
  *
  * Nota: una vez resuelto el problema, compruebe que tambi�n funciona para una secuencia
  * de valores id�nticos.
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
