#include <stdio.h>
/******************************************************************************
Problema 38

Introducir 12 valores de A y 10 de B. Calcular la suma de los valores A, la de Los b, y la suma de los productos AB.


Bastidas Verdin Miguel Antonio

@ELBASTIDAAS

*******************************************************************************/


int main()
{
    int A[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int B[]={1,2,3,4,5,6,7,8,9,10};
    int sumatoriaA= 0;
    int sumatoriaB= 0;
    int producto = 0 ;
    int suma = 0;
    for (int i = 0; x < 12; i++)
    {
     int numeroactualA = A[i];
     sumatoriaA = sumatoriaA + numeroactualA;
    }
    for (int i = 0; x < 10; i++)
    {
     int numeroactualB = B[i];
     sumatoriaB = sumatoriaB + numeroactualB;
    }
    for(int i = 0, i < 12, i++)
    {
      producto = suma + A[i]*B[20-i]    
    }
    
    std::cout << "La suma del arreglo A es: " <<sumatoriaA << std::endl;
    std::cout << "La suma del arreglo B es: " <<sumatoriaB << std::endl;
    std::cout << "El producto de los arreglos AB es: " <<producto << std::endl;
    return 0;
}
