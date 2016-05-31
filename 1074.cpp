#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n, count;

	cin >> count;

	while (count--)
	{
		cin >> n;

			if (n % 2 == 0)
				cout << "EVEN ";
			if (n % 2 != 0)
				cout << "ODD ";
			if (n > 0)
				cout << "POSITIVE" << endl;
			else
				cout << "NEGATIVE" << endl;

			if (n == 0){
				cout << "NULL" << endl; 
				continue;
			}
	}

	return 0;
}