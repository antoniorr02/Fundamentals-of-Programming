/**
  * @file primos_relativos.cpp
  * @brief Determinar si dos números son primos relativos
  *
  * @author Antonio Rodríguez Rodríguez
  * @date Enero-2020
  *
  * Escriba un programa que lea dos números enteros positivos y escriba en la
  * salida estándar la descomposición en primos y si son primos relativos.
  *
  * Recuerde que dos números son primos relativos si no tienen ningún divisor
  * común. Si disponemos de las dos secuencias que corresponden a la descomposición
  * en números primos de ambos números, son primos relativos si no tienen ningún
  * primo en común.
  *
  * El programa consiste en crear una clase diseñada para obtener la descomposición
  * en primos de un entero. Es una clase que permite almacenar una secuencia de primos
  * obtenidos a partir de un entero a descomponer. El programa usará dos
  * descomposiciones --dos objetos de esta clase-- para comprobar si dos números
  * son primos relativos.
  *
  * Un ejemplo de su ejecución es el siguiente:
  *    Introduzca dos números para ver si son primos relativos: 10 20
  *    10: 2 5
  *    20: 2 2 5
  *    Los números 10 y 20 no son primos relativos
  *
  * Note que la entrada de datos consiste en los dos números 10 y 20 y el programa
  * ha obtenido como resultado las tres últimas líneas: las descomposiciones y si
  * son primos relativos.
  *
  * Otro ejemplo en el que se obtiene un resultado de primos relativos es el siguiente:
  *    Introduzca dos números para ver si son primos relativos: 65536 1334025
  *    65536: 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2
  *    1334025: 3 3 5 5 7 7 11 11
  *    Los números 65536 y 1334025 son primos relativos
  *
  * Para resolver el problema, ya tiene un esqueleto con la mayor parte del problema
  * resuelto. En este programa no modifique las funciones ya resueltas de la clase.
  * Añada lo que considere oportuno y complete la función  main para que resuelva el
  * problema indicado.
  *
  */
#include <iostream>
using namespace std;

class FactoresPrimos {
private:
	static const int TAMANIO = 30;
	int vector_privado[TAMANIO]; // Factores primos, ordenados
	int total_utilizados;

	void Aniade(int nuevo){
	// FIXME: Completar añadiendo el elemento al final del vector
		vector_privado[total_utilizados] = nuevo;
		total_utilizados++;
	}

public:

	FactoresPrimos()
	:total_utilizados(0) {
	}

	int TotalUtilizados() {
		return total_utilizados;
	}

	int Capacidad() {
		return TAMANIO;
	}

	void EliminaTodos() {
		total_utilizados = 0;
	}

	int Elemento(int indice) {
		return vector_privado[indice];
	}

    // FIXME: Añadir función para cargar la secuencia a partir de un número
	void CargarSecuencia(int numero) {
        int i = 2;
        while(numero >= i){
            if(numero%i == 0){
                Aniade(i);
                numero = numero / i;
            } else
                i++;
        }
	}
};
// FIXME: Función que recibe dos descomposiciones y dice si son primos relativos
bool PrimosRelativos (FactoresPrimos lista1, FactoresPrimos lista2) {
	for (int i = 0; i < lista1.TotalUtilizados(); i++) {
		for (int j = 0; j < lista2.TotalUtilizados(); j++) {
			if (lista1.Elemento(i) == lista2.Elemento(j)) {
				return false;
			}
		}
	}
	return true;
}

int main() {
   int numero1, numero2; // Números para comprobar si son primos

   cout <<"Introduzca dos numeros para ver si son primos relativos: ";
   cin >> numero1 >> numero2;

   if (numero1>1 && numero2>1) {
        FactoresPrimos s1, s2;
        s1.CargarSecuencia(numero1);
        s2.CargarSecuencia(numero2);

        cout << numero1 << ": ";
        for (int i = 0; i < s1.TotalUtilizados(); i++) {
            cout << s1.Elemento(i) << " ";
        }
        cout << endl;

        cout << numero2 << ": ";
        for (int i = 0; i < s2.TotalUtilizados(); i++) {
            cout << s2.Elemento(i) << " ";
        }
        cout << endl;

        cout << "Los numeros " << numero1 << " y " << numero2;

        if (PrimosRelativos(s1, s2))
            cout << " son primos relativos";
        else
            cout << " no son primos relativos";

    } else
        cout << "Los numeros deben ser mayores que 1" << endl;
}
