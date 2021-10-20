#include <iostream>
using namespace std;

// function return(worker)
float luasSegitiga(int a, int t){
	float result;
	result = (0.5)*a*t;
	return result;
}


/*
	function void(worker) tidak perlu menggunakan keyword "return".
	karena function void tidak dapat mengembalikan nilai.
*/
// function void
void menampilkanHasil(int a){
	cout << "hasilnya adalah ";
	cout << a << endl;
}

int main(){

	int alas, tinggi;
	float result;

	cout << "Mencari luas segetiga \n";
	cout << "masukan panjang sisi alas: ";
	cin >> alas;

	cout << "masukan tinggi: ";
	cin >> tinggi;

	result = luasSegitiga(alas, tinggi); // menggunakan function return

	menampilkanHasil(result); // menggunakan function void

	/* code */
	return 0;
}
