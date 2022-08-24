#include <iostream>

using namespace std;

int main()
{
    int segundos;
cout << "Introduzca una cantidad de segundos: " << endl;
cin >> segundos;
cout << "Teniendo en cuenta el numero de segundos que introdujo, corresponden a: "<< endl;

    int dias = segundos/86400;
    int horas = (segundos/3600)-(dias*24);
    int minutos = (segundos/60)-(dias*1440)-(horas*60);
    int sobrante = segundos-(dias*86400)-(horas*3600)-(minutos*60);

cout << dias <<" días " << endl;
cout << horas << " horas " << endl;
cout << minutos << " minutos " << endl;
cout << sobrante << " segundos " << endl;
}

