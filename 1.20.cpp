#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double media;
    double desviacion;

cout << "Introduzca el valor para la abcisa (x): " << endl;
cin >> x;
cout << "Introduzca el valor de la media: " << endl;
cin >> media;
cout << "Introduzca el valor de la desviacion tipica: " << endl;
cin >> desviacion;

    double const PI = 3.141592654;
    double const e = 2.718281828;
    double producto1 = ((1/(desviacion*sqrt(2*PI))));
    /*double exponente = pow((x-media)/(desviacion),2);
    double exponente1 = -(0.5)*exponente;
    double producto2 = pow(e,exponente1);*/
    double producto2 = pow(e,-(0.5)*pow((x-media)/(desviacion),2));

    double resultado = producto1*producto2;


cout << "Para los valores que ha introducido, el valor de la funcion gaussiana es: " << resultado << endl;
}
