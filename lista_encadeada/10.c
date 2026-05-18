#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int valor;
    struct node *next;
    
}node;

void adicionar_inicio(node **head, int valor);
void listar(node *head);
void libera_lista(node **head);


int main(){
    node *head = NULL;

    adicionar_inicio(&head, 10);
    adicionar_inicio(&head, 20);
    adicionar_inicio(&head, 30);
    adicionar_inicio(&head, 40);
    adicionar_inicio(&head, 50);

    listar(head);

    libera_lista(&head);

    listar(head);

}

void adicionar_inicio(node **head, int valor){

    node *novo = (node*)malloc(sizeof(node));
    novo->valor = valor;
    novo->next = *head;
    *head = novo;

}

void listar(node *head){

    node *aux = head;

    if(head == NULL){
        printf("lista vazia");
    }
    
    while (aux != NULL)
    {
        printf("%p\n", &aux);
        printf("%d\n", aux->valor);
        aux = aux->next;
    }
    

}


void libera_lista(node **head){

    node *prox;
    node *aux = *head;

    while (aux != NULL)
    {
        prox = aux->next;
        free(aux);
        aux = prox;
    }

    *head = NULL;
}

