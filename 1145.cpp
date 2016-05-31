#include <cstdio>


int main()
{
	int x, y, i, j, aux = 1;

	scanf("%d",&x);
	scanf("%d",&y);

	if (x > 1 && x < 20 && y > x && y < 100000)
	{
		for(i = 1; i <= y; i++)
		{
			if (aux != x)
			{
				printf("%d ", i);
				aux++;
			}else{
				printf("%d\n",i);
				aux = 1;
			}
		}
	}

	return 0;
}