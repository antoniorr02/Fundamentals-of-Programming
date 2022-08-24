/**
  * @file menu_circunferencia.cpp
  * @brief Menú para calcular datos sobre una circunferencia (Ej. 3.2)
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  * Realice un programa que permita realizar algunos cálculos sobre una circunferencia.
  * En concreto calculará el área del círculo y el perímetro correspondiente. El programa
  * presentará un menú de opciones al usuario como el siguiente:
  *
  *
  * Al comienzo, el radio de la circunferencia se inicializará a 1. La estructura del
  * programa consistirá en un bucle de tipo do?while cuyo cuerpo consistirá en presentar el
  * menú, leer una opción desde la entrada estándar y finalmente ejecutar y mostrar el
  * resultado de la acción seleccionada mediante una estructura de bifurcación switch.
  *
  */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const double PI = 3.141592654;

    double radio = 1;
    char opcion;

    do {
        cout << "---------MENU---------" << endl;
        cout << "1. Cambiar el valor del radio" << endl;
        cout << "2. Mostrar el valor del radio" << endl;
        cout << "3. Calcular el area del circulo" << endl;
        cout << "4. Calcular el perimetro de la circunferencia" << endl;
        cout << "5. Finalizar el programa" << endl;

        cout << "----Elija una opcion----" << endl;
        cin >> opcion;

        switch(opcion){
            case '1':
                cout << "Introduzca un nuevo valor para el radio" << endl;
                cin >> radio;
                cout << "Introduzca la operacion a realizar "<< endl;
                cin >> opcion;
            case '2':
                cout << "Si su radio es = " << radio << endl;
            case '3':
                cout << "El area es: " << PI * pow(radio,2) << endl;
                break;
            case '4':
                cout << "El perimetro es: " << 2 * PI *radio << endl;
                break;
            case '5':
                cout << "Fin del program" << endl;
                break;
        }

    } while(opcion!='5');

}
