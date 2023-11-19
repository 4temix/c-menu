#include <iostream>
#include <conio.h>
#define name cout<<"by 4temix";	
using namespace std;
int main() {
	int num = 240, salir;
	bool valid = true;
	while(valid){

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
		cout<<"precione [1] para salir al menu, precione [2] o cualquier otro numero para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: num = 260;break;
		}
		

			
	}
	

	
	return 0;
}
