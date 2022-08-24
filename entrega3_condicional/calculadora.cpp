/**
  * @file calculadora.cpp
  * @brief Programa para realizar una operaci�n simple entre dos n�meros (Ej. 2.18)
  *
  * @author Antonio Rodr�guez Rodr�guez
  * @date Octubre-2020
  *
  * Escriba un programa que haga las funciones de una calculadora b�sica: suma,
  * resta, multiplicaci�n y divisi�n. Para ello, el programa debe leer dos n�meros
  * enteros y un car�cter que indique la operaci�na realizar (+, -, *, /), mostrando
  * el resultado a continuaci�n. Por ejemplo, ante esta entrada:
  *       34 12 +
  * el programa mostrar� esta salida:
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
