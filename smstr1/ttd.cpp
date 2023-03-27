#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
	int t, d, s, p, k;
	
	cout<<" Masukkan Jumlah Tanda tangan "<<endl;
	cout<<" Dosen = ";
	cin>>d;
	cout<<" Senior = ";
	cin>>s;
	cout<<" Panitia = ";
	cin>>p;
	cout<<" Karyawan = ";
	cin>>k;
	
	
	d = d*5;
	s = s*4;
	p = p*3;
	k = k*2;
	t = d + s + p + k;
	
	cout<<" Nilai Anda = "<<t<<endl;
	
	if(t>=80){
		cout<<" Selamat Anda Lulus"<<endl;
	}else{
		cout<<" Maaf, Anda Tidak Lulus"<<endl;
	}
}
