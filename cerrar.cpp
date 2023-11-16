
#include <iostream>
using namespace std;

int main(){
	system("title cerrar");
	int salir;
	cout<<endl;
	bool valid = true;
	while(valid){
		cout<<endl;
		cout<<"seguro que quieres salir?"<<endl;
		cout<<"precione [1] para salir, precione [2] para regresar al menu ";cin>>salir;
		switch(salir){
			case 1:valid = false;system("cls");cout<<"hasta la proxima";system("exit");break;
			case 2:system("cls");system("menu");break;
			default: cout<<"valor no reconocido";
		}
	}

}
