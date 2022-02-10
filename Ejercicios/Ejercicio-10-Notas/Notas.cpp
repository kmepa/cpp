/*
    Proposito:Notas con metodologia americana 
    Autor :Kelin Mejia
    Fecha:
    mond
*/


#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	
 setlocale(LC_CTYPE, "spanish");
   cout.precision(12);
   
   // Definicion de las variables 
   int nota=0 ;
   
    cout<< "Ingrese la nota que obtuvo:";
    cin>> nota;
    // vamos a indicar los rangos de las notas 
    
    if (nota>100 || nota <0 ){
    	cout<< "Ingrese una nota entre 0-100";
    	return 0 ;
	}else 
    
    if (nota>=95 && nota <= 100){
    	cout <<"Obtuviste una A";
	} else
	
    if (nota>=85 && nota <= 94){
    	cout <<"Obtuviste una B";
	} else
	
	if (nota >=75 && nota<=93) {
		cout<< "Obtuviste una C";
	} 
	
    if (nota >=65 && nota<=74){
    	cout <<"Obtuviste una D";
	}
	if (nota>=60 && nota <=64){
		cout <<"Obtuviste una E";
	}
	if (nota >= 0 && nota <60){
		cout <<"Obtuviste una F";
	}
   
    return 0;
}
