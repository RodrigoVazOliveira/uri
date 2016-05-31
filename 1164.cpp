#include <iostream>

using namespace std;

int main()
{

	/*********
		author: Rodrigo Vaz
		site: http://www.rodrigovaz.com
		e-mail: rodrigovazdeoliveira@gmail.com

		exercicio 1164 URI
	***********/


	int n, soma, t, i;


	cin >> n;


	if (n >= 1 && n <= 20)
	{
		while (true)
		{
			soma = 0;
				if (n != 0)
				{
					cin >> t;

					for (i = 1; i < t; i++)
					{
						if (t % i == 0)
						{
							soma += i;
						}
					}

					if (soma == t)
						cout << t << " eh perfeito" << endl;
					else
						cout << t << " nao eh perfeito" << endl;

				}else
					break;

			n--;			

		}
	}

}