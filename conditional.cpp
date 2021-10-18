#include <iostream>

using namespace std;

int main(){

	int a;
	cout << "masukan angka: ";
	cin >> a;

	// if else
	// if (a % 2 == 0) {
	// 	cout << a << " adalah bilangan genap!" << endl;
	// } else {
	// 	cout << a << " adalah bilangan ganjil!" << endl;
	// }


	// switch case
	switch(a % 2){
		case 0:
			cout << a << " adalah bilangan genap" << endl;
		break;
		default:
			cout << a << " adalah bilangan ganjil" << endl;
	}


	cout << "selesai" << endl;
	return 0;
}