#include <iostream>
#include <string>
using namespace std;




int main(){

    int numfilas=3;
    int columnas;
    int util=17;
    int contador = 0;
    char m[numfilas][columnas];
    char v[17]={'a','b','c','d','e','f','g','h','j','i','k','a','a','e','t','y','i'};

    columnas=util/numfilas;
    for(int i=0;i<numfilas;i++){
        for(int j=0;j<columnas;j++){

            m[i][j] = v[contador];
            contador++;
        }
    }
    for(int i=0;i<numfilas;i++){
        for(int j=0;j<columnas;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}


