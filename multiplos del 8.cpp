#include <iostream>
#include <conio.h>
using namespace std;
int main (){
		system("title Multiplos del 8");
		int num = 8, salir;
	while(true){
		for(int i = 0; i<=63; i++){
			cout<<num;cout<<" x ";cout<<i;cout<<" = ";cout<<num*i<<endl;
		}
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2] para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:system("cls");system("C:\\Users\\4temix\\Desktop\\menu\\menu.exe");break;
			case 2: ;break;
		}
	}
		
	getch();
}
