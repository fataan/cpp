#include <iostream>
using namespace std;

// prototype
float luasSegitiga(int a, int t);
void menampilkanHasil(int a);

int main(){

	int alas, tinggi;
	float result;

	cout << "Mencari luas segetiga \n";
	cout << "masukan panjang sisi alas: ";
	cin >> alas;

	cout << "masukan tinggi: ";
	cin >> tinggi;

	result = luasSegitiga(alas, tinggi);

	menampilkanHasil(result); 

	return 0;
}


float luasSegitiga(int a, int t){
	float result;
	result = (0.5)*a*t;
	return result;
}

void menampilkanHasil(int a){
	cout << "hasilnya adalah ";
	cout << a << endl;
}
