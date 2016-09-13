#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	int n,aux,i = 0;
	double v1,v2,v3, *notas;

	cin >> n;
	aux = n;

	notas = (double*) malloc(n*sizeof(double));

	while (n--)
	{
		cin >> v1 >> v2 >> v3;

		*(notas+i) = (double)(v1*2 + v2*3 + v3*5)/10;
		i++;
	}

	for (i = 0; i < aux; i++)
	{
		cout << fixed << setprecision(1)
			 << *(notas+i) << endl;
	}

	free(notas);

	return 0;
}