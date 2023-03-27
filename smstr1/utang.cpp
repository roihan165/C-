#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
	//penuh = 1, tambahan = 1/2, keluarga = 1/3
	int p, t, k, j;
	
	cout<<"Masukkan Pendapatan Pokok = ";
	cin>>p;
	cout<<"Masukkan Pendapatan Tambahan = ";
	cin>>t;
	cout<<"Masukkan Pendapatan Keluarga = ";
	cin>>k;
	
	p = p * 1;
	t = t * 1/2;
	k = k * 1/3;
	j = p + t + k;
	
	cout<<"Jumlah Pendapatan Anda = "<<j<<endl;
	
	if(j >= 1000000 ){ 
		cout<<"Anda boleh Kredit Motor"<<endl;
	}else{
		cout<<"Maaf, hutang mu terlalu berat buat aku "<<endl;
	}
}
