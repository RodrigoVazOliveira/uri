#include <iostream>

using namespace std;

int main()
{
	int x, i;

	cin >> x;

	if (x >= 1 && x <= 1000)
	{
		for (i = 1; i <= x; i++)
		{
			if (i % 2 != 0)
				cout << i << endl;
		}
	}

	return 0;
}