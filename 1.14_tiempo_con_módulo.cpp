#include <iostream>

using namespace std;

int main()
{
    int segundos;
cout << "Introduzca una cantidad de segundos: " << endl;
cin >> segundos;
cout << "Teniendo en cuenta el numero de segundos que introdujo, corresponden a: "<< endl;

    int dias = segundos/86400;
    int horas = (segundos%86400)/3600;
    int minutos = ((segundos%86400)%3600)/60;
    int sobrante = (((segundos%86400)%3600)%60);

cout << dias <<" días " << endl;
cout << horas << " horas " << endl;
cout << minutos << " minutos " << endl;
cout << sobrante << " segundos " << endl;
}
