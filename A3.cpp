#include <stdio.h>

/******************************************************************************

Problema 33

Imprimir la suma y el producto de todos los posibles pares diferentes de enteros del 15 al 20

Bastidas Verdin Miguel Antonio 

@ELBASTIDAAS

*******************************************************************************/


int main()
{
    int numeros[] = {16,18,20};
    int suma = 0;
    int producto = 0;
    /*16,18,20*/
    for (int i=0; i<3; i++) {
        suma += numeros[i];
        producto *= numeros[i];
    }
    
    cout << "La suma de los pares entre 15 y 20 es: "<<suma;
    
    cout << "El producto de los pares entre 15 y 20 es:"<<producto;
    
    return 0;
}
