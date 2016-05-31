#include <iostream>

using namespace std;

int main()
{
	int codigo, alcool = 0, gasolina = 0, diesel = 0;

	while(true)
	{
		if (codigo == 4)
			break;
		else{
			cin >> codigo;
			if (codigo == 1)
				alcool++;
			else if (codigo == 2)
				gasolina++;
			else if (codigo == 3)
				diesel++;
		}
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcool << endl;
	cout << "Gasolina: " << gasolina << endl;
	cout << "Diesel: " << diesel << endl;

	return 0;
}