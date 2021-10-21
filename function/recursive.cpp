#include <iostream>
using namespace std;

/*
	recursive sama seperti looping namun recursive adalah memanggil function itu sendiri.
	hingga batas yang ditentukan.
*/

// bukan function recursive
int factorial(int n){
	int result = 1;
	for(int i = n; i > 1; i--){
		result *= i;
	}
}

// funtion recursive
int factorialRecursive(int n){
	if(n > 1){
		return n * factorial(n - 1);
	}else {
		return 1;
	}
}

int main(){
	int n;
	cout << "angka : ";
	cin >> n;
	
	cout << factorialRecursive(n);

	return 0;
}