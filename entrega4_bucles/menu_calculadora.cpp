/**
  * @file menu_calculadora.cpp
  * @brief Menú para realizar operaciones básicas de calculadora
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Noviembre-2020
  *
  *
  * Escriba un programa que lea dos valores reales y que presente un menú con siete
  * alternativas:
  *    1. Suma
  *    2. Resta
  *    3. Producto
  *    4. División
  *    5. Modificar primer operando
  *    6. Modificar segundo operando
  *    7. finalizar el programa
  *
  * El programa deberá pedir al usuario que seleccione una de las opciones y presentar en la
  * salida estándar el resultado de la operación correspondiente.
  *
  * Tenga en cuenta que el usuario puede responder a la selección también con cualquiera de los * cuatro operadores + - * / para seleccionar alguna de las 4 opciones.
  *
  * Para ello, tenga en cuenta que el valor inicial de los operandos es cero, y que la solución
  * debe contener un bucle do?while junto con una instrucción switch para gestionar el menú.
  *
  */
#include <iostream>

using namespace std;

int main()
{
    double x = 0;
    double y = 0;
    char signo;

    do{
        cout << "--------MENU-------" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Producto" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modificar primer operando" << endl;
        cout << "6. Modificar segundo operando" << endl;
        cout << "7. finalizar el programa" << endl;

        cout << "Introduzca la operacion que desea realizar (+,-,*,/,5,6,7): " << endl;
        cin >> signo;

        switch(signo){

            case '5':
                cout << "Modifique el primer operando: "<< endl;
                cin >> x;
                cout << "Introduzca la operacion a realizar "<< endl;
                cin >> signo;

            case '6':
                cout << "Modifique el segundo operando"<< endl;
                cin >> y;
                cout << "Introduzca la operacion a realizar "<< endl;
                cin >> signo;

            case '+':
            case '1':
                cout << "El resultado es: " << x+y << endl;
                break;

            case '2':
            case '-':
                cout << "El resultado es: " << x-y << endl;
                break;

            case '3':
            case '*':
                cout << "El resultado es: " << x*y << endl;
                break;

            case '4':
            case '/':
                cout << "El resultado es: " << x/y << endl;
                break;



            case '7':
                cout << "Programa finalizado"<< endl;
                break;
        }
    } while(signo != '7');
}
