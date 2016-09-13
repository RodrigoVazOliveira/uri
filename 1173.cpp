#include <cstdio>

int main()
{
	/**************
	Author: Rodrigo Vaz
	e-mail: rodrigovazdeoliveira@gmail.com
	exercicio 1173 URI
	****************/

	int n[10],i, aux = 0;

	scanf("%d",&n[0]);

	for (i = 0; i < 10; i++)
	{
		if (i == 0)
			aux = n[i];
		else
			{
				aux = n[i-1];
				n[i] = aux * 2;
			}	

		printf("N[%d] = %d\n",i,n[i]);
	}



	return 0;
}