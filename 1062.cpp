#include <cstdio>
#include <cstdlib>

using namespace std;

struct stack{
    int x, size;
    struct stack* top;
};


typedef struct stack STACK;

STACK* create(){

    // alocando memoria
    STACK* temp = (STACK *) malloc(sizeof(STACK));
    temp->size  = 0; // inciamdno o tamnho
    temp->top   = NULL; // ponteiro para nulo

    return temp;

}

void push(STACK* stack, int x){

    STACK* temp = create();
    temp->x     = x;

    temp->top   = stack->top;
    stack->top  = temp;
    stack->size++;

}

int size(STACK* stack) {return stack->size; }
int empty(STACK* stack) {return size(stack) == 0; }

int top(STACK* stack) {
    if (!empty(stack))
        return stack->top->x;   
}

int pop(STACK* stack){
    if (!empty(stack)){
        STACK* temp = stack->top;
        int x = stack->top->x;

        stack->top   = temp->top;
        stack->size--;
        free(temp);
        
        return x;        
    }
}

int clear(STACK* stack){
    if (!empty(stack)){
        return pop(stack) && clear(stack);
    }
}

void destroy(STACK* stack){
    clear(stack);
    free(stack);
}

#define MAX 10001

int main(){

    int num[MAX], i, j, n;
    STACK* pilha = create();
    bool result = false, breakpoint = false;

    while(scanf("%d", &n) && n > 0){
        // preenchendo os vagoes na estaçao
        for (i = 1; i <= n; i++){
            scanf("%d", &num[i]);
            if (num[i] == 0){
                breakpoint = true;
                printf("\n");
                break;
            }
        }


        result = false;
        i = 1; j = 1;
        while (i <= n && result == false && breakpoint == false){
            while(1){
                
                if (!empty(pilha) && top(pilha) == num[i]){
                    
                    pop(pilha);
                    break;
                }else if (j <= n){
                        push(pilha, j); 
                        j++;
                        if (top(pilha) == num[i]){
                            pop(pilha);
                            break;
                        }
                }else{
                    result = true;
                    break;
                }
            }        
            i++;
        }
        if (breakpoint == true) break;
        if (empty(pilha)) printf("Yes\n");
        else printf("No\n");

        clear(pilha);
    
    }    

    destroy(pilha);

	return 0;
}












