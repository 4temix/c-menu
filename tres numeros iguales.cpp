#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	system("title tres numeros iguales");
	cout<<"introduce 3 valores iguales";cout<<endl;
	cout<<endl;
	float val1=0,val2=0,val3=0,suma=0,multi=0;
	while(true){
		cout<<"introduce un valor: ";cin>>val1;cout<<endl;
		cout<<"introduce otro valor: ";cin>>val2;cout<<endl;
		cout<<"introduce un ultimo valor: ";cin>>val3;cout<<endl;
		if(val1 == val2 && val2 == val3){
			suma = val1+val2;
			multi = suma*val3;
			cout<<"esta es la suma del valor 1 y 2: ";cout<<suma;cout<<endl;
			cout<<"esta es la multiplicacion del resultado de la suma y el valor 3: ";cout<<multi;cout<<endl;
			system("pause");
		}else{
			cout<<"los valores introducidos son diferentes";cout<<endl;
			system("pause");
		}
	}
	
	getch();

}
