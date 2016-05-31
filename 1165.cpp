#include <iostream>

using namespace std;

int main()
{
	/*-*****************
	author: Rodrigo Vaz
	site: http://www.rodrigovaz.com
	e-mail: rodrigovazdeoliveira@gmail.com
	*********************/

	int n, teste, i, soma = 0;

	cin >> n;

	while (true)
	{
		soma = 0;
		if (n != 0)
		{
			cin >> teste;

			for (i = 1; i <= (teste/2); i++)
			{
				if (teste % i == 0)
					soma += 1;
			}

			if (soma == 1)
				cout << teste << " eh primo" << endl;
			else
				cout << teste << " nao eh primo" << endl;
		}else
			break;

		n--;
	} 

	return 0;
}