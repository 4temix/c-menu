#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	system("title Menu de opciones");
	int num;
	bool valid = true;
	cout<<"						+----- •??• -----+-\n						       Menu- \n						+----- •??• -----+";cout<<endl;
	
	while(valid){
		cout<<endl;
		cout<<"		[1] numeros pares del 1 hasta el 240\n";
		cout<<endl;
		cout<<"		[2] numeros impares del 10 hasta el 260\n";
		cout<<endl;
		cout<<"		[3] 3 numeros y ordenar por su valor\n";
		cout<<endl;
		cout<<"		[4] tabla de multiplicacion de un numero entre 1 y 12\n";
		cout<<endl;
		cout<<"		[5] varias operacioones a un numero\n";
		cout<<endl;
		cout<<"		[6] las 12 tablas de multiplicacion automaticamente\n";
		cout<<endl;
		cout<<"		[7] 10 notas de alumnos\n";
		cout<<endl;
		cout<<"		[8] los mulltiplos de 8\n";
		cout<<endl;
		cout<<"		[9] 3 numeros, verificar si son iguales y hacer operaciones\n";
		cout<<endl;
		cout<<"		[10] numero entre 0 y 999, verificar la cantidad de digitos\n";
		cout<<endl;
		cout<<"		[11] numeros hasta que digite el 0, determinar y mostrar el numero de valores mayores a 0\n";
		cout<<endl;
		cout<<"		[12] numeros hasta que digite el 0, determinar y mostrar el numero de valores mayores a 0\n";
		cout<<endl;
		cout<<"							[13] salir\n";
		cout<<endl;
		cout<<"a donde quieres ir?: ";cin>>num;
		
		switch(num){
			case 1:valid = false; system("cls");system("pares");break;
			case 2:valid = false;system("cls");system("impares");break;
			case 3:valid = false;system("cls");system("mayor");break;
			case 4:valid = false;system("cls");system("multi");break;
			case 5:valid = false;system("cls");system("variasOP");break;
			case 6:valid = false;system("cls");system("12tablas");break;
			case 7:valid = false;system("cls");system("notasUP");break;
			case 8:valid = false;system("cls");system("multi8");break;
			case 9:valid = false;system("cls");system("iguales");break;
			case 10:valid = false;system("cls");system("digitos");break;
			case 11:valid = false;system("cls");system("numeros");break;
			case 12:valid = false;system("cls");system("tresImpares");break;
			case 13:valid = false;system("cls");system("cerrar");break;
			default:cout<<"no existen"<<endl;system("pause"); system("cls");
		}
	}
	

	
	return 0;
	getch();
}
