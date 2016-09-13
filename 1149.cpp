#include <cstdio>

int main(){

	int A, N,i, soma = 0;

	scanf("%d %d",&A, &N);

	soma += A;

	while (N <= 0) scanf("%d",&N);

	// executar a soma
	for (i = 1; i < N; i++)
		soma += ++A;
	

	printf("%d\n",soma);

	return 0;
}