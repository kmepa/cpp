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
    cout << "Ingresar el primer número a la calculadora "<<endl;
    cout<< endl;
    cin >>numeroA;
    
    cout <<"Ingresar el segundo número a la calculadora"<<endl;
    cout<< endl;
    cin>>numeroB;
    
    
    suma= numeroA+numeroB; // Realizar la operación de la suma de los  números
    resta=numeroA-numeroB; // Realiztar la operación de la resta de los  números
    multiplicacion= numeroA*numeroB;//Realizar la operación de la multiplicación de los  números 
    division=numeroA/numeroB;// Aqui realizamos la ultima operación 
    
    // El programa deberá imprimir el resultado  de los dos números en suma,resta,multiplicacion,division 
    
    cout<<"La suma de los numeros es:" <<suma<< endl;
    cout << endl;
    
    cout<<"La resta de los numeros es:"<<resta<< endl;
    cout << endl;
    
    cout<<"La multiplicación de los numeros es :"<<multiplicacion<< endl;
    cout << endl;
    
    cout<<"La división de los numeros es:"<<division<< endl;
    
    return 0;
   }
    
