#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int num = 240, salir;
	while(true){

		while(num > 1 ){
			if(num % 2 == 0){
				cout <<"el numero:"<<num,cout <<" es par ",cout<<endl;
				num--;
			}else{
				num--;
			}	
		}
		system("pause");
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2] para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:system("cls");system("menu");break;
			case 2: num = 260;break;
		}	
	}
	

	
	return 0;
}
