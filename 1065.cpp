#include <iostream>

using namespace std;

int main()
{
	int v[5], aux = 0, i;

	for (i = 0; i < 5; i++)
		cin >> v[i];

	for (i = 0; i < 5; i++)
	{
		if (v[i] % 2 == 0)
			aux++;
	}

	cout << aux << " valores pares" << endl;


}