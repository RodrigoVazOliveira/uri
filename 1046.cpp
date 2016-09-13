#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int h1,h2, temp;

	cin >> h1 >> h2;

	temp = 24 - h1 + h2;

	if (temp > 24)
		temp = abs(24 - (24-h1+h2));
	cout << "O JOGO DUROU " << temp << "HORA(S)" << endl;

	return 0;
}