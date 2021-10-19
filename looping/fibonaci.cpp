#include <iostream>

using namespace std;

int main(){

	/*
		deret fibonaci adalah deret yang dihasilkan dari penjumlahan 2 angka sebelum nya.
		0 1 1 2 3 5 8 13 21 34 ...

	*/

	int n;
	int f;
	int f_1;
	int f_2;

	f_1 = 1;
	f_2 = 0;

	cin >> n;

	// for

	// cout << f_2 << " ";
	// cout << f_1 << " ";
	// for(int i = 1; i < n; i++){
	// 	f = f_1 + f_2;
	// 	f_2 = f_1;
	// 	f_1 = f;
	// 	cout << f << " ";
	// }




	// do while
	int i = 1;
	cout << f_2 << " ";
	cout << f_1 << " ";
	do{
		f = f_1 + f_2;
		f_2 = f_1;
		f_1 = f;
		cout << f << " ";
		i++;
	}while(i < n);

	return 0;
} 
