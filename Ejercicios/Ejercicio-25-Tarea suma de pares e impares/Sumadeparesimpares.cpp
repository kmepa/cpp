/*
    Proposito:Suma de pares e  impares 
    Autor :Kelin Mejia
    Fecha:16/02/22

*/


#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	
 setlocale(LC_CTYPE, "spanish");
   cout.precision(12);
   
   // Definici�n de las variables  que vamos a utilizar
   int pares=0 , impares=0, totalNumeros=0 ,numeros=0 ;
   
   // Entrada ,pedirle al usuario un n�mero , en el cual esatablecera cuanto n�meros pares e impares hay desde 1 hasta la cantidad ingresada por el usuario.
   cout<<"Ingresar un n�mero";
   cout<<endl;
   cin>>numeros;
   for (int i= 1 ;i <= numeros; i++ )
   {
   	if (i % 2 ==0){
   		pares=pares + i;
	   }
	   if ( i % 2 ==1){
	   	impares=impares + i;
	   }
	   cout << i<<" ";
   }
   // formula con la suma de total de pares e impares 
   totalNumeros=pares+impares; 
   cout<< endl;
   cout<<endl;
   cout <<"Total de  pares :"<< pares; // muestra el resultado de pares
   cout<< endl;
   cout << "Total de impares :"<< impares; // muestra el resultado de impares 
   cout << endl;
   cout<<" El total de n�meros pares e impares son :"<< totalNumeros; // muestra el total ,la suma de n�meros pares e impares 
   
   
    return 0;
}
