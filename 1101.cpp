#include <iostream>

using namespace std;

int main()
{
	int m,n, sum = 0, i;

	while (true)
	{
		cin >> m >> n;
		if (m > 0 && m != 0 && n > 0 && n != 0)
		{
			sum = 0;
			if (m > n)
			{
				for (i = n; i <= m; i++)
				{
					cout << i << " ";
					sum += i;
					if (i == m)
						cout << "Sum=" << sum << endl;
				}
			}else
			{
				for (i = m; i <= n; i++)
				{
					cout << i << " ";
					sum += i;
					if (i == n)
						cout << "Sum=" << sum << endl;
				}				
			}
		}
		else
			break;
	}



	return 0;
}