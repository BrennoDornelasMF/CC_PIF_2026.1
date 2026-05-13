#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int valor;
    struct node *next;
}node;

void adiciona_no_inicio(node **head, int valor);

struct node* criarNode(int valor);

void imprimir_lista(node *head);


int main(){
    node *head = NULL;


    adiciona_no_inicio(&head, 10);
    adiciona_no_inicio(&head, 20);

    imprimir_lista(head);

}

void adiciona_no_inicio(node **head, int valor){

    node *novo = criarNode(valor);

    novo->next = *head;
    *head = novo;
}

struct node* criarNode(int valor){
    
    node *novo = (node*)malloc(sizeof(node)); 

    novo->valor = valor;
    novo->next = NULL;

    return novo;

}

void imprimir_lista(node *head){
    node *aux = head;

    while (aux != NULL)
    {
        printf("%d\n", aux->valor);
        aux = aux->next;
    }
    printf("\n");
}


