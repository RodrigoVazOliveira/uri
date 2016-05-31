#include <iostream>

using namespace std;


long long int fibonacci(long long int n)
{
	long long int i = 1, j = 0, k, aux;
	for (k = 1; k <= n; k++)
	{
		aux = i + j;
		i 	= j;
		j   = aux;
	} 

	return aux;
	
}

int main()
{
	int n, i; 

	cin >> n;

	long long int fib[n];

	i = 0;
	while(true)
	{
		if (i != n){
			cin >> fib[i];
			cout << "Fib(" << fib[i] << ") = ";
			fib[i] = fibonacci(fib[i]);
			cout << fib[i] << endl;
		}else
			break;
		
		i++;
	}


	return 0;
}