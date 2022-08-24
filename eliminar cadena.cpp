#include <iostream>

using namespace std;

int main()
{
    const int MAXLEN=100;
    char frase[MAXLEN]; char frase_eliminar[MAXLEN]; char frase_final[MAXLEN];
    int cantidad_usada=0; char letra; int cantidad_usada2=0; char letra_eliminar;

    cout << "Introduce la frase: ";//cargamos vector inicial.
    for(int i=0; i<MAXLEN; i++){
        letra = cin.get();
        frase[i] = letra;
        if(frase[i]!='#')
            cantidad_usada++;
        else
            i=MAXLEN+1;
    }

    for(int i=0; i<cantidad_usada; i++){//cargar vector con lo que queremos eliminar.
        letra_eliminar = cin.get();
        frase_eliminar[i] = letra_eliminar;
        if(frase_eliminar[i]!='#')
            cantidad_usada2++;
        else
            i=MAXLEN+1;
    }

    int cantidad_maxima = cantidad_usada - cantidad_usada2 +1;
    int posicion = -1;
    bool diferente;

    for(int i=0; i<cantidad_maxima; i++){//empezamos a buscar donde esta la cadena que queremos eliminar.
        diferente = false;
        for(int n=0; n<cantidad_usada2 && !diferente; n++)
            if(frase[i+n]!=frase_eliminar[n])
                diferente = true;
        if (!diferente)
            posicion=i; // aquí ya lo tenemos buscado donde está
    }

        if(posicion!=-1){
            for(int i=0; i<posicion; i++){
                frase_final[i]=frase[i];
                cout << frase_final[i];
            }
            for(int i=posicion+cantidad_usada2; i<cantidad_usada; i++){
                frase_final[i]=frase[i];
                cout << frase_final[i];
            }
        }


    return 0;
}
