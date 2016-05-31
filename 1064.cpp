#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double v[6], media = 0.0;
	int i, aux = 0;

	for (i = 0; i < 6; i++)
		cin >> v[i];


	for (i = 0; i < 6; i++)
	{
		if (v[i] > 0)
		{
			media += v[i];
			aux++;
		}
	}

	cout << aux << " valores positivos" << endl;
	cout << fixed << setprecision(1) << (double)(media/aux) << endl;


	return 0;
}