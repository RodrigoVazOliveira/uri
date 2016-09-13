#include <cstdio>

int fator(int n){
	if (n == 0 || n == 1)
		return 1;

	return	n * fator(n-1);
}

int main()
{
	int n, i, fatorial;

	scanf("%d",&n);

	printf("%d\n",fator(n));
	

	return 0;
}