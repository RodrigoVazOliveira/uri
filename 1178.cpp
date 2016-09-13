#include <iostream>
#include <iomanip>

using namespace std;

#define MAX 100

int main(){

	/**************
	Author: Rodrigo Vaz
	E-mail: rodrigovazdeoliveira@gmail.com
	site: http://www.rodrigovaz.com
	***************/

	int i;
	double X,N[MAX], aux = 0;

	cin >> X;

	N[0] = X;

	cout << "N[0] = " << fixed << setprecision(4) << X << endl;

	for (i = 1; i < MAX; i++){
		N[i] = N[i-1]/2;
		cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
	}


	return 0;
}