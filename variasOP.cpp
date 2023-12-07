#include <iostream>
#include <conio.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main (){
	system("title operaciones basicas");
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	int s=0, r=0, d=0,
	m=0, por=0 ,a, e, salir;
	bool valid = true;
	while(valid){
		cout <<"entre 1 valor:";
		cin >> a; cout <<endl;
		cout<< "entre valor 2:";
		cin>> e; cout <<endl;
		s=(a+e);
		r=(a-e);
		d=(a/e);
		m=(a*e);
		por=(s+r+d+m)/4;
		cout.precision(2);
		cout<<"estas son las operaciones matematicas basicas\n";
		cout <<"la suma es:"<<s,cout<<endl;
		cout <<"la resta es:"<< r,cout<<endl;
		cout <<"la division es:"<< d,cout<<endl;
		cout <<"la nultiplicacion es:"<< m,cout<<endl;
		cout <<"el porsentaje es:"<< por,cout<<endl;
		system("pause");
		cout<<endl;
		cout<<"presione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, presione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";color(hConsole,4);cin>>salir;color(hConsole,7);
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}

	getch();
	return 0;
}
