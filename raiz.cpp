#include <iostream>
#include <conio.h>
using namespace std;

void  op(int a, int b);
int main(){
	int v,n;
	cin>>n;
	cin>>v;
	op(v,n);
}

void op(int a, int b){
	cout<<a+b;cout<<endl;
	cout<<a-b;cout<<endl;
	cout<<a/b;cout<<endl;
	cout<<a*b;cout<<endl;
	
}

