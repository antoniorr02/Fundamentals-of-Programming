/**
  * @file menu_circunferencia.cpp
  * @brief Men� para calcular datos sobre una circunferencia (Ej. 3.2)
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  * Realice un programa que permita realizar algunos c�lculos sobre una circunferencia.
  * En concreto calcular� el �rea del c�rculo y el per�metro correspondiente. El programa
  * presentar� un men� de opciones al usuario como el siguiente:
  *
  *
  * Al comienzo, el radio de la circunferencia se inicializar� a 1. La estructura del
  * programa consistir� en un bucle de tipo do?while cuyo cuerpo consistir� en presentar el
  * men�, leer una opci�n desde la entrada est�ndar y finalmente ejecutar y mostrar el
  * resultado de la acci�n seleccionada mediante una estructura de bifurcaci�n switch.
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
