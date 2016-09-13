#include <iostream>

using namespace std;

int main(){

	int i,X, Z, soma = 0; 


	cin >> X;

	while (cin >> Z && Z <= X);

	for (i = 0; soma <= Z; i++){
		soma += X;
		X++;
	}
	
	cout << i << endl;

	return 0;
}