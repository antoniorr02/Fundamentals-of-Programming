/**
  * @file diccionario.cpp
  * @brief Programa para listar un diccionario tras barajar
  *
  * @author Antonio Rodriguez Rodriguez
  * @date Diciembre-2020
  *
  * El programa es un ejemplo de uso de string y vectores-C con números aleatorios
  *
  * El programa no usará el tipo vector de char, aunque sí el vector-C con objetos de
  * tipo string. Deberá crear un vector con el siguiente contenido:
  *       "caballero",  "Dulcinea",   "historia",   "escudero",
  *       "rocinante",  "adelante",   "gobernador", "andantes",
  *       "voluntad",   "capitulo",   "menester",   "doncella",
  *       "caballeria", "castillo",   "Fernando",   "finalmente",
  *       "aventura",   "hermosura",  "palabras",   "gobierno",
  *       "intencion",  "cardenio",   "pensamientos", "Luscinda",
  *       "lagrimas",   "aposento",   "aventuras",  "quisiera",
  *       "libertad",   "desgracia",  "entendimiento", "pensamiento",
  *       "licencia",   "Mercedes",   "semejantes", "silencio",
  *       "valeroso",   "doncellas",  "labrador",   "caballerias",
  *       "cristiano",  "cristianos", "discreto",   "hicieron",
  *       "llegaron",   "quisiere",   "espaldas",   "muestras",
  *       "escuderos",  "discurso",   "grandeza",   "altisidora",
  *       "princesa",   "haciendo",   "renegado",   "provecho",
  *       "quedaron",   "resolucion", "presente",   "encantadores",
  *       "enamorado",  "valiente",   "encantado",  "molino",
  *       "licenciado", "necesidad",  "responder",  "discrecion",
  *       "ejercicio",  "hacienda",   "posadero",   "rocinante",
  *       "presencia",  "historias",  "presentes",  "verdadero"
  *
  * A continuación, deberá barajar las entradas del vector. Para ello, puede hacer tantos
  * intercambios como palabras tiene el diccionario. Un intercambio consiste en seleccionar
  * dos posiciones e intercambiar los contenidos de las dos casillas del vector.
  *
  * Finalmente, tendrá que listar el nuevo diccionario, con las mismas palabra pero en
  * distinto orden. Además, para cada palabra, debe dibujar tantos guiones como letras tenga
  * debajo. Por ejemplo, el listado puede comenzar así:
  *       1.- caballero
  *           ---------
  *       2.- dulcinea
  *           --------
  *       3.- valiente
  *           --------
  *       4.- valeroso
  *           --------
  *
  * y terminar:
  *       74.- licenciado
  *            ----------
  *       75.- escudero
  *            --------
  *       76.- provecho
  *            --------
  * Observe, además, que las letras que eran mayúsculas en cada palabra (número 2) ahora son
  * minúsculas, pues todas las palabras se transforman para garantizar que todo está
  * en minúscula.
  *
  * Para resolverlo, se puede considera una solución que incluya algunas funciones como:
  *    - Una función que devuelve un número double aleatorio del intervalor [0,1).
  *    - Una función que recibe un string y devuelve un nuevo string idéntico pero en minúscula.
  *    - Una función que recibe un entero positivo y calcula el número de dígitos que contiene.
  *    - Una función que recibe un entero (que indica el orden) y una palabra y devuelve un
  *      string que puede usarse para subrayar una palabra (tendrá espacios por cada dígito,
  *      3 espacios más y caracteres '-' por cada letra de la palabra).
  *
  * El programa principal consiste en:
  *    - Un bucle que baraja. Puede iterar tantas veces como considere oportuno (al menos tantas
  *      como palabras) y que en cada iteración genere dos valores aleatorios [0,1) que al
  *      multiplicarlos por el número de palabras selecciona una de las posiciones del vector.
  *    - Un bucle que dibuja el resultado. Para ello, se recorre el vector ya modificado y
  *       - Escribe número y palabra. Tenga en cuenta que la palabra es en minúscula.
  *       - Subraya la palabra (escribe un string obtenido con la correspondiente función).
  *
  */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

double uniforme01 (){
    double u01= rand() / (RAND_MAX + 1.0);
    return u01;
}

string minuscula(string cadena){
    for(int i = 0; i < cadena.size(); i++)
         cadena[i] = tolower(cadena[i]);
    return cadena;
    }

int Numerodigitos(int entero){
    int Numerodigitos= 0;
    while(entero > 0){
        entero = entero/10;
        Numerodigitos++;
    }
    return Numerodigitos;
}

string Subrayar(int orden, string palab){
    string aux;
    int espacios= Numerodigitos(orden)+2;
    for(int i = 0; i < espacios; i++)
        aux.push_back(' ');
    for(int j = 0; j < palab.size(); j++)
        aux.push_back('-');
    return aux;
    }

int main(){
    const int VALORES = 1000;
    string cadena[ ]= {"caballero",  "Dulcinea",   "historia",   "escudero",
    "rocinante",  "adelante",   "gobernador", "andantes",
    "voluntad",   "capitulo",   "menester",   "doncella",
    "caballeria", "castillo",   "Fernando",   "finalmente",
    "aventura",   "hermosura",  "palabras",   "gobierno",
    "intencion",  "cardenio",   "pensamientos", "Luscinda",
    "lagrimas",   "aposento",   "aventuras",  "quisiera",
    "libertad",   "desgracia",  "entendimiento", "pensamiento",
    "licencia",   "Mercedes",   "semejantes", "silencio",
    "valeroso",   "doncellas",  "labrador",   "caballerias",
    "cristiano",  "cristianos", "discreto",   "hicieron",
    "llegaron",   "quisiere",   "espaldas",   "muestras",
    "escuderos",  "discurso",   "grandeza",   "altisidora",
    "princesa",   "haciendo",   "renegado",   "provecho",
    "quedaron",   "resolucion", "presente",   "encantadores",
    "enamorado",  "valiente",   "encantado",  "molino",
    "licenciado", "necesidad",  "responder",  "discrecion",
    "ejercicio",  "hacienda",   "posadero",   "rocinante",
    "presencia",  "historias",  "presentes",  "verdadero"};

    const int NCADENA= sizeof(cadena)/sizeof(string);

    srand(time(NULL));

    for(int i = 0; i < NCADENA*3; i++){
        int indice1 = uniforme01()*NCADENA;
        int indice2 = uniforme01()*NCADENA;
        string temporal;
        temporal = cadena[indice1];
        cadena[indice1]=cadena[indice2];
        cadena[indice2]=temporal;
    }

    for(int i = 0; i < NCADENA; i++){
        cout << i+1 << ".-" << minuscula(cadena[i]) << endl;

        cout << Subrayar(i+1, cadena[i]);
        cout << endl;
    }
}




