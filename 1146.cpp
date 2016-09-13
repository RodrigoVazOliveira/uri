#include <cstdio>

int main()
{
	int x, i;
	while (true)
	{
		scanf("%d",&x);
		if (x != 0)
		{
			for (i = 1; i <= x; i++)
			{
				if (i != x)
					printf("%d ",i);
				else
					printf("%d\n",i);
			}
		}else{
			break;
		}
	}

	return 0;
}