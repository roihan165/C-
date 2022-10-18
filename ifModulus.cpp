#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
	//menentukan bilangan input genap atau ganjil
	int b,h;
	
	cout<<"Masukkan angka = ";
	cin>>b;
	
	h = b % 2;
	
	if (h==0){
		cout<<"Bilangan Genap"<<endl;
	}else{
		cout<<"Bilangan Ganjil"<<endl;
	}
}
