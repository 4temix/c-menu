#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	system("title Menu de opciones");
	int num;
	cout<<"						+----- �??� -----+-\n						       Menu- \n						+----- �??� -----+";cout<<endl;
	
	
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
	cout<<"							[11] salir\n";
	cout<<endl;
	cout<<"a donde quieres ir?: ";cin>>num;
	switch(num){
		case 1:system("cls");system("C:\\Users\\4temix\\Desktop\\menu\\notas.exe");break;
		case 2:system("cls");system("");break;
		case 3:system("cls");system("");break;
		case 4:system("cls");system("");break;
		case 5:system("cls");system("");break;
		case 6:system("cls");system("");break;
		case 7:system("cls");system("");break;
		case 8:system("cls");system("");break;
		case 9:system("cls");system("");break;
		case 10:system("cls");system("");break;
		case 11:system("exit"); break;
		default:cout<<"no existe";
	}
}