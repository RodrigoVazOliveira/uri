#include <cstdio>

#define MAX 1000

int main(){

	/**************
	Author: Rodrigo Vaz
	E-mail: rodrigovazdeoliveira@gmail.com
	site: http://www.rodrigovaz.com
	***************/

	int T, N[MAX], i, aux = 0;

	scanf("%d",&T);

	if (T >= 2 && T <= 50){
		for (i = 0; i < MAX; i++){
			if (aux == T)
				aux = 0;

			if (aux != T){
				N[i] = aux;
				aux++;
			}
		}

		for (i = 0; i < MAX; i++)
		{
			printf("N[%d] = %d\n",i,N[i]);
		}
	}

	return 0;
}