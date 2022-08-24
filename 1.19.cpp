#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double e;
    double p;
    double Theta;

cout << "Introduzca el valor de a: " << endl;
cin >> a;
cout << "Introduzca el valor de b: " << endl;
cin >> b;
cout << "Introduzca el valor de c: " << endl;
cin >> c;
cout << "Introduzca el valor de e: " << endl;
cin >> e;
cout << "Introduzca el valor de p: " << endl;
cin >> p;
cout << "Introduzca el valor de Theta: " << endl;
cin >> Theta;

    double dividendo = (c+((pow(e,2))*b*(pow(sin(Theta),3))));
    double divisor = p-((pow(e,2))*a*pow(cos(Theta),3.0/5.0));
    double resultado = atan2(dividendo,divisor);

cout << "El resultado de la expresión para los datos que introdujo es: " << resultado << endl;

}

/*La función atan Calcula el valor principal del arco cuya tangente es x.
La función atan devuelve el arco tangente en el rango de [-pi/2,+pi/2] radianes.

La función atan2 calcula el valor principal del arco tangente y/x,
utilizando los signos de ambos argumentos para determinar el cuadrante del valor devuelto.
Puede ocurrir un error de dominio si ambos argumentos son cero.
La fución atan2 devuelve la arco tangente de y/x, en el rango [-pi,+pi] radianes

Por ello al haber una división dentro de la arcotangente, he utilizado atan2.*/
