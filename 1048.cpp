#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double salario, reajuste;
	int percente;

	cin >> salario;

	if (salario > 0 && salario <= 400.00)
	{
		percente = 15;
		reajuste = salario + (salario * 0.15);
		cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << salario * 0.15 << endl;
		cout << "Em percentual: " << percente << " %" << endl;
	}
	else if (salario >= 400.01 && salario <= 800.00)
	{
		percente = 12;
		reajuste = salario + (salario * 0.12);
		cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << salario * 0.12 << endl;
		cout << "Em percentual: " << percente << " %" << endl;		
	}
	else if (salario >= 800.01 && salario <= 1200.00)
	{
		percente = 10;
		reajuste = salario + (salario * 0.10);
		cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << salario * 0.10 << endl;
		cout << "Em percentual: " << percente << " %" << endl;		
	}
	else if (salario >= 1200.01 && salario <= 2000.00)
	{
		percente = 7;
		reajuste = salario + (salario * 0.07);
		cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << salario * 00.07 << endl;
		cout << "Em percentual: " << percente << " %" << endl;		
	}
	else if (salario > 2000.00)
	{
		percente = 4;
		reajuste = salario + (salario * 0.04);
		cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << salario * 0.04 << endl;
		cout << "Em percentual: " << percente << " %" << endl;
	}


	return 0;
}