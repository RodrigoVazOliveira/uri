#include <cstdio>

int main()
{
	int password;

	while (true)
	{
		scanf("%d",&password);

		if (password != 2002)
			printf("Senha Invalida\n");
		else{
			printf("Acesso Permitido\n");
			break;
		}

	}

	return 0;
}