#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	float s=0, r=0, d=0,
	m=0, por=0;
	int a, salir;
	int e;
	bool valid = true;
	while(valid){
		cout <<"entre 1 valor:";
		cin >> a; cout <<endl;
		cout<< "entre valor 2:";
		cin>> e; cout <<endl;
		s=(a+e);
		r=(a-e);
		d=(a/e);
		m=(a*e);
		por=(s+r+d+m)/4;
		cout.precision(2);
		cout<<"estas son las operaciones matematicas basicas\n";
		cout <<"la suma es:"<<s,cout<<endl;
		cout <<"la resta es:"<< r,cout<<endl;
		cout <<"la division es:"<< d,cout<<endl;
		cout <<"la nultiplicacion es:"<< m,cout<<endl;
		cout <<"el porsentaje es:"<< por,cout<<endl;
		system("pause");
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2] para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}

	getch();
	return 0;
}
