#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, aux = 0;
	double n[6];
	
	for (i = 0; i < 6; i++)
		cin >> n[i];

	for (i = 0; i < 6; i++)
	{
		if (n[i] > 0)
			aux += 1;
	}

	cout << aux << " valores positivos" << endl;

	return 0;
}