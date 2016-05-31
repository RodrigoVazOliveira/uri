#include <iostream>

using namespace std;

int main()
{
	int n, i, j = 0, aux = 0;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = aux+1; j < aux+4; j++)
		{
			cout << j << " ";
		}
		aux = j;
		cout << "PUM" << endl;
	}


	return 0;
}