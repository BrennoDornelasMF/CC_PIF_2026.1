#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int valor;
    struct node *next;
}node;

void adicionar_inicio(node **head, int valor);
void listar(node *head);
void remove_valor(node **head, int valor);

int main (){

    node *head = NULL;

    adicionar_inicio(&head, 10);
    adicionar_inicio(&head, 20);
    adicionar_inicio(&head, 30);
    adicionar_inicio(&head, 40);
    adicionar_inicio(&head, 50);

    listar(head);

    remove_valor(&head, 20);
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

void remove_valor(node **head, int valor){

    node *aux = *head;
    node *ant = NULL;

    while (aux != NULL){

        if(aux->valor == valor){


            if(ant == NULL){
                *head = aux->next;
            } else {
                ant->next = aux->next;
            }

            free(aux);
            return;
            
        }
        ant = aux;
        aux = aux->next;
    }
}