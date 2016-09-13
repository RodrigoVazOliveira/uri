#include <iostream>

using namespace std;

int main()
{
	int i,j, aux;

	for (i = 1; i <= 9; i+=2)
	{
		j = i+6;
		aux = j - 3;
		for (j = i+6; j > aux; j--)
		{
			cout << "I=" << i << " J=" << j << endl;
		}
	}

	return 0;
}