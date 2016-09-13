#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;



int main()
{
	double l[3];
	cin >> l[0] >> l[1] >> l[2];

	sort(l,l+3,greater<double>());

	if (l[0] > (l[1]+l[2]) || l[0] == (l[1] + l[2])) 
		cout << "NAO FORMA TRIANGULO" << endl;
	else {
	if ((double)pow(l[0],2) == (double)(pow(l[1],2) + pow(l[2],2)))
		cout << "TRIANGULO RETANGULO" << endl;
	if ((double)pow(l[0],2) > (double)(pow(l[1],2) + pow(l[2],2)))
		cout << "TRIANGULO OBTUSANGULO" << endl;
	if ((double)pow(l[0],2) < (double)(pow(l[1],2) + pow(l[2],2)))
		cout << "TRIANGULO ACUTANGULO" << endl;
	if (l[0] == l[1] && l[0] == l[2] && l[1] == l[2])
		cout << "TRIANGULO EQUILATERO" << endl;
	if ((l[0] == l[1] && l[0] != l[2]) || (l[0] == l[2] && l[0] != l[1]) || (l[1] == l[2] && l[1] != l[0]))
		cout << "TRIANGULO ISOSCELES" << endl;
	}
	return 0;
}