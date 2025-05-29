#include <iostream>

using namespace std;




int main()
{
   int num1, num2, num3, num4, suma, multi;
   
   cout<<"Ingresar 4 numeros de tu eleccion: "<<endl;
   cout<<"Primer numero: ";
		cin>>num1;
   cout<<"Segundo numero: ";
		cin>>num2;
   cout<<"Tercer numero: ";
   		cin>>num3;
   cout<<"Cuarto numero: ";
  		cin>>num4;
   
        suma=num1 + num2;
   cout<<"La suma entre los dos primeros numeros da: "<<suma<<endl;
        multi=num3*num4;
   cout<<"La multiplicacion entre los dos ultimos numeros da: "<<multi;

   
	return 0;
}
