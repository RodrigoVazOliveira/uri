#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, x, y;

	cin >> n;
	while (n != 0)
	{
		cin >> x >> y;

		if (y != 0)
			cout << fixed << setprecision(1) << (double)x/y << endl;
		else
			cout << "divisao impossivel" << endl;

		n--;
	}

	return 0;
}