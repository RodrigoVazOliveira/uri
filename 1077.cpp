#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

/*****************************************************************************************
 *
 *  Author: Rodrigo Vaz De Oliveira
 *  URI JUDGE - PROBLEMS 1077 
 *
 *  O Professor solicitou que você escreva um programa que converta uma expressão na forma infixa (como usualmente conhecemos) para uma expressão na forma posfixa. Como você sabe, os termos in (no meio) e pos (depois) se referem à posição dos operadores. O programa terá que lidar somente com operadores binários +,-,*,/,^, parênteses, letras e números. Um exemplo seria uma expressão como:
 *  (A*B+2*C^3)/2*A. O programa deve converter esta expressão (infixa) para a expressão posfixa: AB*2C3^*+2/A*
 *   
 *
 *   Entrada
 *
 *   A primeira linha da entrada contém um valor inteiro N (N < 1000), que indica o número de casos de teste. Cada caso de teste a seguir é uma expressão válida na forma infixa, com até 300 caracteres.
 *
 *   Saída
 *
 *   Para cada caso, apresente a expressão convertida para a forma posfixa.
 *
 *
 *
 ******************************************************************************************/

// constant for limit character 
const int MAX = 301;

// create the struct the stack the is utils.
// struct the data for work form
struct stack{
    char data;
    unsigned int total;
    struct stack* top;
};

typedef struct stack STACK;

STACK* stack()
{
    STACK* temp = (STACK*) malloc(sizeof(STACK));
    temp->total = 0;
    temp->top   = NULL;

    if (temp == NULL) exit(1);

    return temp;
}

unsigned int total(STACK* s) 
{
    if (s != NULL)
    {
        return s->total;
    }
}

bool empty(STACK* s)
{
    return (int)total(s) == 0; 
}

char top(STACK* s)
{
    if (!empty(s))
    {
        return s->data;
    }
}

void push(STACK* s, char data)
{
    if (!empty(s))
    {
        STACK* temp = stack();
        temp->data  = data;
        temp->top   = s->top;
        s->top      = temp;
        s->total++;
     }else
    {
        STACK* temp = stack();
        temp->data  = data;;
        s->top      = temp;
        s->total++;      
    }
}

void pop(STACK* s)
{
    STACK* temp;
    if (!empty(s))
    {
        temp   = s->top;
        s->top = temp->top;
        free(temp);
        s->total--;
    }
}

void clear(STACK* s)
{
    int i = (int) total(s);

    for (i; empty(s); i--)
    {
        pop(s);
    }         
    
}

void destroy(STACK* s)
{
    clear(s);
    free(s);
}

int main()
{
    unsigned int i, j, k, l; // utils possible loops
    int numberTest; // cases tests information are user
    char expression[MAX]; // expression
    
    scanf("%d", &numberTest); // ready cases tests

    while(--numberTest)
    {
        // ready expression
        scanf("%d", expression);


    }

    return 0;
}
