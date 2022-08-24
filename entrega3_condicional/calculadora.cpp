/**
  * @file calculadora.cpp
  * @brief Programa para realizar una operación simple entre dos números (Ej. 2.18)
  *
  * @author Antonio Rodríguez Rodríguez
  * @date Octubre-2020
  *
  * Escriba un programa que haga las funciones de una calculadora básica: suma,
  * resta, multiplicación y división. Para ello, el programa debe leer dos números
  * enteros y un carácter que indique la operacióna realizar (+, -, *, /), mostrando
  * el resultado a continuación. Por ejemplo, ante esta entrada:
  *       34 12 +
  * el programa mostrará esta salida:
  *        46
  */
#include <iostream>

using namespace std;

int main()
{
    double x;
    double y;
    char signo;

cout << "Introduzca la operacion que desea realizar (+,-,*,/): " << endl;
cin >> signo;
cout << "Introduzca el primer numero: " << endl;
cin >> x;
cout << "Introduzca el segundo numero" << endl;
cin >> y;

    if (signo == '+')
    {
        cout << "El resultado es: " << x+y << endl;
    }

    if (signo == '-')
    {
        cout << "El resultado es: " << x-y << endl;
    }

    if (signo == '*')
    {
        cout << "El resultado es: " << x*y << endl;
    }

    if (signo == '/')
    {
        cout << "El resultado es: " << x/y << endl;
    }

}
