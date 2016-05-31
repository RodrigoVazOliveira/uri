#include <iostream>

using namespace std;

int main()
{
	int x, y, i;
	long int soma = 0;

	cin >> x >> y;

	if (x > y)
	{
		for (i = y; i <= x; i++)
		{
			if (i % 13 != 0)
				soma += i;
		}
	}else{
		for (i = x; i <= y; i++)
		{
			if (i % 13 != 0)
				soma += i;
		}		
	}

	cout << soma << endl;

	return 0;
}