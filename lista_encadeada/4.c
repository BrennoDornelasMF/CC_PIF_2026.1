#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node *next;
}node;

int conta_nos(node *head);

node* cria_nos(int valor);

void adiciona_inicio(node **head, int valor);

int main(){
    node *head = NULL;

    adiciona_inicio(&head,10);
    adiciona_inicio(&head,20);
    int qtd = conta_nos(head);
    printf("%d",qtd);

}

int conta_nos(node *head){

    node *aux = head;

    int qtd = 0;
    while (aux != NULL)
    {
       qtd +=1;
       aux = aux->next; 
    }
    return qtd;
}

node* cria_nos(int valor){

    node *novo = malloc(sizeof(node));

    novo->valor = valor;
    novo->next = NULL;

    return novo;
}
void adiciona_inicio(node **head, int valor){

    node *novo = cria_nos(valor);

    novo->next = *head;
    *head = novo;
}
