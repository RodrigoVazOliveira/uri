#include <cstdio>
#include <cstdlib>

struct data{
    int c, s;
    struct data* next;
};

struct stack{
    int size;
    struct data* top;
};

typedef struct stack STACK;
typedef struct data DATA;

STACK* createstack(){

    STACK* temp = (STACK*) malloc(sizeof(STACK));

    if (temp == NULL) return NULL;

    temp->size = 0;
    temp->top  = NULL;

    return temp;

}

void push(STACK* stack, int c, int s){
        
    DATA* temp = (DATA*) malloc(sizeof(DATA));

    temp->c = c;
    temp->s = s;
    temp->next = stack->top;
    stack->top = temp;
   
    stack->size++;
}

DATA* 



int main(){


    int n,k;



    return 0;
}

