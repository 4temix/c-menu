#include <iostream>
#include <conio.h>
#include <windows.h>
#define color SetConsoleTextAttribute
#define name cout<<"by 4temix";
using namespace std;
void isr(long, double&, double&, double&);

int main(){
	long val= 0;
	double  AFP = 0,SFS = 0,ISR = 0;
	cout<<"introduce tu sueldo bruto anual: ";cin>>val;
	isr(val,SFS,AFP,ISR);
	cout<<"primer: "<<SFS<<endl<<AFP;
}

void isr(long val, double& SFS, double& AFP, double& IRS){
	double cotizable, porsent;
	SFS = (val * 0.0304);
	AFP = (val*0.0287);
	cotizable = val-SFS-AFP;
	cotizable = cotizable*12;
	cout<<"cotizable: "<<cotizable<<endl;
	if(cotizable > 416220){
		cotizable = cotizable-416220;
		cout<<"cot: "<<cotizable<<endl;
		porsent = cotizable * 0.15;
		cout<<"porsent: "<<porsent<<endl;
	}
}
