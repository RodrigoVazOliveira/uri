#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double s = 1.0;
	int i;

	for (i = 2; i <= 100; i++)
		s += (double) 1.0/i;

	cout << fixed << setprecision(2) << s << endl;
	return 0;
}