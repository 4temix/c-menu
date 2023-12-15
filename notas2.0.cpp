#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int main(){
	string alumno;
	float nota = 0, contador = 0;
	vector<double>notas;
	bool valid = true;
	while(valid){
		while(contador < 2){
			cout<<endl;
			cout<<"introduce la nota: ";
			cin>>nota;
			cout<<endl;
			if(nota == false){
				cout<<"el dato debe ser un numero ";
				system("pause");
				system("cls");
				cin.clear();
				cin.ignore();
				continue;
			}else if(nota < 0){
				cout<<"el numero introducido no puede ser negativo ";
				system("pause");
				system("cls");
			}else if(nota > 100){
				cout<<"el numero introducido no puede ser mayor a 100 ";
				system("pause");
				system("cls");
				continue;
			}
			notas.push_back(nota);
			cout<<"La nota fue agregada con exito ";
			system("pause");
			system("cls");
			contador++;
		}
		
		for(int i ; i < notas.size(); i++){
			cout<<"esta es la nota #"<<i+1<<" : "<<notas[i]<<endl;
		}
		system("pause");
		valid = false;
	}


	getch();
}

