#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
using namespace std;
int main(){
	system("title Notas de alumnos");
	cout<<"10 notas de alumnos"<<endl;
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
			cout<<"alumno agregado";
			system("pause");
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
		cout<<"precione [1] para salir al menu, precione [2] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:	valid = false;system("cls");system("menu");break;
			case 2: contador = 1 ;break;
		}
	}

	
	getch();
}
