#include <iostream>
#include <conio.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main() {
	int num = 1, salir;
	bool valid = true;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	while(valid){

		while(num <= 240 ){
			if(num % 2 == 0){
				cout <<"el numero:"<<num,cout <<" es par ",cout<<endl;
				num++;
			}else{
				num++;
			}	
		}
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: num = 1; break;
		}

			
	}
	

	
	return 0;
}
