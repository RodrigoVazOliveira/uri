#include <cstdio>
#include <cstdlib>
#include <cstring>

// tamanho maximo da minha string exigida pelo URI
#define MAX 100001

struct data{
    char data;
    struct data* next;
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







int main (){


    char string[MAX];

    // lendo o texto ate o fim do arquivo 
    while (scanf("%s", string) != EOF){
    
    
    
    }



    return 0;
}


