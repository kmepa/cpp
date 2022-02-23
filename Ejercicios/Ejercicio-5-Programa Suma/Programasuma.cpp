/*
    Proposito: Practicar
    Autor :Kelin Mejia
    Fecha:
    mond
*/


#include <iostream>
#include<cmath>

using namespace std;
int main()

{
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);
    float resultados=0;
    
    int a =0;
    int b= 0;
    int resultado;
      
      cout<< "Ingresar el valor de a:";
      cin>>a;
      cout << endl;
      cout<<"Ingresar el valor de b:";
      cin>>b;
      
    resultados= a+ b;
    
    cout<<"La suma de a+b es:" <<resultados;


	return 0;
}

