#include <iostream>

using namespace std;

int main()
{
	long int x,y,i;

	cin >> x >> y;

	if (x > y)
	{
		for (i = y+1; i < x; i++)
		{
			if (i % 5 == 2 || i % 5 == 3)
				cout << i << endl;
		}
	}else{
		for (i = x+1; i < y; i++)
		{
			if (i % 5 == 2 || i % 5 == 3)
				cout << i << endl;
		}		
	}


	return 0;
}