#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node* next;
}node;

void remove_primeiro(node **head);
void adiciona_inicio(node ** head, int valor);
void listar(node *head);

int main(){
    node* head = NULL;

    adiciona_inicio(&head, 10);
    adiciona_inicio(&head, 20);
    adiciona_inicio(&head, 30);
    adiciona_inicio(&head, 40);
    adiciona_inicio(&head, 50);

    listar(head);
    printf("\n\n");

    remove_primeiro(&head);

    listar(head);
}

void adiciona_inicio(node **head, int valor){
    node* novo = (node*)malloc(sizeof(node));

    novo->valor = valor;
    novo->next = NULL;

    if(novo->next == NULL){
        novo->next = *head;
        *head = novo;
    }
}

void remove_primeiro(node **head){
    node *temp = *head;
    *head = temp->next;
    free(temp);
}

void listar(node* head){
    node* aux = head;

    while (aux != NULL)
    {
        printf("%p\n",&aux);
        printf("%d\n",aux->valor);
        aux = aux->next;
    }
    
}