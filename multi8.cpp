#include <iostream>
#include <conio.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main (){
		HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
		system("title Multiplos del 8");
		int num = 8, salir;
		bool valid = true;
	while(valid){
		for(int i = 0; i<=63; i++){
			cout<<num;cout<<" x ";cout<<i;cout<<" = ";cout<<num*i<<endl;
		}
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";color(hConsole,4);cin>>salir;color(hConsole,7);
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}
	return 0;	
	getch();
}
