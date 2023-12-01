#include <iostream>
#include <conio.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main(){
	system("title tres numeros iguales");
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	cout<<"introduce 3 valores iguales";cout<<endl;
	cout<<endl;
	float val1=0,val2=0,val3=0,suma=0,multi=0;
	int salir;
	bool valid = true;
	while(valid){
		cout<<"introduce un valor: ";cin>>val1;cout<<endl;
		cout<<"introduce otro valor: ";cin>>val2;cout<<endl;
		cout<<"introduce un ultimo valor: ";cin>>val3;cout<<endl;
		if(val1 == val2 && val2 == val3){
			suma = val1+val2;
			multi = suma*val3;
			cout<<"esta es la suma del valor 1 y 2: ";cout<<suma;cout<<endl;
			cout<<"esta es la multiplicacion del resultado de la suma y el valor 3: ";cout<<multi;cout<<endl;
		}else{
			cout<<"los valores introducidos son diferentes";cout<<endl;
		}
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";color(hConsole,4);cin>>salir;color(hConsole,7);
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}
	
	getch();
	return 0;
}
