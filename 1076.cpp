#include <iostream>

using namespace std;

int main()
{
	int n, i;

	cin >> n;

	if (n > 2 && n < 1000)
	{
		for (i = 1; i <= 10; i++)
		{
			cout << i << " x " << n << " = " << (long int)(i*n) << endl;
		}
	}

	return 0;
}