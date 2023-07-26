#include <iostream>

using namespace std;

struct Siswa{
    string nama, hobi;
    int umur;

} swa;

void tampil();

int main(){
    cout << "Masukkan Nama Kamu: "; cin >> swa.nama; cout << endl;
    cout << "Masukkan Umur Kamu: "; cin >> swa.umur; cout << end;
    cout << "Masukkan Hobi Kamu: "; cin >> swa.hobi; cout << endl;

    tampil();



}

void tampil(){
    cout << "Nama : " << swa.nama; cout << endl;
    cout << "Umur : " << swa.umur; cout << endl;
    cout << "Hobi : " << swa.hobi; cout << endl;
}