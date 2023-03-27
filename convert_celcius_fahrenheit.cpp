#include <iostream>
using namespace std;

double celciuskefahrenheit(double celcius);
double celciuskereamur(double celcius);

int main (){
	double celcius, fahrenheit,reamur;
	
	cout << "Masukkan suhu dalam celcius : ";
	cin >> celcius;
	
	fahrenheit = celciuskefahrenheit(celcius);
	reamur = celciuskereamur(celcius);
	
	cout << celcius << " Celcius = " << fahrenheit << " Fahrenheit" << endl;
	cout << celcius << " Celcius = " << reamur << " Reamur";
}

double celciuskefahrenheit(double celcius){
	return (celcius * 1.8) + 32;
}

double celciuskereamur(double celcius){
	return  (celcius / 5) * 4;
}
