/*
    Proposito:Lanzamiento de dados
    Autor :Kelin Mejia
    Fecha:30/03/2022
    
*/

#include <iostream>
#include <string>

using namespace std;
int  main() {
 	int n1,n2 ;
 	char res;
 	
 	do{
 		n1=1 + (int)((rand()/ 32767.1)*6);
 		n2=1 + (int)((rand()/ 32767.1)*6);
 		
 		cout <<" Lanzamiento de dados ";
 		cout <<endl;
 		cout <<"El primer  dado cayo en :"<< n1<< " El segundo dado cayo en :" <<n2<< endl;
 		cout << " La suma de los dados son :"<<(n1+n2)<< endl<< endl;
 		
 		cout << "Desea seguir lanzando los dados ? S/N ";
 		cin>>res;
 		
	 }while (res=='s');
	
	system ("pause");
	
 }
