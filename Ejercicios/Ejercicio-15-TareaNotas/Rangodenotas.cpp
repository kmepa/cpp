/*
    Proposito:Notas tabla de rangos 
    Autor :Kelin Mejia
    Fecha:09/02/22

*/


#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	
 setlocale(LC_CTYPE, "spanish");
   cout.precision(12);
   
   // Definición de las variables 
   int nota=0 ;
   cout<< "Bienvenidos a la notas en rango  alfabético ";
   cout<<endl;
   // Ingresar  la notas en número
    cout<< "Ingrese la nota que obtuvo:";
    cin>> nota;
    // vamos a indicar los rangos de las notas 
    
    
    if (nota>=96 && nota <= 100){
    	cout <<"Obtuviste una A++";
	} 
	
    if (nota<=95 && nota >=91){
    	cout <<"Obtuviste una A+";
	} 
	
	if (nota <=90 && nota>=86) {
		cout<< "Obtuviste una A";
	} 
	
    if (nota <= 85&& nota>=81){
    	cout <<"Obtuviste una A-";
	}

	if (nota<=80 && nota >=74){
		cout <<"Obtuviste una B+";
	}
	
	if (nota<=75 && nota >=71){
		cout <<"Obtuviste una B";
	}
	
		if (nota<=70 && nota >=66){
		cout <<"Obtuviste una B-";
	}
	
		if (nota<=65 && nota >=61){
		cout <<"Obtuviste una C+";
	}
	
		if (nota<=60 && nota >=56){
		cout <<"Obtuviste una C";
	}
	
		if (nota<=55 && nota >=51){
		cout <<"Obtuviste una C-";
	}

		if (nota<=50 && nota >=46){
		cout <<"Obtuviste una D+";
	}
	
		if (nota<=45 && nota >=41){
		cout <<"Obtuviste una D";
	}
	
		 if (nota<=40 && nota >=36){
		cout <<"Obtuviste una D-";
	}
	
		if (nota<=35 && nota >=31){
		cout <<"Obtuviste una E+";
	}
	
		if (nota<=30 && nota >=26){
		cout <<"Obtuviste una E";
	}
	
		if (nota<=25 && nota >=21){
		cout <<"Obtuviste una E-";
	}
	
		if (nota<=20 && nota >=16){
		cout <<"Obtuviste una F+";
	}
	
		if (nota<=15 && nota >=11){
		cout <<"Obtuviste una F";
	}
	
		if (nota<=10 && nota >=6){
		cout <<"Obtuviste una F Necesita mas trabajo";
	}
	
		if (nota<=5 && nota >=1){
		cout <<"Obtuviste una F-";
	}
	
		if (nota>=0 && nota <=0){
		cout <<"Obtuviste una F-- Su situacion es critica ";
		
	} if (nota>100 || nota <0 ){
    	cout<< "Ingrese una nota entre 0-100";
		
		}
    return 0;
}
