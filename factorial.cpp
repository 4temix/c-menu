#include <iostream>
#include <conio.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
unsigned long long factorial(int facto);

int main(){
	system("title el factorial de un numero");
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	bool valid = true;
	while(valid){
		int num,salir;
		cout<<"introduce un numero para encontrar su factorial: ";cin>>num;cout<<endl;
		cout<<"el factorial de ";color(hConsole,4);cout<<num;color(hConsole,7);cout<<" es ";color(hConsole,2);cout<<factorial(num)<<endl;color(hConsole,7);
		
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}
	
	getch();

}

unsigned long long factorial(int facto){ 
	unsigned long long acum = 1;
//	igualo el valor de "i" a lo que hay en la variable "facto" y le digo que si es diferente de 0 le reste 1 a "i"
	for(int i=facto; !i == 0; i--){
		/*lo que esta en la variable "acum" se va a multiplicar por el valor de i, luego ese valor se va a quedar guardado
		en la variable acum*/
		acum *=i;
	}
	
	return acum;

}
