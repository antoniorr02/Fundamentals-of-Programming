#include <iostream>

using namespace std;

int main()
{
cout << "Tengase en cuenta que el día 0 corresponde al lunes, el 1 al martes y así progresivamente hasta el domingo que será el día 6." << endl;
    int salto;
    int dia_inicial;
cout << "Introduzca el número inicial correspondiente a su día" << endl;
cin >> dia_inicial;
cout << "Introduzca el número de dias que han pasado" << endl;
cin >> salto;
    int dia = (dia_inicial + salto)%7;
cout << "Su día será: " << dia << endl;
}
