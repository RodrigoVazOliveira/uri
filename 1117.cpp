#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double n1, soma = 0;
	int i = 0;

	while (true)
	{
		
		if (i == 2)
		{
			cout << "media = " << fixed << setprecision(2)
		 			<< (double)soma/2 << endl;
		 	break;
		}else{
			cin >> n1;
			if (n1 >= 0 && n1 <= 10)
			{
				soma += n1;
				i += 1;
			}else
				cout << "nota invalida" << endl;
		}
	}

	

	return 0;
}