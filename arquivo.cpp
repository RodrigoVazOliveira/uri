#include <cstdio>
#include <cstdlib>
#include <cstring>

// tamanho maximo da minha string exigida pelo URI
#define MAX 100001

struct data{
    char data;
    struct data* next, *last;
};

struct list{
    int qt;
    struct data* head, *tail;
};

typedef struct data DATA;
typedef struct list LIST;


LIST* listcreate(){
    LIST* temp = (LIST *) malloc(sizeof(LIST));

    temp->head = temp->tail = NULL;
    temp->qt   = 0;

    return temp;
}


int insertinit(LIST* L, char x){
    
    if (L == NULL) return -1;

    DATA* temp =  (DATA*) malloc(sizeof(DATA));

    if (L->head == NULL && L->tail == NULL){
        temp->data   = x;
        temp->last = L->head;
        temp->next = L->tail;
        L->head    = L->tail  = temp;
        L->qt++;
        
        return 1;
    }else{
        temp->data    = x;
        temp->next = L->head;
        temp->last = NULL;
        L->head->last = temp;
        L->head    = temp;
        L->qt++;

        return 1;
    }
}

int insertfinal(LIST* L, char x){

    if (L == NULL) return -1;

    DATA* temp = (DATA*) malloc(sizeof(DATA));

    temp->data = x;

    temp->last = L->tail;
    temp->next = NULL;
    L->tail->next = temp;
    L->tail     = temp;

    return 1;

}


int insertmeans(LIST* L,int p, DATA* k, char x){

    DATA* j = L->head;

    if (p > 0){
        while (p--) j = j->next;
    }

    k->next = j->next;
    k->last = j;
    j->next = k;

    L->qt++;

    return 1;

}

void freelist(LIST* L){

    if (L != NULL){
        DATA* temp = L->head;
        DATA* x;

        while (temp != NULL){
           x  = temp;
            temp = temp->next;
            free(x);
        }
        free(L);    
    }
}


int main (){


    char string[MAX];
    unsigned i, j, k, size;


    // lendo o texto ate o fim do arquivo 
    while (scanf("%s", string) != EOF){
    
            LIST* l = listcreate();
            size    = strlen(string);

            j = 0;
            k = 0;
            for (i = 0; i < size; i++){
                if (string[i] == '[') {
                        j = 1;
                        k = 0;
                }
                if (string[i] == ']') j = 0;

                if (string[i] != '[' && string[i] != ']'){
                    if (j == 1){

                    }else{
                        insertfinal(l, string[i]);
                    }
                }
            }
    
    }



    return 0;
}


