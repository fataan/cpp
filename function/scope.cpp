#include <iostream>
using namespace std;

/*
	scope adalah ruang lingkup untuk mengakses sesuatu seperti variable.
	scope terbagi menjadi dua yaitu global scope dan local scope.

	global scope dimana sebuah variable ditulis di global dan dapat diakses di mana saja.
	local scope variable ditulis di local seperti function
	dan hanya dapat diakses di function tersebut saja.
*/

int x = 5; // variable global

int ambilX(){
	return x;
}

int main(){

	cout << x << endl;
	/*
		diatas menampilkan variable x yang ada di global
		karena di local scope(function main)
		belum mendeklarasikan variable x.
	*/

	int x = 10; // variable local

	if(true){
		int x = 15;
		cout << x << endl;
	}

	cout << x << endl;

	cout << ambilX() << endl;

	return 0;
}

/*
	SUMMARY
	ketika mengakses sebuah variable di local scope akan di cek terlebih dahulu
	apakah di local scope ada variable tersebut atau tidak jika tidak ada maka
	akan mencari di tingkat atasnya lalu terakhir di global.
	contoh: local(if) > local(main) > global.
*/