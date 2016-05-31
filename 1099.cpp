#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n, x, y, i = 0, j = 0, *soma, aux;

	cin >> n;

	soma = (int *) malloc(n * sizeof(int));
	aux = n;
	for (i = n-1; i >= 0; i--)
	{
		*(soma+i) = 0;
	}

	while (n != 0)
	{
		cin >> x >> y;

		if (x > y)
		{
			for (i = y+1; i < x; i++)
			{
				if (i % 2 != 0)
					*(soma+j) += i; 
			}
		}else
		{
			for (i = x+1; i < y; i++)
			{
				if (i % 2 != 0)
					*(soma+j) += i; 
			}
		}
		n--;
		j++;
	}

	for (i = 0; i < aux; i++)
		cout << *(soma+i) << endl;
	free(soma);

	return 0;
}