#include <iostream>

using namespace std;

int main()
{
	int x, i = 1;

	cin >> x;

	while (i < 7){
		x++;
		if (x % 2 != 0)
		{
			cout << x << endl;
			i++;
		}
	}

	return 0;
}