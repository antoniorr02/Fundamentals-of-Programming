/**
  * @file encriptado.cpp
  * @brief Programa para encriptar/desencriptar con el método de rotación
  *
  * @author Antonio Rodríguez Rodríguez
  * @date Octubre-2020
  *
  * Un algoritmo simple de encriptado consiste en cambiar las letras para hacer el mensaje
  * no legible. Entre los más simples, podemos usar el de rotación, usado por Julio César
  * durante el imperio romano. La clave es un simple número que indica cuál es la rotación:
  * todas las letras se cambian por la que corresponde a su posición en el alfabeto más la
  * clave. Se llama de rotación porque se entiende que después de la ’z’ viene la ’a’, es
  * decir, el salto es una rotación en el alfabeto.
  *
  * Escriba un programa que recibe tres datos:
  *   - Una letra ('e' o 'd') que indica si se quiere encriptar o desencriptar,
  *     respectivamente.
  *   - Una clave, es decir, un entero que corresponde al salto para codificar.
  *   - Una letra que corresponde a la letra a codificar/decodificar.
  *
  * Por ejemplo, si la entrada es:
  *    e3a
  * El programa deberá escribir: d
  *
  * Lógicamente, con la entrada:
  *    d3d
  * El programa deberá escribir la original: a
  *
  * Finalmente, tenga en cuenta que debe codificar tanto minúsculas como mayúsculas. Las
  * minúsculas se codifican con otra minúscula y las mayúsculas de forma similar. Si un
  * carácter no es una letra del alfabeto inglés, se escribe sin modificar.
  *
  */
#include <iostream>

using namespace std;

int main()
{
    char opcion;
    int clave;
    char letra;

cout << "Introduzca, e, si quiere encriptar." << endl;
cout << "Introduzca, d, si quiere desencriptar." << endl;
cout << "Introduzca una clave con un valor menor que 26. " << endl;
cout << "Introduzca la letra. " << endl;
cout << "Ejemplo: e3a" << endl;
cin >> opcion >> clave >> letra;


    if (opcion == 'e')
    {
        char encriptado = letra + clave;

        if(letra >= 'a' && letra <= 'z'){
            if(encriptado <= 'z'){
            cout << encriptado << endl;
            }
            if(encriptado > 'z'){
            char minus_encrip = encriptado - 26;
            cout << minus_encrip << endl;
            }
        }

        if(letra <= 'Z' && letra >= 'A'){
            if(encriptado <= 'Z'){
            cout << encriptado << endl;
            }
            if(encriptado > 'Z'){
            char mayus_encrip = encriptado - 26;
            cout << mayus_encrip << endl;
            }
        }
    }

    if (opcion == 'd')
    {
        char desencriptado = letra - clave;

        if(letra >= 'a' && letra <= 'z'){
            if(desencriptado >= 'a'){
            cout << desencriptado << endl;
            }
            if(desencriptado < 'a'){
            char minus_desenc = desencriptado + 26;
            cout << minus_desenc << endl;
            }
        }

        if(letra <= 'Z' && letra >= 'A'){
            if(desencriptado >= 'A'){
            cout << desencriptado << endl;
            }
            if(desencriptado < 'A'){
            char mayus_desenc = desencriptado + 26;
            cout << mayus_desenc << endl;
            }
        }


    }

}
