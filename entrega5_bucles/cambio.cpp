/**
  * @file cambio.cpp
  * @brief Tabla de cambio entre d�lar y euros
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  * Escriba un programa que muestre una tabla de conversi�n entre d�lares y
  * euros. Para ello, el programa pedir� desde la entrada est�ndar el cambio
  * de moneda en curso ?cu�ntos euros vale un d�lar? y el n�mero de d�lares
  * para los que se desea tener la conversi�n. Utilice un bucle de tipo for
  * para resolver el problema.
  *
  * Una posible ejecuci�n ser�a la siguiente:
  *
  *      �Cu�ntos euros vale un d�lar? 0.733
  *      �L�mite de cambio? 12
  *      Tabla de cambio:
  *      1 $ = 0.733 e
  *      2 $ = 1.466 e
  *      3 $ = 2.199 e
  *      4 $ = 2.932 e
  *      5 $ = 3.665 e
  *      6 $ = 4.398 e
  *      7 $ = 5.131 e
  *      8 $ = 5.864 e
  *      9 $ = 6.597 e
  *      10 $ = 7.33 e
  *      11 $ = 8.063 e
  *      12 $ = 8.796 e
  */

#include <iostream>
using namespace std;

int main(){

    double equivalencia, conversion;
    int limite;

    cout << "Introduzca cuantos euros vale un dolar" << endl;
    cin >> equivalencia;
    cout << "Introduzca un limite de dolares" << endl;
    cin >> limite;

    for(int i = 0;i <= limite;i++){
        conversion = equivalencia * i;
        cout << i << " dolares " << conversion << " euros" << endl;
    }

}
