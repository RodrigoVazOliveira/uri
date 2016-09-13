#include <cstdio>
#include <cstdlib>
#include <cstring>

// tamanho maximo da minha string exigida pelo URI
#define MAX 100001

// tipo de dado a ser trabalhado e os seus ponteiro de proximo e anterior (item no caso)
struct data{
    char data;
    struct data* next, *last;
};

// a lista em sí, ela que fara o manunteção de ordenar, inserir, deletar e etc.
struct list{
    int qt;
    struct data* head, *tail;
};

typedef struct data DATA;
typedef struct list LIST;



// função para criar uma nova lista
LIST* listcreate(){
    LIST* temp = (LIST *) malloc(sizeof(LIST));

    temp->head = temp->tail = NULL; // coloca nulo todos os ponteiros - cabeçalho/calda da lista
    temp->qt   = 0;

    return temp;
}

int qtlist(LIST* L){return L->qt;} // retorna o tamanho da lista


// função para inserir um item no inicio da lista -  cabeçalho
int insertinit(LIST* L, char x){
    
    if (L == NULL) return -1;

    DATA* temp =  (DATA*) malloc(sizeof(DATA));


    // caso esteja totalmente vazia
    if (L->head == NULL && L->tail == NULL){
        temp->data   = x;
        temp->last = L->head;
        temp->next = L->tail;
        L->head    = L->tail  = temp;
        L->qt++;
        
        return 1;
    }else{
        // caso não esteja vazia
        temp->data    = x;
        temp->next = L->head;
        temp->last = NULL;
        L->head->last = temp;
        L->head    = temp;
        L->qt++;

        return 1;
    }
}


// insere item no final da lista - calda da lista
int insertfinal(LIST* L, char x){

    if (L == NULL) return -1;

    DATA* temp = (DATA*) malloc(sizeof(DATA));

    temp->data = x;

    // caso ela esteja já sendo utilizada qt > 0
    if (L->tail != NULL){
        temp->last = L->tail;
        temp->next = NULL;
        L->tail->next = temp;
        L->tail     = temp;
        L->qt++;
        return 1;
    }else {
        // caso a lista esteja vazia
        temp->last = L->tail;
        temp->next = NULL;
        L->tail     = temp;
        L->head     = L->tail;
        L->qt++; 
        return 1;
    }

    return 1;

}

// inserindo dados no meio da lista
int insertmeans(LIST* L,unsigned int p, char x){

    DATA* j = L->head; // pega a cabeça da lista

    DATA* k = (DATA*) malloc(sizeof(DATA)); // aloca um novo item
    k->data = x;// coloca o caracter que foi fornecido pelo usuario - que no caso sera percorrido por um loop

    // p e um contador que sera fornecido 
    // quando [ for percorrido no loop p valera 0
    // até encontrar e encontrar ] ai a lista vai ser preenchida no final
    // no main fica mais claro isso
    // a intenção é j percorrer ate a ultima letra para que assim seja inserido o k de forma ordenado
    // fazendo assim desncessário a ordenação com algum algoritimo.
    if (p > 0){
        while (--p) j = j->next;
    }

    // exemplo: se tiver "bu", p vale 1 
    // ao percorrer j, j-> data == u e assim k sera inserido apos o u
    k->next = j->next;
    k->last = j;
    j->next = k;

    L->qt++;

    return 1;

}


// aqui limpa a lista mas não libera ela da memoria 
//seria como um reset para que seja reutilizado para um novo caso de teste
void clearlist(LIST* L){
    if (L != NULL){
        DATA* temp = L->head;
        DATA* x;

        while (temp != NULL){
           x  = temp;
            temp = temp->next;
            free(x);
            L->qt--;
        }
    }
    L->head = L->tail = NULL;

}


// aqui libera ela totalmente da memoria
void freelist(LIST* L){

    if (L != NULL){
        clearlist(L); 
        free(L);    
    }
}


// mostra na tela caracter por caracter
void printlist(LIST* L){

    unsigned int i, size = (unsigned int) L->qt;

    DATA* temp = L->head;

    for (i = 0; i < size; i++){
        printf("%c", temp->data);
        temp = temp->next;
    }
}


int main (){


    char string[MAX]; /// variavel que sera utilizada para ler a frase
    unsigned i, j, k,m, size; // variaveis para loops e size para pegar o tamanha do string corretamente.
    LIST* l = listcreate(); // inciia uma nova lista

    // lendo o texto ate o fim do arquivo 
    while (scanf("%s", string) != EOF){
    
            size    = (unsigned int) strlen(string); // seta o tamanho da string 
            m = 0; // se houver mais de um '['
            j = 0; // end = 0 home = 1
            k = 0; // contador de posições de uma palavra dentro de um [exemplo]
            for (i = 0; i < size; i++){
                if (string[i] == '[') {
                        j = 1;
                        k = 0;
                }
                if (string[i] == ']') j = 0;
                if (string[i] == '[' && qtlist(l) == 0) j = 0;                

                if (string[i] != '[' && string[i] != ']'){
                    if (j == 1 && qtlist(l) != 0){ 
                       if (k == 0) insertinit(l, string[i]);
                       else insertmeans(l, k, string[i]);
                       k++;
                    }else{
                        // j = 0 logo "end"
                          
                            insertfinal(l, string[i]);
                        
                        
                    }
                }
            }
    
            printlist(l);
            printf("\n");
            clearlist(l);
    }


    
    freelist(l);

    return 0;
}


