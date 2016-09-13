#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/**************
	Author: Rodrigo Vaz
	e-mail: rodrigovazdeoliveira@gmail.com
	exercicio 1175 URI
	****************/

	int a[20], aux;
	int i, j=19;

	for (i = 0; i < 20; i++)
		cin >> a[i];

	for (i = 0; i < 10; i++)
	{
		aux  = a[i];
		a[i] = a[j];
		a[j] = aux;
		j--;
	}

	for (i = 0; i < 20; i++)
		cout << "N[" << i << "] = " << a[i] << endl;

	return 0;
}