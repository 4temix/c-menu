#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	system("title Determinar los digitos de un numero");
	string num2;
	while(true){
		cout<<"introduce un numero entre 0 y 999: ";cin>>num2;cout<<endl;
		if(num2 == "0"){
			system("pause");
			continue;
		}
		
		if(num2.length() < 4){
			cout<<"el numero ";cout<<num2;cout<<" tiene ";cout<<num2.length();cout<<" digitos";cout<<endl;
			system("pause");
		}else{
			cout<<"el numero ";cout<<num2;cout<<" es mayor a 999";cout<<endl;
			system("pause");
		}
	}
	
	getch();
}
