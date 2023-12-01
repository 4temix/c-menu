#include <iostream>
#include <conio.h>
#include <windows.h>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main(){
	system("title Las 12 tablas de multiplicar");
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
//	declaracion de variables
	int num = 1, salir;
	bool valid = true;
	while(valid){
		cout<<"					  las 12 tablas de multiplicacion"<<endl;
		cout<<endl;
		while(num<=12){
	//		espacio para separar las tablas
			cout<<endl;
	//		bucle para imprimir las tablas de multiplicacion
			for(int i = 0; i<=12; i++){
			cout<<num;cout<<" x ";cout<<i;cout<<" = ";cout<<num*i<<endl;
			}
			
			num++;
			 
		}
		
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";color(hConsole,4);cin>>salir;color(hConsole,7);
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: num = 1; break;
		}
	}

	
	getch();
}
