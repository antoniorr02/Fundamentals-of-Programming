#include<iostream>
using namespace std;

    void Triangulo(int n, char o){
        cout << "Triangulo: \n" << endl;
        for(int j = 0; j < n; j++){
            for(int i = 0; i <= j; i++){
                cout << o;
            }
            cout << endl;
        }
    }

    void Cuadrado(int n,char o){
        cout << "\nCuadrado: \n" << endl;
        int rec = n-1;
        for(int a = 0; a <= rec; a++){
            for(int b = 0; b <= rec; b++){
                if((a==0)||(b==0)||(a==rec)||(b==rec)){
                    cout << o;
                } else {
                    cout << " ";
                }
            }
        cout << endl;
        }
    }

    void Rombo(int n,char o){
        cout << "Rombo: \n" << endl;
        for(int y = 0; y < n ; y++ ){
            for(int x = 0; x < n-y-1; x++){
                cout << " ";
            }
            for(int x = 0; x < 2 * y + 1; x++){
                cout << o;
            }
            cout << endl;
        }
        for(int y = n-2; y >= 0; y--){
            for(int x = 0; x < n-y-1; x++){
                cout << " ";
            }
            for(int x = 0; x < 2*y+1; x++){
                cout << o;
            }
            cout  << endl;
        }
    }

int main(){

    int n;
    char o = '*';

    cout << "Introduzca un numero entero" << endl;
    cin >> n;

    int m = n%2;

    if(m==0){
        Triangulo(n,o);
        Cuadrado(n,o);
    } else {
        Triangulo(n,o);
        Cuadrado(n,o);
        Rombo(n,o);
    }
}
