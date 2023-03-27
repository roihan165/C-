#include <iostream>
using namespace std;

int LuasPersegi2(int p, int l){
	int luas;
	luas = p * l;
	return luas;
}

void LuasPersegi(){
	int panjang, lebar;
	
	cout << "Masukkan Nilai Panjang : ";
	cin >> panjang;
	cout << "Masukkan Nilai Lebar : ";
	cin >> lebar;
	
	cout << "Luas Persegi : " << panjang * lebar;
}

int main (){
//	LuasPersegi();
	
	int a, b;
	
	cout << "Masukkan Nilai Panjang : ";
	cin >> a;
	cout << "Masukkan Nilai Lebar : ";
	cin >> b;
	
	cout << "Luas Persegi : " << LuasPersegi2(a,b);
}
