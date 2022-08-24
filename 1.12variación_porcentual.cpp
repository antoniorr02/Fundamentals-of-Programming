#include <iostream>

 using namespace std;

 int main()
 {
    double valor_inicial, valor_final;

cout << "Introduzca el valor inicial: " << endl;
cin  >>  valor_inicial;

cout << "Introduzca el valor final " << endl;
cin  >>  valor_final;

    double variacion = 100*(valor_final-valor_inicial)/valor_inicial;

cout << "La variación porcentual ha sido del " <<  variacion  << "%" << endl;
 }
