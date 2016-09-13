#include <iostream>
#include <iomanip>
 
using namespace std;
 
#define MAX 12
 
int main()
{
    double matriz[MAX][MAX], soma;
    int contar = 0, i, j, aux = 1;
    char opcao;
 
    cin >> opcao;
 
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            cin >> matriz[i][j];
        }
    }
 
    if (opcao == 'S')
    {
        for (i = MAX-1; i > 6; i--)
        {
            for (j = i-1; j >= aux; j--){
            	soma += matriz[j][i];
            }
            aux++;
        }
        cout << setiosflags(ios::fixed) << setprecision(1) << soma << endl;
    }
    else if (opcao == 'M')
    {
        for (i = MAX-1; i > 6; i--)
        {
            for (j = i-1; j >= aux; j--){
            	soma += matriz[j][i];
            	contar++;
            }
            aux++;
        }
        cout << setiosflags(ios::fixed) << setprecision(1) << soma/contar << endl;
    }
 
 
    return 0;
}