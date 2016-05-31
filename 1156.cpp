#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// exercicio 1156
	// author: rodrigo vaz
	// site: www.rodrigovaz.com

	double s = 1.0, aux = 2.0;
	int i;


	for (i = 3; i <= 39; i += 2)
	{
		s += (double) i / aux;
		aux = (double)aux * 2;
	}

	cout << fixed << setprecision(2) << s << endl;

	return 0;
}