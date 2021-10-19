#include <iostream>

using namespace std;

int main(){

	int a = 5;
	int b = 5;

	/*
		hati-hati menggunakan looping karena bisa infnite loop yaitu looping berulang-ulang kali.
		solusinya adalah memberi batas atau condiciton untuk melakukan looping.
	*/



	// while
	while(a < 10){
		cout << "halo ini " << a << endl;
		a++;
	}


	cout << "\n \n ";


	// do while
	do{
		cout << "halo ini " << b << endl;
		b++;
	} while(b < 10);


	cout << "\n \n ";


	// for
	for (int i = 5; i < 10; ++i){
		cout << "halo ini " << i << endl;
	}


	cout << "selesai" << endl;
	return 0;
} 
