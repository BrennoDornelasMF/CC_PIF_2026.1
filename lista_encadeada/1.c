#include <stdio.h>

typedef struct node
{
    int valor;
    struct node *next;
}node;

void inicializa_lista(struct node **head);

int main() {


    node **head;

    inicializa_lista(head);

    
    return 0;
}

void inicializa_lista(struct node **head){

    *head = NULL;

}
