#include<iostream>

using namespace std;

int main()
{
    int num;
cout << "Introduzca un número entero de tres dígitos: " << endl;
cin  >>  num;
cout <<  num/100 << endl;
cout <<  (num%100)/10 << endl;
cout <<  (num%100)%10 << endl;
}
