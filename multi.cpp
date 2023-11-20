#include <iostream>
#include <conio.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main(){
	system("title multiplicacion de un numero");
	cout<<"tabla de multiplocacion de un numero entre 1 y 12";cout<<endl;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	cout<<endl;
	bool valid = true;
	while(valid){
//		declaracion de variables
		int num = 0, multi = 0, salir;
//		bucle infinito
		while(true){
//			solicitando el valor a multiplicar
			cout<<"introduce el valor a multiplicar: ";cin>>num;
//			validando que el valor a multiplicar sea menor a 12
			if(num > 12){
				cout<<"el numero: ";cout<<num;cout<<" es mayor a 12"<<endl;
			}else{
				break;
			}
		}
//		bucle para imprimir la tabla del numero seleccionado
		for(int i =0; i <= 12; i++){
			multi = num*i;
			cout<<num;cout<<" x ";cout<<i;cout<<" = ";cout<<multi<<endl;
		}
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}
	
	getch();
	return 0;
}
