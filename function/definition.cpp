#include <iostream>
#include <cmath> // mengambil funtion dari library cmath

using namespace std;

/*
	kenapa harus menggunakan function ?

	menggunakan function kita dapat menggunakan code yang sama
	dengan sekali menulis code. Seperti konsep (DRY) Don't Repeat Yourself.
*/

/*
	function terdapat 2 jenis. 
	yaitu function return(reporter) dan function void(worker),

	- function return dapat mengembalikan nilai sesuai dengan tipe datanya.
	- function voind tidak dapat mengembalikan nilai.
*/

int main(){

	int a = 2;
	int b = 10;

	cout << "nilai terbesar dari " << a << " dan " << b << " adalah " << fmax(a,b) << endl;

	return 0;
}

/*
	reference standar library cpp
	https://en.cppreference.com/w/
*/