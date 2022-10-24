#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
	
	/*input: Nama Pelanggan, alamat, no.hp, harga barang1-3, banyakbarang1-3
	  output: Nama Pelanggan, alamat, no.hp, jumlah pembelian, total sebelum diskon, diskon, tatal bayar
	  proses: jumlah pembelian = tambah semua banyak barang, total sebelum diskon = harga*banyak + harga*banyak + harga*banyak,
	  diskon 10% jika harga sebelum diskon < 500.000
	  diskon 15% jika harga sebelum diskon 500.00-1.000.000
	  diskon 20% jika harga sebelum diskon >1.000.000
	  total bayar = harga sebelum diskon-diskon
	*/
	
	char nama[50],alamat[50],noHp[14];
	int harga1, harga2, harga3, banyak1, banyak2, banyak3,
	jumlah, tsd, total;
	float diskon;
	
	cout<<" Masukkan Nama Anda = ";
	gets(nama);
	cout<<" Masukkan Alamat Anda = ";
	gets(alamat);
	cout<<" Masukkan No.Hp Anda = ";
	gets(noHp);
	
	cout<<" Harga Barang 1 = ";
	cin>>harga1;
	cout<<" Harga Barang 2 = ";
	cin>>harga2;
	cout<<" Harga Barang 3 = ";
	cin>>harga3;
	
	cout<<" Banyak Barang 1 = ";
	cin>>banyak1;
	cout<<" Banyak Barang 2 = ";
	cin>>banyak2;
	cout<<" Banyak Barang 3 = ";
	cin>>banyak3;
	
	
	jumlah = banyak1+banyak2+banyak3;
	tsd = harga1*banyak1 + harga2*banyak2 + harga3*banyak3;
	
	if (tsd<500000){
		diskon = 0.1;
	} 
	if (tsd>=500000 && tsd <= 1000000){
		diskon = 0.15;
	}
	else if(tsd>1000000){
		diskon = 0.2;
	}
	
	total = tsd - diskon;
	
	cout<<"===========HASIL==============="<<endl;
	cout<<" Nama Pelanggan = "<<nama<<endl;
	cout<<" Alamat = "<<alamat<<endl;
	cout<<" No.Hp = "<<noHp<<endl;
	
	cout<<" Jumlah Pembelian = "<<jumlah<<endl;
	cout<<" Total Sebelum Diskon = "<<tsd<<endl;
	cout<<" Diskon = "<<diskon<<endl;
	cout<<" Total Bayar = "<<total;
	
}
