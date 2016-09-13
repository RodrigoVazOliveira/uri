#include <iostream>

using namespace std;

int main()
{

	/*****
	author: Rodrigo Vaz
	site: http://www.rodrigovaz.com
	e-mail: rodrigovazdeoliveira@gmail.com

	exercicio: 1159 - URI
	*****/

	int x, soma, i;

	// ler x e caso x for zero saira do loop

	while (cin >> x && x != 0)
	{
		soma = 0;
		i = 4;
		
		if (x % 2 != 0) x++;

		for (i = 0; i <= 4; i++)
		{
			soma += x;
			x += 2;
		}

		cout << soma << endl;
	}



	return 0;

}