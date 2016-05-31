#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	 int i = 0,j = 0, opcao = 0;
	 double nota, soma;
	while (true)
	{
		if (i == 2)
		{
			if (j == 2)
				cout << "media = " << fixed << setprecision(2) << (double)soma/2 << endl;
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> opcao;
			if (opcao < 1 || opcao > 2){
				j = 0;
				continue;
			}
			else if (opcao == 1)
			{
				i = 0;
				j = 0;
				soma = 0;
			}else if (opcao == 2)
			{
				break;
			}
		}else
		{
			cin >> nota;
			if (nota >= 0 && nota <= 10)
			{
				soma += nota;
				i++;
				j++;
			}else
				cout << "nota invalida" << endl;
		}
	}


	return 0;
}