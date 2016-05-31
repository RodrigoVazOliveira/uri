#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int v1,v2,v3;

	cin >> v1 >> v2 >> v3;

	if (v1 > v2 && v1 > v3 && v2 > v3)
		cout << v1 << endl << v2 << endl << v3 << endl;
	else if (v2 > v1 && v2 > v3 && v1 > v3)
		cout << v2 << enadl << v1 << endl << v3 << endl;
	else if (v2 > v1 && v2 > v3 && v3 > v1)
		cout << v2 << endl << v3 << endl << v1 << endl;
	else if (v1 > v2 && v3 > v2 && v1 > v3)
		cout << v1 << endl << v3 << endl << v2 << endl;
	else if (v3 > v2 && v3 > v1 && v1 > v2)
		cout << v3 << endl << v1 << endl << v2 << endl;	
	else if (v3 > v2 && v3 > v1 && v2 > v1)
		cout << v3 << endl << v2 << endl << v1 << endl;	

	cout << endl;
	cout << v1 << endl << v2 << endl << v3 << endl;
	return 0;
}