/*
    Proposito: Calculadora
    Autor :Kelin Mejia
    Fecha:02/02/2022
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
   float  suma =0 ,resta= 0 ,division=0 ,multiplicacion  = 0 ,numeroA=0 , numeroB=0 ;
    cout<< "Seguir las instrucciones de la calculadora " << endl; // Mensaje de inicio para seguir las instrucciones .
    cout<< endl;
    cout << "Ingresar el primer n�mero a la calculadora "<<endl;
    cout<< endl;
    cin >>numeroA;
    
    cout <<"Ingresar el segundo n�mero a la calculadora"<<endl;
    cout<< endl;
    cin>>numeroB;
    
    
    suma= numeroA+numeroB; // Realizar la operaci�n de la suma de los  n�meros
    resta=numeroA-numeroB; // Realiztar la operaci�n de la resta de los  n�meros
    multiplicacion= numeroA*numeroB;//Realizar la operaci�n de la multiplicaci�n de los  n�meros 
    division=numeroA/numeroB;// Aqui realizamos la ultima operaci�n 
    
    // El programa deber� imprimir el resultado  de los dos n�meros en suma,resta,multiplicacion,division 
    
    cout<<"La suma de los numeros es:" <<suma<< endl;
    cout << endl;
    
    cout<<"La resta de los numeros es:"<<resta<< endl;
    cout << endl;
    
    cout<<"La multiplicaci�n de los numeros es :"<<multiplicacion<< endl;
    cout << endl;
    
    cout<<"La divisi�n de los numeros es:"<<division<< endl;
    
    return 0;
   }
    
