#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	system("title multiplicacion de un numero");
	cout<<"tabla de multiplocacion de un numero entre 1 y 12";cout<<endl;
	cout<<endl;
	bool valid = true;
	while(valid){
//		declaracion de variables
		int num = 0, multi = 0, salir;
//		bucle infinito
		while(true){
//			solicitando el valor a multiplicar
			cout<<"introduce el valor a multiplicar: ";cin>>num;
//			validando que el valor a multiplicar sea menor a 12
			if(num > 12){
				cout<<"el numero: ";cout<<num;cout<<" es mayor a 12"<<endl;
				system("pause");
			}else{
				break;
			}
		}
//		bucle para imprimir la tabla del numero seleccionado
		for(int i =0; i <= 12; i++){
			multi = num*i;
			cout<<num;cout<<" x ";cout<<i;cout<<" = ";cout<<multi<<endl;
		}
		
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:	valid = false;system("cls");system("menu");break;
			case 2: ;break;
		}
	}
	
	getch();
	return 0;
}
