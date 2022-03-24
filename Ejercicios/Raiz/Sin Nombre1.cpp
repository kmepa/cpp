/*
    Proposito: El ing con la voz sexy ,dejo la raiz cuadrada de un número dado utilizando alguna función de la libreria math.h
    Autor :Kelin Mejia
    Fecha:23/03/2022
    
*/

#include <iostream>
#include<math.h>
using namespace std ;
int main(){
	int numero1=0, numero2=0;  // declarar las variables que vamos a utilizar //
	cout <<"Calcular la raiz cuadrada de un numero "<< endl;
	cout <<endl;
	cout <<"Ingrese un numero"<<endl;// ingresar un número//
	cin>>numero1;
	numero2=sqrt(numero1);
	cout << "El resultado es :"<<numero2<<endl;
	return 0;

}
