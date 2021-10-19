#include <iostream>

using namespace std;

int main(){

	/*
		flow untuk mengatur jalannya proses looping.
		break = memberhentikan looping.
		continue = mengskip statment dibawah nya.
	*/

	// for (int i = 0; i < 10; i++){
	// 	if(i == 5){
	// 		// break;
	// 		continue;
	// 	}
	// 	cout << i << endl;
	// }

	int i = 0;
	while(i < 10){
		i++;
		if(i == 5){
			// break;
			continue;
		}
		cout << i << endl;
	}

	return 0;
} 
