#include <iostream>
using namespace std;

// default argument
int hitungLuas(int a, int b = 1);

int main(){

	cout << "Menghintung luas kotak" << endl;

	cout << "luas kotak 2x3 adalah " << hitungLuas(2,3) << endl;
	cout << "luas kotak 2x2 adalah " << hitungLuas(4) << endl;

	return 0;
}

int hitungLuas(int a, int b){
	return a*b;
}