#include <iostream>

using namespace std;

int main(){

	int T;
	unsigned int R1, R2;

	cin >> T;

	if (T <= 10000){
		for (int i = 1; i <= T; i++){
			cin >> R1 >> R2;
			cout << (R1+R2) << endl; 
		}
	}

	return 0;
}