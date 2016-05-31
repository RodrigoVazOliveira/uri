#include <stdio.h>

using namespace std;

int main()
{
	//1061 uri 
	int diaIni, horaIn, minIni, segIn,
		diaFim, horaFim, minFim, segFim,
		dia, hora, min, seg;

	scanf("Dia %d",&diaIni);
	scanf("%d : %d : %d\n",&horaIn, &minIni, &segIn);
	scanf("Dia %d",&diaFim);
	scanf("%d : %d : %d",&horaFim, &minFim, &segFim);

	dia 	= diaFim  - diaIni;
	hora 	= horaFim - horaIn;
	min 	= minFim  - minIni;
	seg 	= segFim  - segIn;

	if (seg < 0)
	{
		seg += 60;
		min--;
	}

	if (min < 0)
	{
		min += 60;
		hora--;
	}

	if (hora < 0)
	{
		hora += 24;
		dia--;
	}

	printf("%d dia(s)\n",dia);
	printf("%d hora(s)\n",hora);
	printf("%d minuto(s)\n",min);
	printf("%d segundo(s)\n",seg);

	return 0;
}