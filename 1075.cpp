#include <iostream>

using namespace std;

int main()
{
	int n, i = 0;

	cin >> n;

	while (i != 10000)
	{
		if (i % n == 2)
		{
			cout << i << endl;
			i++;
		}else
			i++;
	}

	return 0;
}