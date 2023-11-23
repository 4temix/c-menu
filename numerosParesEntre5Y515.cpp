#include <iostream>
#include <conio.h>
#include <windows.h>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
void impar();
int main (){
	int salir;
	bool valid = true;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	while(valid){
		cout<<"el numero "<<515<<" no es par pero debe estar"<<endl;
		impar();
		cout<<"el numero "<<5<<" no es par pero debe estar"<<endl;
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


void impar(){
	for(int i=515;i >= 5; i--){
			if(i % 2==0){
				cout<<"el numero "<<i<<" es par"<<endl;
			}else{
				continue;
			}
	}
}
