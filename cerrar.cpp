
#include <iostream>
#include <windows.h>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;

int main(){
	system("title cerrar");
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	int salir;
	cout<<endl;
	bool valid = true;
	while(valid){
		cout<<endl;
		color(hConsole,3);cout<<"						seguro que quieres salir?"<<endl;color(hConsole,7);
		cout<<"			 	presione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir, presione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] para regresar al menu ";cin>>salir;
		switch(salir){
			case 1:valid = false;system("cls");cout<<"hasta la proxima";system("exit");break;
			case 2:valid = false;system("cls");system("menu");break;
			default: cout<<"valor no reconocido";
		}
	}

}
