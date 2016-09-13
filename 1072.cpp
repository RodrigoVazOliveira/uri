#include <iostream>

using namespace std;

int main()
{
	int n, count, i = 0, j = 0;

	cin >> count;

	while (count--)
	{
		cin >> n;
		if (n >= 10 && n <= 20)
			i++;
		else
			j++;
	}

	cout << i << " in" << endl;
	cout << j << " out" << endl;

	return 0;
}