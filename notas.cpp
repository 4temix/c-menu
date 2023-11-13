#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	system("title Notas de alumnos");
	cout<<"10 notas de alumnos"<<endl;
	cout<<endl;
//	declaracion de variables
	string nombre;
	int contador = 1, nota = 0, salir;
	while(true){

		while(contador<=1){
	//		solicitando los valores a analizar
			cout<<endl;
			cout<<"introduce el nombre del alumno: ";cin>>nombre;
			cout<<"introduce la nota del alumno: ";cin>>nota;
	//		validando los valores ya solicitados
			if(nota>=70){
				cout<<"el alumno ";cout<<nombre;cout<<" tiene una nota mayor oigual a 70, siendo esta: ";cout<<nota;cout<<endl;
			}else{
				cout<<"el alumno ";cout<<nombre;cout<<" tiene una nota menor a 70, siendo esta: ";cout<<nota;cout<<endl;
			}
	//		aumento del contador
			contador++;
		}
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2] para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:system("cls");system("C:\\Users\\4temix\\Desktop\\menu\\menu.exe");break;
			case 2:; contador = 1 ;break;
		}
	}

	
	getch();
}
