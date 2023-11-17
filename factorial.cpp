#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int facto);

int main(){
	system("title el factorial de un numero");
	bool valid = true;
	while(valid){
		int num,salir;
		cout<<"introduce un numero para encontrar su factorial: ";cin>>num;cout<<endl;
		cout<<"el factorial de "<<num<<" es "<<factorial(num);
		
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2]  o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:	valid = false;system("cls");system("menu");break;
			case 2: num = 1; break;
		}
	}

}

int factorial(int facto){ 
	double acum = 1;
//	igualo el valor de "i" a lo que hay en la variable "facto" y le digo que si es diferente de 0 le reste 1 a "i"
	for(int i=facto; !i == 0; i--){
		/*lo que esta en la variable "acum" se va a multiplicar por el valor de i, luego ese valor se va a quedar guardado
		en la variable acum*/
		acum *=i;
		cout<<"acum vale "<<acum<<endl;
	}
	
	return acum;

}
