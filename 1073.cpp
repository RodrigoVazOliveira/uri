#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n, i;

	cin >> n;

	if (n > 5 && n < 2000)
	{
		for (i = 1; i <= n; i++)
		{
			if (i % 2 == 0)
				cout << i << "^2 = " << (long int) pow(i,2) << endl;
		}
	}

	return 0;
}