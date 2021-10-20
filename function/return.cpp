#include <iostream>
using namespace std;

/*
	function return harus memiliki nilai untuk dikembalikan dengan keyword "return".
	nilai yang dikembalikan harus sama dengan nilai untuk mendeklarasikan function.
*/

int luasSegitiga(int a, int t){
	int result;
	result = (0.5)*a*t;
	return result;
}


int main(){

	int alas, tinggi;
	int result;

	cout << "Mencari luas segetiga \n";
	cout << "masukan panjang sisi alas: ";
	cin >> alas;

	cout << "masukan tinggi: ";
	cin >> tinggi;

	result = luasSegitiga(alas, tinggi); // menggunakan function return

	cout << result << endl;

	/* code */
	return 0;
}
