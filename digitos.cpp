#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main(){
	system("title Determinar los digitos de un numero");
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	string num2;
	int salir;
	bool valid=true;
	while(valid){
		cout<<"introduce un numero entre 0 y 999: ";cin>>num2;cout<<endl;
		if(num2 == "0"){
			system("pause");
			continue;
		}
		
		if(num2.length() < 4){
			color(hConsole,3);cout<<"el numero ";color(hConsole,2);cout<<num2;color(hConsole,3);cout<<" tiene ";cout<<num2.length();cout<<" digitos";cout<<endl;color(hConsole,7);
		}else{
			color(hConsole,4);cout<<"el numero ";cout<<num2;cout<<" es mayor a 999";cout<<endl;color(hConsole,7);
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
}
