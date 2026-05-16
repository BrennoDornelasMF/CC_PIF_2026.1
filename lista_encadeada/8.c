#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int valor;
    struct node *next;
}node;

void adiciona_inicio(node **head, int valor);
void listar(node* head);
void remover_ultimo(node **head);

int main(){

    node *head = NULL;

    adiciona_inicio(&head,  10);
    adiciona_inicio(&head,  20);
    adiciona_inicio(&head,  30);
    adiciona_inicio(&head,  40);
    adiciona_inicio(&head,  50);

    listar(head);

    printf("\n");

    remover_ultimo(&head);
    
    listar(head);
    


}

void remover_ultimo(node **head){

    node *aux = *head;

        if(aux->next == NULL){
            free(aux);
            *head = NULL;
            return;
        }
            while (aux->next->next != NULL){
            aux = aux->next; 
        }
        free(aux->next);
        aux->next = NULL;

}

void adiciona_inicio(node **head, int valor){

    node *novo = (node*)malloc(sizeof(node));

    novo->valor = valor;
    novo->next = NULL;

    if (novo->next == NULL){

        novo->next = *head;
        *head = novo;

    }
    
}

void listar(node* head){
    node* aux = head;

    while (aux != NULL)
    {
        printf("%p\n", &aux);
        printf("%d\n", aux->valor);
        aux = aux->next;

    }
    
}


