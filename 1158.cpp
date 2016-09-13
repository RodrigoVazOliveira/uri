#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{

	// exercicio 1158
	// author: Rodrigo Vaz
	// site: http://www.rodrigovaz.com

	int n, i, *soma, aux, x, y;

	cin >> n; // ler quantidades de testes

	aux = n; // usarei futuramente para mostrar os valores na tela

	// alocar ponteiro para guardar as somas feitas nos testes dos impares
	soma = (int *) malloc(n * sizeof(int)); 

	// zerar todos o vetor de soma
	for (i = 0; i < n; i++)
		*(soma+i) = 0;

	i = 0;
	while (true)
	{
		if (n != 0)
		{
			cin >> x >> y;
			while (true)
			{
				if (y == 0) break;
				if (x % 2 != 0)
				{
					*(soma+i) += x;
					x++;
					y--;
				}else
					x++;
			}
			n--;
			i++;
		}else{
			break;
		}
	}

	for (i = 0; i < aux; i++)
	{
		cout << *(soma+i) << endl;
	}

	free(soma);

	return 0;

}