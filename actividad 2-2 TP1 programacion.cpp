#include <iostream>

using namespace std;




int main()
{
   int resultado, gatoO, gatoA, hipogatusa;
   
   cout<<"Ingresa el cateto opuesto y el cateto adyacente de tu triangulito: "<<endl;
   cout<<"Cateto opuesto: ";	cin>>gatoO;
   cout<<"Cateto adyacente: ";  cin>>gatoA;
	
	hipogatusa=gatoO*gatoO + gatoA*gatoA;
	hipogatusa=hipogatusa/2;
	
   cout<<"el perimetro del triangulo es: "<<gatoO+gatoA+hipogatusa;	
	
	return 0;
}
