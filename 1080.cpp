#include <iostream>

using namespace std;

int main()
{
	int n[100], i, posicao, valor = 0;

	for (i = 0; i < 100; i++)
	{
		cin >> n[i];
	}


	for (i = 0; i < 100; i++)
	{
		if (n[i] > valor)
		{
			valor = n[i];
			posicao = i+1;
		}

	}


	cout << valor << endl;
	cout << posicao << endl;


	return 0;
}