#include <iostream>
#include <conio.h>
#include <windows.h>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main() {
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	float total=0;
	int num = 260, salir;
	bool valid = true;
	while(valid){
		while(num > 10 ){
			if(num % 2 == 0){
				num--;
			}else{
				cout <<"el numero:"<<num,cout <<" es impar ",cout<<endl;
				total=total+=num;
				num--;
			}
		}
		cout<<"el total es: "<<total;cout<<endl;
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: num = 260;break;
		}
	}
	
	getch();	
	return 0;
}
