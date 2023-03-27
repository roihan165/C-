#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main(){
//menentukan variabel
	float C,F,K,R; //variabel suhu
	float j, d, m; //variabel waktu
	
	cout<<"==========Menghitung Suhu=========== \n\n";
	//mengambil input
	cout<<"Masukkan Derajat celcius = ";
	cin>>C;
	
	//menentukan rumus celcius
	F = C * 9/5 + 32;
	K = C + 273.15;
	R = C * 4/5;
	
	//Output celcius
	cout<<C<<" Derajat Celcius = "<<F<<" Derajat Fahrenheit"<<endl;
	cout<<C<<" Derajat Celcius = "<<K<<" Derajat Kelvin"<<endl;
	cout<<C<<" Derajat Celcius = "<<R<<" Derajat Reamur \n\n";
	
	// input fahrenheit
	cout<<"Masukkan Derajat fahrenheit = ";
	cin>>F;
	
	//menentukan rumus fahrenheit
	// f-c =  °C = 5/9 x (°F – 32)
	C = (F - 32) * 5/9;
	R = (F - 32) * 4/9; 
	K = (F - 32) * 5/9 + 273.15;
	
	//Output
	cout<<F<<" Derajat Fahrenheit = "<<C<<" Derajat Celcius"<<endl;
	cout<<F<<" Derajat Fahrenheit = "<<R<<" Derajat Reamur"<<endl;
	cout<<F<<" Derajat Fahrenheit = "<<K<<" Derajat Kelvin \n\n";
	
//	cout<<"===============HASIL=============="<<endl;
	cout<<"Masukkan Derajat Kelvin = ";
	cin>>K;
	
	//menentukan rumus kelvin
	F = (K - 273.15) * 9/5 + 32;
	C = K - 273.15;
	R =  (K - 273.15) * 4/5;
	
	//Output
	cout<<K<<" Derajat Kelvin = "<<F<<" Derajat Fahrenheit"<<endl;
	cout<<K<<" Derajat Kelvin = "<<C<<" Derajat Celcius"<<endl;
	cout<<K<<" Derajat Kelvin = "<<R<<" Derajat Reamur \n\n";
	
	//input reamur
	cout<<"Masukkan Derajat Reamur = ";
	cin>>R;
	
	//menentukan rumus Reamur
	F = ( R * 9/4) + 32;
	C =  R * 5/4 ;
	K =  (R * 5/4) + 273.15;
	
	//Output
	cout<<R<<" Derajat Reamur = "<<F<<" Derajat Fahrenheit"<<endl;
	cout<<R<<" Derajat Reamur = "<<C<<" Derajat Celcius"<<endl;
	cout<<R<<" Derajat Reamur = "<<K<<" Derajat Kelvin \n\n";
	
	cout<<"==========Menghitung waktu=========== \n\n";

//mengambil input user
	cout<<"Masukkan waktu dalam detik = ";
	cin>>d;

//perhitungan rumus
	m = d / 60;
	j = d / 3600;

//output
	cout<<d<<" detik = "<<m<<" menit "<<endl;
	cout<<d<<" detik = "<<j<<" jam ";
}
