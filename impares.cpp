#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	float total=0;
	int num = 260, salir;
	bool valid = true;
	while(valid){
		while(num > 10 ){
			if(num % 2 == 0){
				num--;
			}else{
				cout <<"el numero:"<<num,cout <<" es impar ",cout<<endl;
				total=total+=num;
				num--;
			}
		}
		cout<<"el total es: "<<total;
		system("pause");
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2] para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: num = 260;break;
		}
	}
	
	getch();	
	return 0;
}
