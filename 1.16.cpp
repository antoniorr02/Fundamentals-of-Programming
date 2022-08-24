#include<iostream>

using namespace std;

int main()
{
    double grados_decimales;

cout << "Introduzca un número de grados decimales: " << endl;
cin >> grados_decimales;

    int grados = grados_decimales;
    int minutos = (grados_decimales-grados)*60;
    double segundos = (((grados_decimales-grados)*60)-minutos)*60;

cout << "El resultado es: " << endl;
cout << grados << "º" << endl;
cout << minutos << "'" << endl;
cout << segundos << "''" << endl;
}
