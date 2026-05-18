#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *next;
}node;

void adicionar_inicio(node **head, int valor);
void listar(node *head);
void inverte_lista(node **head);

int main (){

    node *head = NULL;

    adicionar_inicio(&head, 10);
    adicionar_inicio(&head, 20);
    adicionar_inicio(&head, 30);
    adicionar_inicio(&head, 40);
    adicionar_inicio(&head, 50);

    listar(head);
    inverte_lista(&head);
    printf("\n");

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

    while (aux != NULL)
    {
        printf("%p\n", &aux);
        printf("%d\n", aux->valor);
        aux = aux->next;
    }
    
}

void inverte_lista(node **head){

    node *proximo = NULL;
    node *atual = *head;
    node *anterior = NULL;

    
    
    while (atual != NULL)
    {
        proximo = atual->next;
        
        atual->next = anterior;
        anterior = atual;
        atual = proximo;
    }
    *head = anterior;
    
}
