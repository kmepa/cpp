/*
    Proposito:Suma de pares
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
   
   // Definición de las variables  que vamos a utilizar
   int pares=0 , impares=0 ;
   
   // Entrada ,estableciendo de que número a que número  me muestre resultados ,aqui depende del usuario  si quiero modificar el 10 por otra cantidad .
   
   for (int i= 1 ;i <= 10; i++ )
   {
   	if (i % 2 ==0){
   		pares=pares + i;
	   }
	   
	   cout << i<<" ";
   }
    
   cout<< endl;
   cout<<endl;
   cout <<"Total de  pares :"<< pares; // muestra el resultado de pares
   cout<< endl;
  
   
   
    return 0;
}
