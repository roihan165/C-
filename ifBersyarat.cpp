#include <iostream>
#include <stdio.h>
//#include <conio.h>

using namespace std;

int main(){

	// input nama, nim, absen, tugas, uts, dan uas, hitung menggunakan pengkondisian
	char nama[15], nim[15];
	float absen, tugas, uts, uas, hasil;
	
	cout<<"Masukkan Nama Anda = ";
	cin.getline(nama,15);
	cout<<"Masukkan NIM Anda = ";
	cin.getline(nim,15);
	cout<<"Masukkan Absen = ";
	cin>>absen;
	cout<<"Masukkan Nilai Tugas = ";
	cin>>tugas;
	cout<<"Masukkan NIlai Uts = ";
	cin>>uts;
	cout<<"Masukkan Nilai Uas = ";
	cin>>uas;
	
	hasil = absen*0.1 + tugas*0.3 + uts*0.3 + uas*0.3;
	
	cout<<"===============HASIL================"<<endl;

	cout<<"Nama = "<<nama<<endl;
	cout<<"NIM = "<<nim<<endl;
	cout<<"Absen = "<<absen<<endl;
	cout<<"Nilai Tugas = "<<tugas<<endl;
	cout<<"Nilai Uts = "<<uts<<endl;
	cout<<"Nilai Uas = "<<uas<<endl;
	cout<<"Total Nilai = "<<hasil<<endl;
	
	if (hasil>=80 && hasil<=100){
		cout<<" Nilai Anda = "<<hasil<<" Grade A ";
	}
	if (hasil>=75 && hasil<=79.99){
		cout<<" Nilai Anda = "<<hasil<< " Grade B ";
	}
	if (hasil>=65 && hasil<=74.99){
		cout<<" Nilai Anda = " <<hasil<<" Grade C ";
	}
	else if (hasil<65){
		cout<<" Nilai Anda = "<<hasil<<" Grade D ";
	}


}

