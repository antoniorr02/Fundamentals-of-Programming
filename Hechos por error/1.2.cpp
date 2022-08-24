//Ejercicio 1.2 — Parte entera de un número real. Escriba un programa que lea un número real, y escriba la parte entera descartando la parte fraccionaria.

#include<iostream>

using  namespace std;

int main()
{
    double a;
cout << "Introduzca un número:" << endl;
cin >> a;
cout << "Su número es = " << int(a)<< endl;
}
