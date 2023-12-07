#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";
using namespace std;
void isr(long, long double, long double, long double&, double);

int main(){
	system("title Impuesto sobre la renta");
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	cout<<"		 			Calculadora del impuesto sobre la renta"<<endl<<endl;
	long double val= 0, AFP = 0,SFS = 0,ISR = 0, total;
	int salir;
	bool valid = true;
	while(valid){
		cout<<"introduce tu sueldo bruto mensual: ";cin>>val;
		if(val == 0){
			cout<<"introduzca un sueldo"<<endl;
			continue;
		}
		isr(val,SFS,AFP,ISR,total);
		system("pause");
		cout<<endl;
		cout<<"precione [";color(hConsole,4);cout<<"1";color (hConsole,7);cout<<"] para salir al menu, precione [";color(hConsole,4);cout<<"2";color (hConsole,7);cout<<"] o cualquier otro numero para continuar en el programa ";color(hConsole,4);cin>>salir;color(hConsole,7);
		switch(salir){
			case 1: valid = false;system("cls");system("menu");break;
			case 2: break;
		}
	}
	getch();
}

void isr(long val, long double SFS, long double AFP, long double& IRS, double total){
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	long double cotizable, porsent, vals;
	SFS = (val * 0.0304);
	AFP = (val*0.0287);
	
	cotizable = val-SFS-AFP;
	cout<<"sueldo mensual cotizable RD$: "<<cotizable<<endl;
	cotizable = cotizable*12;
	if(cotizable > 416220 && cotizable < 624329){
		
		cotizable = cotizable-416220;
		porsent = cotizable * 0.15;
		cout<<"Tasa: 15% del excedente de RD$416,220.01 "<<endl;
		cout<<"valor anual a retener RD$: ";color(hConsole,2);cout<<porsent<<endl;color(hConsole,7);
		total = porsent/12;
		cout<<"valor mensual a retener RD$: ";color(hConsole,2);cout<<setprecision(5)<<total<<endl;color(hConsole,7);
	}else if(cotizable > 624329 && cotizable < 867123){
		
		cotizable = cotizable-624329;
		porsent = cotizable * 0.20;
		vals = porsent + 31216;
		cout<<"RD$31,216.00 mas el 20% del excedente de RD$624,329.01"<<endl;
		cout<<"valor anual a retener RD$: ";color(hConsole,2);cout<<vals<<endl;color(hConsole,7);
		total = vals/12;
		cout<<"valor mensual a retener RD$: ";color(hConsole,2);cout<<total<<endl;color(hConsole,7);
	}else if(cotizable > 867123){
		
		cotizable = cotizable-867123;
		porsent = cotizable * 0.25;
		vals = porsent + 79776;
		cout<<"RD$79,776.00 mas el 25% del excedente de RD$867,123.01"<<endl;
		cout<<"valor anual a retener RD$: ";color(hConsole,2);cout<<vals<<endl;color(hConsole,7);
		total = vals/12;
		cout<<"valor mensual a retener RD$: ";color(hConsole,2);cout<<total<<endl;color(hConsole,7);
	}else{
		color(hConsole,2);cout<<"exento"<<endl;color(hConsole,7);
	}
}
