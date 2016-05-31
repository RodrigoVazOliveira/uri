#include <iostream>

using namespace std;

int main()
{
	int n[5], i, v[4];
	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	v[3] = 0;

	for (i = 0; i < 5; i++)
		cin >> n[i];

	// contagem de pares ou impar
	for (i = 0; i < 5; i++)
	{
		if (n[i] % 2 == 0)
			v[0]++;
		else
			v[1]++;
	}

	// verifica negativos e positivos
	for (i = 0; i < 5; i++)
	{
		if (n[i] > 0)
			v[2]++;
		else if (n[i] != 0)
			v[3]++;
	}


	cout << v[0] << " valor(es) par(es)" << endl;
	cout << v[1] << " valor(es) impar(es)" << endl;
	cout << v[2] << " valor(es) positivo(s)" << endl;
	cout << v[3] << " valor(es) negativo(s)" << endl;

}