/**
  * @file figuras.cpp
  * @brief Programa para dibujar figuras en la consola
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  * Escriba un programa que lea un número entero N desde la entrada estándar
  * y que acontinuación dibuje con asteriscos ?en la salida estándar? las
  * siguientes figuras:
  *    - Triángulo de lado N
  *    - Cuadrado hueco de lado N
  *    - Rombo de altura y ancho N. Sólo se dibuja si N es un número impar.
  * A continuación vemos una muestra de estas figuras para N=7:
  *      *            *******         *
  *      **           *     *        ***
  *      ***          *     *       *****
  *      ****         *     *      *******
  *      *****        *     *       *****
  *      ******       *     *        ***
  *      *******      *******         *
  */
#include <iostream>
using namespace std;

int main(){

    int n;
    char o = '*';

    cout << "Introduzca un numero entero" << endl;
    cin >> n;

    int m = n%2;
    int rec = n-1;

    if(m == 0){
        cout << "Triangulo: \n" << endl;
        for(int j = 0; j < n; j++){
            for(int i = 0; i <= j; i++){
                cout << o ;
            }
            cout << endl ;
        }

        cout << "\nCuadrado: \n" << endl;
        for(int a = 0; a <= rec; a++){
            for(int b = 0; b <= rec; b++){
                if((a==0)||(b==0)||(a==rec)||(b==rec)){
                    cout << o;
                } else {
                    cout << " ";
                }
            }
        cout << endl;
        }

    } else {

        cout << "Triangulo: \n" << endl;
        for(int j = 0; j < n; j++){
            for(int i = 0; i <= j; i++){
                cout << o ;
            }
            cout << endl ;
        }

        cout << "\nCuadrado: \n" << endl;
        for(int a = 0; a <= rec; a++){
            for(int b = 0; b <= rec; b++){
                if((a==0)||(b==0)||(a==rec)||(b==rec)){
                    cout << o;
                } else {
                    cout << " ";
                }
            }
        cout << endl;
        }

        cout << "Rombo: \n" << endl;
        for(int y = 0; y < n ; y++ ){
            for(int x = 0; x < n-y-1; x++){
                cout << " ";
            }
            for(int x = 0; x < 2 * y + 1; x++){
                cout << o;
            }
            cout << endl;
        }
        for(int y = n-2; y >= 0; y--){
            for(int x = 0; x < n-y-1; x++){
                cout << " ";
            }
            for(int x = 0; x < 2*y+1; x++){
                cout << o;
            }
            cout  << endl;
        }
    }
}

