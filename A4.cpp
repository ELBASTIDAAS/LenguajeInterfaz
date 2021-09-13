/******************************************************************************

Problema 34

Determinar si la suma 3^1974 + 3^1974 + 3^1974 es igual a 3^1975  

Bastidas Verdin Miguel Antonio
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() 
{
    int suma;
    double numero = 3;
    double elevado = pow(numero, 1974);
    double elevado1 = pow(numero, 1976);
    
    suma = elevado + elevado + elevado;
    if (suma == elevado1)
    {
        cout << "La suma es igual" << endl;
    }
    return 0;
}
