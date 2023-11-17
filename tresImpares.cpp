#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double raiz(int r,int x, int y);
int main(){
	bool valid = true;
	int salir;
	while(valid){
		cout<<endl;
		int a,b,c;
		cout<<"dame un primer numero impar: ";cin>>a;cout<<endl;
		if(a %2 == 0){
			cout<<"el numero introducido no es impar ";
			system("pause");
			system("cls");
			continue;
		}
		cout<<"dame un segundo numero impar: ";cin>>b;cout<<endl;
		if(b %2 == 0){
			cout<<"el numero introducido no es impar ";
			system("pause");
			system("cls");
			continue;
		}
		cout<<"dame un tercer numero impar: ";cin>>c;cout<<endl;
		if(c %2 == 0){
			cout<<"el numero introducido no es impar ";
			system("pause");
			system("cls");
			continue;
		}
		cout<<" la raiz cuadrada es: "<<raiz(a,b,c);
		
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:	valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}

}


double raiz(int r, int x, int y){
	int suma = r+x+y;
	cout<<"la suma es: "<<suma<<endl;
	return sqrt(suma);	
}
