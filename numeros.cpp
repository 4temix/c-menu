#include <iostream>
#include <conio.h>
//libreria para poder agregar elementos a un vector/arreglo
#include <vector>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main (){
	bool valid2 = true;
	int salir;
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	while(valid2){
		//	variable para manejar el bucle infinito
		bool valid = true;
	//	variable para guardar los numeros introducidos
		int valor = 0;
		/*declaramos el array con la palabra reservada "vector" seguido del tipo de dato que va a recibir el arreglo y por ultimo el nombre
		de nuestro arreglo*/
		vector<int> arr;
		while(valid){
			system("cls");
			cout<<"dame un numero: ";cin>>valor;
	//		validacion para saber si lo que viene en la variable es un 0
			if(valor == 0){
				valid = false;
				break;
			}else if(valor > 0){
	//		si la validacion se cumple agregamos el valor al arreglo
				arr.push_back(valor);
			}
		}
		
	//	iteracion del arreglo para imprimir los valores introducidos anteriormente por pantalla
		cout<<"el numero de valores leidos es: "<<arr.size()<<endl;cout<<" siendo estos: "<<endl;
		for(int i=0;i<arr.size();i++){
			cout<<"los valores son: "<<arr[i]<<endl;
		}
//		validacion para continuar o salir al menu
		system("pause");
		cout<<endl;
		cout<<"presione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, presione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";color(hConsole,4);cin>>salir;color(hConsole,7);
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}

}
