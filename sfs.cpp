#include <iostream>
#include <conio.h>
#include <windows.h>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";
using namespace std;

void sfs (long double, long double&);

int main (){
	system("title seguro social");
	cout<<"					   calculadora de seguro social"<<endl;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	bool valid = true;
	int salir;
	long double monto, total;
	while(valid){
		cout<<"introcude una cantidad: ";cin>>monto;
		sfs(monto,total);
		cout<<"el valor mensual a pagar es : ";color(hConsole,2);cout<<total;color (hConsole,7);cout<<endl;
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}

	
}

void sfs (long double monto, long double& total){
	total = (monto * 0.0304);
}
