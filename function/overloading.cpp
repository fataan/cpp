#include <iostream>
using namespace std;

int hitungLuas(int a, int b){
	return a * b;
}

int hitungLuas(int a){
	return a * a;
}

int main(){
	int a;

	cout << "Menghintung luas kotak";

	cout << "luas kotak 2x3 adalah " << hitungLuas(2,3) << endl;
	cout << "luas kotak 2x2 adalah " << hitungLuas(2) << endl;

	return 0;
}