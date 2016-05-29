#include <cstdio>
#include <cstdlib>

using namespace std;

struct stack{
	int x, size = 0;
	struct stack *top;
};

typedef struct stack STACK;

void push(STACK* stack, int x){

	STACK* temp = (STACK*) malloc(sizeof(STACK));
	temp->size  = stack->size+1;
	temp->x     = x;

	temp->top   = NULL;
	stack->top  = temp;
	stack->size++;

}

int top(STACK* stack) {return stack->top->x;}

int size(STACK* stack) {return stack->size;}

int empty(STACK* stack) {return (stack->size == 0); }

int pop(StACK* stack){

	STACK* temp;
	int x;
	if (!empty(stack)){
		temp = stack->top;
		x    = temp->x;
		stack->top = temp->top;
		stack->size--;
		free(temp);
		return x;
	}
}


void clear(STACK* stack, int size){

	if (size > 0){
		pop(stack);
		return clear(stack, size--);
	}

}

int main(){


	// vagaoes - total de vagoes
	// a = lado a dos trilhos - b = lado b dos trilhos
	// estacao sera vagoes na estacao
	int vagoes = 1, c;
	STACK a, b, estacao;


	while(scanf("%d", &vagoes) && vagoes > 0){
		



	}


	return 0;
}