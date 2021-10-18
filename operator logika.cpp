#include <iostream>

using namespace std;

int main() {
	int a = 2;
	int b = 2;

	bool result;

	// not
	result = !(a == b);
	cout << result << endl;

	// and
	result = (a == b) and (a <= b); // true and true
	cout << result << endl;
	result = (a == b) and (a < b); // true and false
	cout << result << endl;

	// or 
	result = (a == b) or (a <= b); // true and true
	cout << result << endl;
	result = (a == b) or (a < b); // true and false
	cout << result << endl;

	return 0;
} 
