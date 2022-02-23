/*
    Proposito: Factura con descuento
    Autor :Kelin Mejia
    Fecha:09/02/22
    mond
*/


#include <iostream>
#include<cmath>

using namespace std;
int main()

{
	setlocale(LC_CTYPE, "Spanish");
	cout.precision(12);
   // DATOS DE ENTRADA
   double subtotal=0;
   double total=0;
   double impuesto =0.15;
   int descuento=0;
   double calculoDescuento=0;
   double calculoImpuesto=0;
   
   
   cout <<"Ingrese el subtotal de la factura";
   cin >> subtotal;
   
   cout<<"Ingrese el descuento (0,10,15,20)";
   cin>> descuento;
   
   
   
   //proceso
   calculoDescuento=(subtotal*descuento)/100;
   calculoImpuesto=(subtotal-calculoDescuento)*0.15;
   total= subtotal-calculoDescuento+calculoImpuesto;
   
   
   
   // salida
   
   cout <<endl;
   cout<< "Total a pagar es:"<< total;
   
  

	return 0;
}
