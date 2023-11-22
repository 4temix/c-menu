#include <iostream>
#include <conio.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
using namespace std;

int main(){
//	declaracion de variables
	float val1=0, val2=0, val3=0, mayor=0, medio=0, menor=0;
	int salir;
	bool confirm = true;
	bool valid = true;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	while(valid){
//	bucle para que la operacion pueda repetirse multiples veces
		do{
			cout<<"introduce el primer numero: ";
			cin>> val1;cout<<endl;
			cout<<"introduce un segundo numero: ";
			cin>> val2;cout<<endl;
			cout<<"introduce un tercer numero: ";
			cin>> val3;cout<<endl;
//			validacion de valores iguales
			if(val1 == val2 && val2 == val3){
				cout<<"todos los valores introducidos son iguales"<<endl;
				break;
			}else if(val1 == val2 && val2 > val3){						
				cout<<"el primer valor y el segundo son iguales: "<<val1;cout<<endl;
				cout<<"valor menor: "<<val3;cout<<endl;
				break;
			}else if(val1 == val2 && val2 < val3){
				cout<<"valor mayor: "<<val3;cout<<endl;
				cout<<"el primer valor y el segundo son iguales: "<<val1;cout<<endl;
				break;
			}else if(val1 == val3 && val3 > val2){						
				cout<<"el primer valor y el tercero son iguales: "<<val1;cout<<endl;
				cout<<"valor menor: "<<val2;cout<<endl;
				break;
			}else if(val1 == val3 && val3 < val2){						
				cout<<"valor mayor: "<<val2;cout<<endl;
				cout<<"el primer valor y el tercero son iguales:  "<<val1;cout<<endl;
				break;
			}else if(val2 == val3 && val3 < val1){						
				cout<<"valor mayor: "<<val1;cout<<endl;
				cout<<"el segundo valor y el tercero son iguales:  "<<val2;cout<<endl;
				break;
			}else if(val2 == val3 && val3 > val1){						
				cout<<"el segundo valor y el tercero son iguales: "<<val2;cout<<endl;
				cout<<"valor menor: "<<val1;cout<<endl;
				break;
			}
				
	//		comparacion del valor 1 y el valor 2
			if(val1>val2){
	//			esto ocurrira en caso de que cumpla la validacion del 1 y el 2
				if(val1>val3){
	//				esto ocurrira en caso de que cumpla la validacion del 1 y el 3
					if(val2>val3){
						
						cout<<"valor mayor: "<<val1;cout<<endl;
						cout<<"valor del medio: "<<val2;cout<<endl;
						cout<<"valor menor: "<<val3;cout<<endl;
					}else{
						
						cout<<"valor mayor: "<<val1;cout<<endl;
						cout<<"valor del medio: "<<val3;cout<<endl;
						cout<<"valor menor: "<<val2;cout<<endl;
					}
				}else{
					
					cout<<"valor mayor: "<<val3;cout<<endl;
					cout<<"valor del medio: "<<val1;cout<<endl;
					cout<<"valor menor: "<<val2;cout<<endl;
				}
			}else if (val1>val3) {
				
					cout<<"valor mayor: "<<val2;cout<<endl;
					cout<<"valor del medio: "<<val1;cout<<endl;
					cout<<"valor menor: "<<val3;cout<<endl;
			}else{
				if(val2>val3){
					cout<<"valor mayor: "<<val2;cout<<endl;
					cout<<"valor del medio: "<<val3;cout<<endl;
					cout<<"valor menor: "<<val1;cout<<endl;
				}else{
					cout<<"valor mayor: "<<val3;cout<<endl;
					cout<<"valor del medio: "<<val2;cout<<endl;
					cout<<"valor menor: "<<val1;cout<<endl;
				}
			}
			confirm = false;
		}while(confirm == true);
			system("pause");		
			cout<<endl;
			cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";cin>>salir;
			switch(salir){
				case 1: valid = false;system("cls");system("menu");break;
				case 2: break;
			}
	}

	
	getch();
	
	return 0;
}
