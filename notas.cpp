#include <iostream>
#include <conio.h>
#define name cout<<"by 4temix";	
using namespace std;
int main(){
	system("title Notas de alumnos");
	cout<<"10 notas de alumnos"<<endl;
	cout<<endl;
//	declaracion de variables
	string nombre;
	int contador = 1, nota = 0, salir;
	bool valid = true;
	while(valid){

		while(contador<=10){
	//		solicitando los valores a analizar
			cout<<endl;
			cout<<"introduce el nombre del alumno: ";cin>>nombre;
			cout<<"introduce la nota del alumno: ";cin>>nota;
	//		validando los valores ya solicitados
			if(nota>=70){
				cout<<"el alumno ";cout<<nombre;cout<<" tiene una nota mayor o igual a 70, siendo esta: ";cout<<nota;cout<<endl;
			}else{
				cout<<"el alumno ";cout<<nombre;cout<<" tiene una nota menor a 70, siendo esta: ";cout<<nota;cout<<endl;
			}
	//		aumento del contador
			contador++;
		}
		cout<<endl;
		cout<<"presione [1] para salir al menu, presione [2] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:	valid = false;system("cls");system("menu");break;
			case 2: contador = 1 ;break;
		}
	}

	
	getch();
}
