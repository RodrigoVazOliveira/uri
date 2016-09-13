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

    int i=1, j, k, n, num[MAX];
    STACK* pilha = create();
    bool result, breakpoint;

    while (scanf("%d", &n) && n > 0)
    {
        while (1)
        {
            // auxilio na parada a da mermutação
            breakpoint = result = false;
            j = 1;
            for (i = 1; i <= n; i++)
            {
                scanf("%d", &num[i]);
                if (num[i] == 0){
                    breakpoint = true;
                    printf("\n"); // salto na linha como demonstrado na saida do uri
                    break; // para o loop de leitura de ordem de vagoes
                }
            }    
            
            
            if (breakpoint == true) break; // sai do loop e de permutação e le mais um novo grupo de permutação

            i = 1; 

            while (i <= n && result == false)
            {
                while(1){
                    if (!empty(pilha) && top(pilha) == num[i])
                    {
                        pop(pilha);
                        break;
                    }else if (j <= n)
                    {
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
            
            if (empty(pilha)) printf("Yes\n");
            else printf("No\n");

            clear(pilha);

        }// loop de permutação    
    }

    destroy(pilha);

    return 0;
}
