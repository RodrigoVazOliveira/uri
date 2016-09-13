#include <iostream>

using namespace std;

int main(){
	int n, i;

	cin >> n;
	if (n > 0 && n <= 10000000){
		for (i = 1; i <= n; i++){
			if (i != n)
				cout << "Ho ";
			else
				cout << "Ho!" << endl;
		}	
	}
	

	return 0;
}