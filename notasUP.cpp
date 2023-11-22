#include <iostream>
#include <conio.h>
#include <vector>
#include <windows.h>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main(){
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("title Notas de alumnos");
	cout<<"						  10 notas de alumnos"<<endl<<"       	        para salir del prograna en cualquier momento digite (";color(hConsole,4);cout<<"salir";color(hConsole,7);cout<<") en el campo de nombre del alumno";
	cout<<endl;
//	declaracion de variables
	string nombre;
	int contador = 1, nota = 0, salir;
	bool valid = true;
	vector<string>nombres;
	vector<int>notas;
	while(valid){

		while(contador<=10){
	//		solicitando los valores a analizar
			cout<<endl;
			cout<<"introduce el nombre del alumno: ";cin>>nombre;
			cout<<"introduce la nota del alumno: ";cin>>nota;
			cout<<"alumno agregado"<<endl;
			system("pause");
			if(nombre == "salir"){
				contador = 10;
			}

//			agregando los valores a los arreglos
			nombres.push_back(nombre);
			notas.push_back(nota);
	//		aumento del contador
			contador++;
			system("cls");
		}
		for(int i = 0; i<nombres.size();i++){
			if(notas[i]>=70){
				cout<<"el alumno ";cout<<nombres[i];cout<<" tiene una nota mayor oigual a 70, siendo esta: ";cout<<notas[i];cout<<endl;
			}else{
				cout<<"el alumno ";cout<<nombres[i];cout<<" tiene una nota menor a 70, siendo esta: ";cout<<notas[i];cout<<endl;
			}
		}
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: contador = 1; break;
		}
	}

	
	getch();
}
