#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1;
    double x2;
    double x3;

cout << "Introduzca un valor para x1: " << endl;
cin >> x1;
cout << "Introduzca un valor para x1: " << endl;
cin >> x2;
cout << "Introduzca un valor para x1: " << endl;
cin >> x3;

    double media = (x1+x2+x3)/3;

cout << "La media aritmética para sus valores es: " << media << endl;

    double dato1 = x1-media;
    double dato2 = x2-media;
    double dato3 = x3-media;
    double desviacion = sqrt(((pow(dato1,2))+(pow(dato2,2))+(pow(dato3,2)))/3);

cout << "La desviación estandar para sus valores es: " << desviacion << endl;

}
