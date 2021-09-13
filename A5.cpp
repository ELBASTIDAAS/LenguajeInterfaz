/******************************************************************************
Problema 35 

Escribir en un programa que determine las constantes w,x,y,z en la ecuacion WX + Y = YZ - Z e imprimir la ecuacion

Bastidas Verdin Miguel Antonio
*******************************************************************************/
#include <stdio.h>

int main()
{
    int W,X,Y,Z;
    int ecuacion;
    cout << "Introduzca el valor de W";
    cin << W;
    cout << "Introduzca el valor de X";
    cin << X;
    cout << "Introduzca el valor de Y";
    cin << Y;
    cout << "Introduzca el valor de Z";
    cin << Z;
    
    ecuacion = X = (YZ - Z - Y)/W;
    
    cout << "El resultado de la ecuacion es:" << ecuacion<<endl;
    
    return 0;
}
