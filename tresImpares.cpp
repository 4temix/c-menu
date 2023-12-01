#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
double raiz(int,int, int);
int main(){
	bool valid = true;
	int salir;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	while(valid){
		cout<<endl;
		int a,b,c;
		cout<<"dame un primer numero impar: ";cin>>a;cout<<endl;
		if(a %2 == 0){
			cout<<"el numero introducido no es impar ";
			system("pause");
			system("cls");
			continue;
		}
		cout<<"dame un segundo numero impar: ";cin>>b;cout<<endl;
		if(b %2 == 0){
			cout<<"el numero introducido no es impar ";
			system("pause");
			system("cls");
			continue;
		}
		cout<<"dame un tercer numero impar: ";cin>>c;cout<<endl;
		if(c %2 == 0){
			cout<<"el numero introducido no es impar ";
			system("pause");
			system("cls");
			continue;
		}
		cout<<" la raiz cuadrada es: "<<raiz(a,b,c)<<endl;
		
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";color(hConsole,4);cin>>salir;color(hConsole,7);
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}

}


double raiz(int r, int x, int y){
	int suma = r+x+y;
	cout<<"la suma es: "<<suma<<endl;
	return sqrt(suma);	
}
