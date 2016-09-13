#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double salario, auxiliar;

	cin >> salario;

	if (salario > 0.00 && salario <= 2000.00)
		cout << "Isento" << endl;
	else if (salario >= 2000.01 && salario <= 3000.00)
		cout << fixed << setprecision(2) << "R$ " << (salario - 2000.00) * 0.08 << endl;
	else if (salario >= 3000.01 && salario <= 4500.000)
		cout << fixed << setprecision(2) << "R$ " << (1000.00 * 0.08) + (salario - 3000.00) * 0.18 << endl;
	else if (salario > 4500.00)
		cout << fixed << setprecision(2) << "R$ " << 1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28 << endl;

	return 0;
}