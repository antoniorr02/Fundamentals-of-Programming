#include<iostream>
#include<cmath>

using  namespace std;

int main()
{
    const double PI= 3.1416;
    double S;
cout << "Introduzca la superficie de su círculo:" << endl;
cin >> S;
cout << "Si la superficie de su cículo es = " << S << endl;
cout << "Entonces el radio es = " << sqrt(S/PI) << endl;
}
