#include <iostream>

using namespace std;




int main()
{
   int num1, num2, num3, num4, suma, promedio;
   
   cout<<"Ingresar 4 numeros de tu eleccion: "<<endl;
   cout<<"Primer numero: ";
		cin>>num1;
   cout<<"Segundo numero: ";
		cin>>num2;
   cout<<"Tercer numero: ";
   		cin>>num3;
   cout<<"Cuarto numero: ";
  		cin>>num4;
   
   suma=num1+num2+num3+num4;
   promedio=suma/4;
   
   cout<<"La suma final es: "<<suma<<endl;
   cout<<"El promedio en total es: "<<promedio;

   
	return 0;
}
