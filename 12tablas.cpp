#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	system("title Las 12 tablas de multiplicar");
//	declaracion de variables
	int num = 1, salir;
	bool valid = true;
	while(valid){
		cout<<"las 12 tablas de multiplicacion"<<endl;
		cout<<endl;
		while(num<=12){
	//		espacio para separar las tablas
			cout<<endl;
	//		bucle para imprimir las tablas de multiplicacion
			for(int i = 0; i<=12; i++){
			cout<<num;cout<<" x ";cout<<i;cout<<" = ";cout<<num*i<<endl;
			}
			
			num++;
			 
		}
		
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2]  o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:	valid = false;system("cls");system("menu");break;
			case 2: num = 1; break;
		}
	}

	
	getch();
}
