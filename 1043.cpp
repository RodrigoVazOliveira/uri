#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double A,B,C;

	cin >> A >> B >> C;

	if ((B-C) < A && A < (B+C) && (A-C) < B && B < (A+C) && (A-B) < C && C < (A+B))
	{
		cout << "Perimetro = " << fixed << setprecision(1) << A+B+C << endl;
	}
	else
	{
		cout << "Area = " << fixed << setprecision(1) << ((A+B)*C)/2 << endl;
	}

	return 0;
}