/**
  * @file sexagesimal2grados.cpp
  * @brief Programa para pasar de grados/minutos/segundos a grados
  *
  * @author Antonio Rodr�guez Rodr�guez
  * @date Octubre-2020
  *
  * El programa recibe como entrada un entero (entre 0 y 359) que indica grados, un car�cter
  * 'g' que simboliza grados, un entero (entre 0 y 59), un car�cter 'm' que simboliza minutos
  * y un real en el intervalo [0,60) seguido de un car�cter 's' que simboliza segundos. Como
  * salida obtiene el n�mero de grados correspondiente como n�mero real.
  * Por ejemplo, con la entrada:
  *    34g 34m 1.2s
  * deber�a obtener la salida:
  *    34.467 grados
  *
  * Adem�s, deber� comprobar que se cumplen las condiciones, es decir, si alg�n valor no
  * est� en el rango correcto o alg�n car�cter simb�lico no es el esperado, la salida debe
  * indicar que hay un error de formato.
  */

  #include <iostream>

  using namespace std;

  int main()
  {
    double grados;
    double minutos;
    double segundos;

cout << "Indique los grados" << endl;
cin >> grados;
cout << "Indique los minutos" << endl;
cin >> minutos;
cout << "Indique los segundos" << endl;
cin >> segundos;

double seg_min;

    if(0.0 <= segundos && segundos <= 59.0){
        seg_min = (segundos/60)+minutos;
    } else {
        cout << "Error en los datos introducidos, compruebe que el intervalo de segundos esta entre [0,59)" << endl;
    }

double min_gra;

    if(0.0 <= seg_min && seg_min <= 59.0){
        min_gra = (seg_min/60);
    } else {
        cout << "Error en los datos introducidos, compruebe que el intervalo de minutos tiene un valor entero y esta entre [0,59)" << endl;
    }

double resultado;
resultado = grados + min_gra;

    if(0.0 <= resultado && resultado <=359.0){
        cout << "Los datos introducidos corresponden a: " << resultado << " grados" << endl;
    } else {
        cout << "Error en los datos introducidos, compruebe que el intervalo de grados tiene un valor entero y esta entre [0,359)" << endl;
    }


}
