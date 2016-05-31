#include <iostream>
#include <iomanip>

using namespace std;

// sou mais palmeiras hahahaha

int main()
{
	int gremio, inter, pt_gremio = 0, pt_inter = 0, opcao = 0, empate = 0;


	while (true)
	{
		if (opcao == 2)
			break;
		cin >> inter >> gremio;
			if (gremio > inter)
				pt_gremio++;
			else if (inter > gremio)
				pt_inter++;
			else if (inter == gremio)
				empate++;

		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin  >> opcao;
	}

	cout << pt_gremio+pt_inter+empate << " grenais" << endl;
	cout << "Inter:" << pt_inter << endl;
	cout << "Gremio:" << pt_gremio << endl;
	cout << "Empates:" << empate << endl;
	if (pt_inter == pt_gremio)
		cout << "Nao houve vencedor" << endl;
	else if (pt_gremio > pt_inter)
		cout << "Gremio venceu mais" << endl;
	else if (pt_gremio < pt_inter)
		cout << "Inter venceu mais" << endl;

	return 0;
}