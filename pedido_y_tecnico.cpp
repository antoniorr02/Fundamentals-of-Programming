/**
  * @file pedido_y_tecnico.cpp
  * @brief Programa para asignar pedidos a t�cnicos con m�nimo costo
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Diciembre-2020
  *
  * Una empresa de servicios dispone de n t�cnicos y n pedidos por atender.
  * La empresa dispone de una matriz C de nxn de tarifas donde cada Cij indica el
  * precio que cobra el t�cnico i por atender el pedido j. Supondremos que Cij es
  * un entero mayor estricto que 0.
  *
  * Se desea asignar cada t�cnico a un pedido. La asignaci�n es b�sicamente una
  * tupla de n valores con las asignaciones realizadas. Por ejemplo, si tenemos
  * 5 t�cnicos y 5 pedidos, la soluci�n 2 4 3 1 0 indica que el t�cnico 0 tiene
  * asignada la tarea 2, el t�cnico 1 la tarea 4, etc.
  *
  * Para resolver el problema, se pueden seguir varias estrategias. La m�s sencilla
  * ser�a la siguiente:
  *    - Para cada t�cnico, de entre los pedidos que no han sido asignados
  *      previamente a ning�n otro t�cnico, le asignamos el m�s econ�mico.
  *    - Se empieza con cualquier t�cnico, por ejemplo, el primero (n�mero 0).
  *
  * El programa debe leer la matriz con los costes de las asignaciones. Para ello,
  * leer� dos enteros (filas y columnas) y los valores de la matriz por filas.
  *
  * Como resultado, deber� indicar la soluci�n obtenida con la estrategia anterior y
  * el coste total que se consigue.
  *
  * Un ejemplo de ejecuci�n es:
  *     3 3
  *     21 12 31
  *     16 14 25
  *     12 18 20
  *
  *     Asignaciones:
  *     T�cnico 0 -> Pedido 1, coste 12
  *     T�cnico 1 -> Pedido 0, coste 16
  *     T�cnico 2 -> Pedido 2, costo 20
  *     Coste total: 48
  *
  * Para resolverlo, deber� declarar una variable matriz para almacenar los costes
  * de la asignaci�n. En la soluci�n, por ejemplo, puede usar un vector que contendr�
  * la tupla de asignaciones soluci�n y otro que indicar� si una tarea ya ha sido
  * asignada o no.
  *
  * Nota. Observe que la estrategia indicada anteriormente no garantiza la obtenci�n
  * de una asignaci�n �ptima, es decir, con un coste total m�nimo.
*/
#include<iostream>

using namespace std;

int main(){


    const int max_fila = 10;
    const int max_columna = 10;
    int n_tecnicos, n_pedidos;

    int coste[max_fila][max_columna];
    int asignaciones[max_fila];
    bool asignadas[max_fila];

    cin >> n_tecnicos >> n_pedidos;

    for(int i = 0; i < n_tecnicos; i++){
        for(int j = 0; j < n_pedidos; j++){
            cin >> coste[i][j];
        }
    }

    for(int i = 0; i < n_tecnicos; i++){
        asignadas[i] = false;
    }

    for(int j=0; j<n_tecnicos; j++){
        int minimo=100;
        for (int i=0; i < n_tareas; i++){
            if ((matriz[j][i] < minimo)&&(asignadas[i]==false)){
                minimo=matriz[j][i];
                int pos_minimo=i;
            }
        }
        asignaciones[j] = pos_minimo;
        asignadas[pos_minimo]=true;
    }

    int coste_total = 0;

    for(int j = 0; j < n_tecnicos; j++){
        cout << "El trabajador " << j << " va a hacer el trabajo "
        << asignaciones[j] << " y va a costar " << coste[j][asignaciones[j]] << endl;
    }
    cout << " El coste total es: " << coste_total << endl;
}
