# include <iostream>
# include <stdio.h>
# include <conio.h>

using namespace std;
int main(){

	// P=5,Q=9,R=2
	//Q=p+3+R, P=P+4+R, Q=P+Q+R+R dan jika R=P+4-P
	//menentukan variabel
	int P1 = 5, Q1 = 9, R1 = 2;
	//menghitung nilai
	Q1 = P1 + 3 + R1;
	P1 = P1 + 4 + R1;
	Q1 = P1 + Q1 + R1 + R1;
	R1 = P1 + 4 - P1;
	
	cout<<"Soal 1"<<endl;
	cout<<"nilai P saat ini = "<<P1<<endl;
	cout<<"nilai Q saat ini = "<<Q1<<endl;
	cout<<"nilai R saat ini = "<<R1<<endl;


	cout<<"==============================================="<<endl;
	
	//menentukan variabel
	int P2 = 1, Q2 = 12, R2 = 6;
	//menghitung nilai
	P2 = P2 - P2 + Q2;
	R2 = P2 + Q2 - R2;
	Q2 = R2 + Q2 + P2 - R2;
	
	cout<<"Soal 2"<<endl;
	cout<<"nilai P saat ini = "<<P2<<endl;
	cout<<"nilai R saat ini = "<<R2<<endl;
	cout<<"nilai Q saat ini = "<<Q2<<endl;
	
	cout<<"==============================================="<<endl;
	
	//menentukan variabel
	float C,F,K,R;
	char NIM[13], nama[50], tempat[150], No_Hp[15];	
	
	//mengambil input
	cout<<"Masukkan NIM Anda = ";
	gets(NIM);
	cout<<"Masukkan Nama Anda = ";
	gets(nama);
	cout<<"Masukkan Alamat Anda = ";
	gets(tempat);
	cout<<"Masukkan No.Hp Anda = ";
	gets(No_Hp);
	cout<<"Masukkan Derajat celcius = ";
	cin>>C;
	
	cout<<"===============HASIL=============="<<endl;
	//menentukan rumus
	F = C * 9/5 + 32;
	K = C + 273.15;
	R = C * 4/5;
	
	//Output
	cout<<"Soal 3"<<endl;
	cout<<"NIM Anda = "<<NIM<<endl;
	cout<<"Nama Anda = "<<nama<<endl;
	cout<<"alamat Anda = "<<tempat<<endl;
	cout<<"No.Hp Anda = "<<No_Hp<<endl;
	cout<<C<<" Derajat Celcius = "<<F<<" Derajat Fahrenheit"<<endl;
	cout<<C<<" Derajat Celcius = "<<K<<" Derajat Kelvin"<<endl;
	cout<<C<<" Derajat Celcius = "<<R<<" Derajat Reamur"<<endl;
}

