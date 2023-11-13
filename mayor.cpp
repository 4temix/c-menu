#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	float val1=0, val2=0, val3=0, mayor=0, medio=0, menor=0;
	int salir;
		bool confirm = true;
	while(true){
		do{
			cout<<"introduce el primer numero: ";
			cin>> val1;cout<<endl;
			cout<<"introduce un segundo numero: ";
			cin>> val2;cout<<endl;
			cout<<"introduce un tercer numero: ";
			cin>> val3;cout<<endl;
	//		comparacion del valor 1 y el valor 2
			if(val1>val2){
	//			esto ocurrira en caso de que cumpla la validacion del 1 y el 2
				if(val1>val3){
	//				esto ocurrira en caso de que cumpla la validacion del 1 y el 3
					if(val2>val3){
					
					cout<<"valor mayor: "<<val1;cout<<endl;
					cout<<"valor del medio: "<<val2;cout<<endl;
					cout<<"valor menor: "<<val3;cout<<endl;
					confirm = false;
					}else{
						
					cout<<"valor mayor: "<<val3;cout<<endl;
					cout<<"valor del medio: "<<val1;cout<<endl;
					cout<<"valor menor: "<<val2;cout<<endl;
					confirm = false;
					}
				}else{
					
					cout<<"valor mayor: "<<val3;cout<<endl;
					cout<<"valor del medio: "<<val1;cout<<endl;
					cout<<"valor menor: "<<val2;cout<<endl;
					confirm = false;
				}
			}else if (val1>val3) {
				
					cout<<"valor mayor: "<<val2;cout<<endl;
					cout<<"valor del medio: "<<val1;cout<<endl;
					cout<<"valor menor: "<<val3;cout<<endl;
					confirm = false;
			}else{
				if(val2>val3){
					cout<<"valor mayor: "<<val2;cout<<endl;
					cout<<"valor del medio: "<<val3;cout<<endl;
					cout<<"valor menor: "<<val1;cout<<endl;
					confirm = false;
				}else{
					cout<<"valor mayor: "<<val3;cout<<endl;
					cout<<"valor del medio: "<<val2;cout<<endl;
					cout<<"valor menor: "<<val1;cout<<endl;
					confirm = false;
				}
			}
		
			confirm = false;
		}while(confirm == true);
		system("pause");
		cout<<endl;
		cout<<"precione [1] para salir al menu, precione [2] para continuar en el programa ";cin>>salir;
		switch(salir){
			case 1:system("cls");system("menu");break;
			case 2: ;break;
		}
	}

	
	getch();
	
	return 0;
}
