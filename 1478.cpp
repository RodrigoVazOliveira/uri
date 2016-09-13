#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	/***************************
	author: Rodrigo Vaz De Oliveira
	E-mail: rodrigovazdeoliveira@gmail.com
	site: http://www.rodrigovaz.com
	exercicio 1478 URI - MATRIZ QUADRADA I
	****************************/

	int N = 0, i, j, aux, aux2;

	if (N >= 0 && N <= 100){
		while (cin >> N && N != 0){
			// contruir a matriz visualmente
			
			// i = LINHA
			// J = COLUNA

			int matriz[N][N];

				for (i = 0; i < N; i++){
					for (j = 0; j < N; j++){
						matriz[i][j] = 1;
					}
				}

				if (N-2 > 0){
					for (int k = 1; k < N-1; k++){
	  					for (i = k; i < N-k; i++){
							for (j = k; j < N-k; j++){
								matriz[i][j] += 1;
							}
						}
					}
					for (i = 0; i < N; i++){
						for (j = 0; j < N; j++){
							if (j != N-1)
								cout << setw(3) << matriz[i][j] << " ";
							else
								cout << setw(3) << matriz[i][j];
						}
						cout << endl;
					}

					cout << endl;
				}else{
					for (i = 0; i < N; i++){
						for (j = 0; j < N; j++){
							if (j != N-1)
								cout << setw(3) <<  matriz[i][j] << " ";
							else
								cout << setw(3) << matriz[i][j];
						}
						cout << endl;
					}

					cout << endl;
				}
			
			}
		}
	


	return 0;
}