#include <iostream>
#include <conio.h>
#include <windows.h>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main(){
	system("title Menu de opciones");
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	int num;
	bool valid = true;
	cout<<"						+----- •??• -----+-\n						       Menu- \n						+----- •??• -----+";cout<<endl;
	
	while(valid){
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"1";color(hConsole,7);cout<<"] numeros pares del 1 hasta el 240\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"2";color(hConsole,7);cout<<"] numeros impares del 10 hasta el 260\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"3";color(hConsole,7);cout<<"] 3 numeros y ordenar por su valor\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"4";color(hConsole,7);cout<<"] tabla de multiplicacion de un numero entre 1 y 12\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"5";color(hConsole,7);cout<<"] varias operacioones a un numero\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"6";color(hConsole,7);cout<<"] las 12 tablas de multiplicacion automaticamente\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"7";color(hConsole,7);cout<<"] 10 notas de alumnos\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"8";color(hConsole,7);cout<<"] los mulltiplos de 8\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"9";color(hConsole,7);cout<<"] 3 numeros, verificar si son iguales y hacer operaciones\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"10";color(hConsole,7);cout<<"] numero entre 0 y 999, verificar la cantidad de digitos\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"11";color(hConsole,7);cout<<"] numeros hasta que digite el 0, determinar y mostrar el numero de valores mayores a 0\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"12";color(hConsole,7);cout<<"] introducir tres numeros impares, sumarlos y encontrar la raiz\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"13";color(hConsole,7);cout<<"] factorial de un numero\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"14";color(hConsole,7);cout<<"] numeros pares entre 5 y 515\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"15";color(hConsole,7);cout<<"] calcular el AFP\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"16";color(hConsole,7);cout<<"] calcular el ISR\n";
		cout<<endl;
		cout<<"		[";color(hConsole,4);cout<<"17";color(hConsole,7);cout<<"] calcular el seguro social\n";
		cout<<endl;
		cout<<"							[";color(hConsole,4);cout<<"0";color(hConsole,7);cout<<"] salir\n";
		cout<<endl;
		cout<<"a donde quieres ir?: ";;color(hConsole,4);cin>>num;color(hConsole,7);
		
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
			case 13:valid = false;system("cls");system("factorial");break;
			case 14:valid = false;system("cls");system("numerosParesEntre5Y515");break;
			case 15:valid = false;system("cls");system("afp");break;
			case 16:valid = false;system("cls");system("isr");break;
			case 17:valid = false;system("cls");system("sfs");break;
			case 0 :valid = false;system("cls");system("cerrar");break;
			default:cout<<"no existen"<<endl;system("pause"); system("cls");
		}
	}
	

	
	return 0;
	getch();
}
