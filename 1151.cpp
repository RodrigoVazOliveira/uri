#include <cstdio>

int main()
{
	int inicio = 0, fim = 1, i,n, auxiliar;

	scanf("%d",&n);

	if (n > 0 && n < 46){
		for (i = 0; i < n; i++)
		{
			if (i != n-1)
			{
				printf("%d ",inicio);
				auxiliar = inicio + fim;
				inicio = fim;
				fim = auxiliar;
			}else
			{
				printf("%d\n",inicio);
				auxiliar = inicio + fim;
				inicio = fim;
				fim = auxiliar;
			}
		}
	}
	return 0;
}