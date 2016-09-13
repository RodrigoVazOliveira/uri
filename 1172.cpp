#include <iostream>

using namespace std;

int main()
{
	/*-*************
	author: Rodrigo Vaz De Oliveira
	e-mail: rodrigovazdeoliveira@gmail.com
	site: http://www.rodrigovaz.com
	exercicio 1172 URI
	****************/

	int x[10], i;

	for (i = 0; i < 10; i++)
	{
	 	cin >> x[i];
	}

	for (i = 0; i < 10; i++)
	{
	 	if (x[i] <= 0)
	 		x[i] = 1;

	 	cout << "X[" << i << "] = " <<  x[i] << "\n";
	}

	return 0;
}