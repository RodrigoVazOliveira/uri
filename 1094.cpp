#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int n, quantia, a = 0, b = 0, c = 0, total = 0;
	char tipo;

	cin >> n;

	while (n--)
	{
		cin >> quantia;
		cin >> tipo;

		total += quantia;

		if (tipo == 'C')
			a += quantia;
		else if (tipo == 'R')
			b += quantia;
		else if (tipo == 'S')
			c += quantia;
	}

	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << a << endl;
	cout << "Total de ratos: " << b << endl;
	cout << "Total de sapos: " << c << endl;
	cout << "Percentual de coelhos: " << fixed << setprecision(2) 
		 << (double) (a*100)/total << " %" << endl;
	cout << "Percentual de ratos: " << fixed << setprecision(2) 
		 << (double) (b*100)/total << " %" << endl;
	cout << "Percentual de sapos: " << fixed << setprecision(2) 
		 << (double) (c*100)/total << " %" << endl;

	return 0;
}