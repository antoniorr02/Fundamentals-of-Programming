/**
  * @file pascua.cpp
  * @brief Calcula la fecha del domingo de Pascua de un a�o
  *
  * @author Antonio Rodr�guez Rodr�guez
  * @date Octubre-2020
  *
  *  La fecha del domingo de Pascua corresponde al primer domingo despu�s de la primera
  * luna llena que sigue al equinoccio de primavera. El algoritmo que se presenta a
  * continuaci�n (denominado C�mputus) permite calcular esta fecha y es v�lido para a�os
  * comprendidos entre 1900 y 2100. Para un determinado a�o, los c�lculos que hay que
  * realizar son:
  *    - A = a�o mod 19
  *    - B = a�o mod 4
  *    - C = a�o mod 7
  *    - D = (19 * A + 24) mod 30
  *    - E = (2 * B + 4 * C + 6 * D + 5) mod 7
  *    - N = (22 + D + E)
  * donde mod significa m�dulo (resto de dividir el primero entre el segundo).
  *
  * El valor de N corresponde al d�a de marzo en el que se sit�a el domingo de Pascua.
  * En el caso de que sea mayor que 31, el valor se refiere a un d�a de abril. Adem�s, hay
  * dos excepciones:
  *    1.- Si la fecha obtenida es el 26 de abril, entonces la Pascua caer� en el 19
  *        de abril.
  *    2.- Si es el 25 de abril, con D = 28, E = 6 y A > 10, entonces la Pascua es el 18
  *       de abril.
  * Escriba un programa que lea un a�o y muestre el d�a y mes en el que se celebr� o
  * celebrar� el domingo de pascua para ese a�o.Tenga en cuenta que si el a�o no est� en el rango v�lido, deber� mostrar un mensaje y terminar.
  * En la siguiente lista tiene algunos datos para verificar que el ejercicio es correcto:
  *    - A�o 2005 -> Pascua el 27 de marzo
  *    - A�o 2011 -> Pascua el 24 de abril
  *    - A�o 2049 -> Pascua el 18 de abril
  *    - A�o 2076 -> Pascua el 19 de abril
  *
  */

#include <iostream>

using namespace std;

int main(){

    int year;

cout << "Introduzca el a�o en el que desea conocer el dia de Pascua: " << endl;
cin >> year;

    if(year >= 1900 && year <= 2100){

        int A = year%19;
        int B = year%4;
        int C = year%7;
        int D = (19 * A + 24)%30;
        int E = (2 * B + 4 * C + 6 * D + 5)%7;
        int N = (22 + D + E);

        if(N <= 31){
            cout << "Pascua el " << N << " de Marzo"<< endl;
        }
        if(N > 31){

            N = N - 31;

            if(N == 26){
                cout << "Pascua el 19 de Abril" << endl;
            }

            if(N == 25 && D == 28 && E == 6 && A > 10){
                cout << "Pascua el 18 de Abril" << endl;
            }

            if(N != 26 && N!= 25){
                cout << "Pascua el " << N << " de Abril" << endl;
            }
        }

    } else {
        cout << "Error: Introduzca un rango de a�os entre 1900 y 2100" << endl;
    }

}
