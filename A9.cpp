#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
/******************************************************************************
Problema 39

Dados diez numeros, imprimir solo el mayor.
No suponer que los numeros estan enlistados en los datos de un
orden especial. Puede suponerse que no hay dos numeros iguales

Bastidas Verdin Miguel Antonio

@LEBASTIDAAS

*******************************************************************************/

int main()
{
	float maximo[10], max=0;
	int x=0;
	cin >> ("Ingrese 10 valores para determinar el numero maximo\n");
 
	for (int i = 1; i <= 10; i++){
		cout("valor %d\n",i);
		cin >> ("%f",&maximo[i]);
 
        if(maximo[i] > max){
			max = maximo[i];
			x = i;
		}
	}
 
	cout("El numero maximo es: %.2f y esta en la posicion %d",max,x);

	return 0;
}