//Ejercicio 1.4 — Cálculo de diferencia en céntimos. Comente brevemente la razón del resultado erróneo obtenido en el programa anterior y proponga una solución.

#include <iostream>

using namespace std;

int main()
{
    double precio;
cout << "Precio en euros: " << endl;
cin >> precio;

    double entregado;
cout << "Entregado: " << endl;
cin >> entregado;

    double vuelta = entregado - precio;
cout << "Vuelta en euros: " << double(vuelta) << endl;
}

/*Pienso que el problema del programa anterior era que el programador trato de pasar de euros a centimos,
lo que provocó que al usar un dato de tipo int(entero) se redondeara la vuelta dando un dato erroneo.

Yo, como solución he expresado la solución en un dato de tipo real (en euros), evitando así el redondeo.
Además como se puede observar he dividido el codigo, separando las variables precio y entregado, pues creo
que así queda mas legible, aunque esto ultimo no afecta a la solución.*/

