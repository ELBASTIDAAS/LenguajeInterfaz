#include <iostream>
#include <iomanip>

/******************************************************************************
    Problema 31
    
Determinar si un entero dado es divisible entre 2 y 5 

Bastidas Verdin Miguel Antonio

@ELBASTIDAAS

*******************************************************************************/



using namespace std;

main()

{
   char w='S';
   int a;
   cout <<"introduzca un numero para determinar si";
   cout <<"\n es divisible de 2 , 5 : ";
   cin >>a;
   
      if (a%2 == 0)
      {
         
         cout<<"\t \n el numero " <<a << " es divisible de 2";
       }
      if (a%5 == 0)
      {
         
         cout<<"\t \n el numero " <<a << " es divisible de 5";
       }

    
}
