#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int main(){
	string alumno;
	float nota = 0, contador = 0;
	vector<string>alumnos;
	vector<float>notas;
	bool valid = true;
	while(valid){
		while(contador < 3){
			cout<<"introduce el nombre de un alumno: ";
			cin>>alumno;
			cout<<endl;
			cout<<"introduce la nota: ";
			cin>>nota;
			cout<<endl;
			if(nota == false){
				cout<<"el dato debe ser un numero ";
				system("pause");
				system("cls");
				cin.clear();
				continue;
			}else if(nota < 0){
				cout<<"el numero introducido no puede ser negativo ";
				system("pause");
				system("cls");
				continue;
			}else if(nota > 100){
				cout<<"el numero introducido no puede ser mayor a 100 ";
				system("pause");
				system("cls");
				continue;
			}
			alumnos.push_back(alumno);
			notas.push_back(nota);
			cout<<"El alumno "<<alumno<<" fue agregado con exito ";
			system("pause");
			system("cls");
			contador++;
		}
		
		for(int i ; i < alumnos.size(); i++){
			cout<<alumnos[i]<<" : "<<notas[i]<<endl;
		}
		system("pause");
		valid = false;
	}


	getch();
}

