#include <iostream>

using namespace std;

int main(){

	/**************
	Author: Rodrigo Vaz
	E-mail: rodrigovazdeoliveira@gmail.com
	site: http://www.rodrigovaz.com
	***************/

	int N, i, aux = 0, j;

		cin >> N;

	if (N > 1 && N < 1000){
		int X[N];

		for (i = 0; i < N; i++){
			cin >> X[i];
			if (i == 0)
				aux = X[i];

			if (X[i] < aux){
				aux = X[i];
				j	= i;
			}
		}

		cout << "Menor valor: " << aux << endl;
		cout << "Posicao: " << j << endl;
	}

	return 0;
}