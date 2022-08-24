#include<iostream>

using namespace std;

int main(){

    int n, i;
    int operacion = 0;

    cin >> n;

    i = n;
    while(i > 1){
        i--;
        operacion = operacion + n*i;
    }
    cout << operacion;
}
