#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int h1,h2,m1,m2, h, m;

	cin >> h1 >> m1 >> h2 >> m2;

	// efetuar o calculo
	if (h1 == h2 && m1 == m2)
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
	else
	{
		if (m1 > m2)
		{
			m = (60-m1) + m2;
			h = (h2 - h1)-1;
		}
		else
		{
			m = m2 - m1;
			h = h2 - h1;
		}

		if (h1 > h2)
			h = (23-h1) + h2;
		cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
	}



	return 0;
}