#include <iostream>
#include <conio.h>
#include <windows.h>
#define  color SetConsoleTextAttribute
#define name cout<<"by 4temix";	
using namespace std;
int main(){
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	string alumno;
	float nota = 0;
	long promedio = 0, total_promedio = 0;
	int res = 20, notas[res], contador = 0, num = 1, salir;
	bool valid = true;
	while(valid){
		while(contador < res){
			cout<<endl;
			cout<<"introduce la nota #"<<num<<": ";
			cin>>nota;
			cout<<endl;
			if(nota == false){
				color(hConsole,4);cout<<"el dato debe ser un numero ";color(hConsole,7);
				system("pause");
				system("cls");
				cin.clear();
				cin.sync();
				continue;
			}else if(nota < 0){
				color(hConsole,4);cout<<"el numero introducido no puede ser negativo ";color(hConsole,7);
				system("pause");
				system("cls");
				continue;
			}else if(nota > 100){
				color(hConsole,4);cout<<"el numero introducido no puede ser mayor a 100 ";color(hConsole,7);
				system("pause");
				system("cls");
				continue;
			}
			notas[contador] = nota;
			color(hConsole,2);cout<<"La nota fue agregada con exito ";color(hConsole,7);
			system("pause");
			system("cls");
			num ++;
			contador ++;
		}
	
		for(int i = 0; i < res; i++){
			cout<<"La nota #"<<i+1<<" es : ";color(hConsole,3);cout<<notas[i]<<endl;color(hConsole,7);
			promedio+=notas[i];
		}
		total_promedio = promedio/res;
		cout<<endl;
		cout<<"el promedio es: ";color(hConsole,3);cout<<total_promedio<<endl;color(hConsole,7);
		
		if(total_promedio > 0 && total_promedio < 69){
			cout<<"Estado de aprobacion: ";color(hConsole,4);cout<<"F"<<endl;color(hConsole,7);
			
		}else if(total_promedio >= 70 && total_promedio <= 79){
			cout<<"Estado de aprobacion: ";color(hConsole,6);cout<<"C"<<endl;color(hConsole,7);
			
		}else if(total_promedio >= 80 && total_promedio <= 89){
			cout<<"Estado de aprobacion: ";color(hConsole,2);cout<<"B"<<endl;color(hConsole,7);
			
		}else if(total_promedio >= 90 && total_promedio <= 100){
			
			cout<<"Estado de aprobacion: ";color(hConsole,10);cout<<"A"<<endl;color(hConsole,7);
		}
		system("pause");
		cout<<endl;
		cout<<"presione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, presione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";color(hConsole,4);cin>>salir;color(hConsole,7);
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: contador = 0; system("cls"); promedio = 0; total_promedio = 0; num = 1; break;
		}
	}
	


	getch();
}

