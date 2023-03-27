#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

	// input nama, nim, absen, tugas, uts, dan uas, hitung menggunakan pengkondisian
	char nama[15], nim[15];
	float absen, tugas, uts, uas, hasil;
	 
	/*int printFunction() {
		cout<<" Masukkan ";	
	}*/
	
	cout<<"Masukkan Nama Anda = ";
	gets(nama);
	cout<<"Masukkan NIM Anda = ";
	gets(nim);
	cout<<"Masukkan Absen = ";
	cin>>absen;
	cout<<"Masukkan Nilai Tugas = ";
	cin>>tugas;
	cout<<"Masukkan NIlai Uts = ";
	cin>>uts;
	cout<<"Masukkan Nilai Uas = ";
	cin>>uas;
	
	hasil = absen*0.1 + tugas*0.2 + uts*0.3 + uas*0.4;
	
	cout<<"===============HASIL================"<<endl;

	cout<<"Nama = "<<nama<<endl;
	cout<<"NIM = "<<nim<<endl;
	cout<<"Absen = "<<absen<<endl;
	cout<<"Nilai Tugas = "<<tugas<<endl;
	cout<<"Nilai Uts = "<<uts<<endl;
	cout<<"Nilai Uas = "<<uas<<endl;
	cout<<"Total Nilai = "<<hasil<<endl;
	
	
	if (hasil<=70){
		cout<<" Ganbare :) " <<nama<<" anda tidak lulus ";
	}
	else{
		cout<<" Omedato :) "<<nama<<" anda telah lulus ";
	}


}

