#include <iostream>

using namespace std;

int main() {

	int a = 2;
	int b = 3;

	bool result;

	// sebanding
	result = (a == b);
	cout << result << endl;

	// tidak sebanding
	result = (a != b);
	cout << result << endl;

	// lebih dari
	result = (a > b);
	cout << result << endl;

	// kurang dari
	result = (a < b);
	cout << result << endl;

	// lebih dari atau sama dengan
	result = (a >= b);
	cout << result << endl;

	// kurang dari atau sama dengan
	result = (a <= b);
	cout << result << endl;


	return 0;
} 
