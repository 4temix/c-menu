
#include <iostream>
using namespace std;

int main(){
	int salir;
		cout<<endl;
		cout<<"precione [1] para salir, precione [2] para regresar al menu ";cin>>salir;
		switch(salir){
			case 1:system("cls");system("exit");break;
			case 2:system("cls");system("menu");break;
		}
		
}
