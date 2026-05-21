#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *next;
}node;

void adicionar_inicio(node **head, int valor);
void listar(node *head);
node* remove_head(node **head, int pos);


int main (){

    node *head = NULL;

    adicionar_inicio(&head, 10);
    adicionar_inicio(&head, 20);
    adicionar_inicio(&head, 30);
    adicionar_inicio(&head, 40);
    adicionar_inicio(&head, 50);

    listar(head);
    printf("\n");
    node* pos = remove_head(&head,2);
    printf("%p", &pos);
    printf("\n");

    // listar(head);
}

void adicionar_inicio(node **head, int valor){

    node *novo = (node*)malloc(sizeof(node));

    novo->valor = valor;
    novo->next = *head;
    *head = novo;
}

void listar(node *head){
    node *aux = head;

    while (aux != NULL)
    {
        printf("%p\n", &aux);
        printf("%d\n", aux->valor);
        aux = aux->next;
    }
    
}

node* remove_head(node **head, int pos){

    if(head ==NULL){
        return NULL;
    }

    node *temp = NULL;
    node *aux  = head;
    int i = 0;

    while (i != 0)
    {
        temp = aux;
        aux = aux->next;
        free(temp);
    }
    return aux;
    
}
