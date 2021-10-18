#include <iostream>
#include <limits>

using namespace std;

int main() {
	// integer bulat
	unsigned int a = 1; // 4 byte / 32 bit    unsigned untuk menghilangkan + dan -
	long long b = 2; // 8 byte / 64 bit
	short c = 3; // 2 byte / 8 bit

	//  integer decimal
	float d = 1.0; // 4 byte / 32 bit
	double e = 2.5; // 8 byte / 64 bit

	// character
	char f = 'f'; // 1 byte / 8 bit

	// boolean (true / false)
	bool g = true; // 1 byte / 8 bit
	/*
		1 = true
		0 = false
	*/


	cout << a << endl;
	cout << sizeof(a) << "byte" << endl;
	cout << numeric_limits<unsigned int>::max() << endl;
	cout << numeric_limits<unsigned int>::min() << endl;

	return 0;
}