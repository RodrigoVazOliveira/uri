#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	int idade, i = 0, soma = 0;

	while(true)
	{
		cin >> idade;

		if (idade > 0)
		{
			soma += idade;
			i++;
		}else
			break;
	}

	cout << fixed << setprecision(2) << (double) soma/i << endl;

	return 0;
}