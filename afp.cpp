 #include <iostream>
#include <conio.h>
#include <windows.h>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;

double afp(double);

int main(){
	system("title AFP");
	cout<<"						 calculo del AFP"<<endl;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	bool valid = true;
	int salir;
	while(valid){
		cout<<endl;
		double sueldo;
		cout<<"introduce un sueldo para calcula el AFP: ";cin>>sueldo;cout<<endl;
		if(sueldo < 16262){
			cout<<"exento"<<endl;
		}else if(sueldo > 325250){
			sueldo = 325250;
			color(hConsole,3);cout<<"el AFP es RD$: ";color(hConsole,2);cout<<afp(sueldo)<<endl;color(hConsole,7);
		}else{
			color(hConsole,3);cout<<"el AFP es RD$: ";color(hConsole,2);cout<<afp(sueldo)<<endl;color(hConsole,7);
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

double afp(double AFP){
	AFP = (AFP*0.0287);
	return AFP;
}
