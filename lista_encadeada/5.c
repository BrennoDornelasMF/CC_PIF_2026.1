#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *next;

}node;

node* criar_no(int valor);
node* buscar(node *head, int valor);
void adicionar_inicio(node **head, int valor);
void listar(node *head);

int main(){
    node *head = NULL;

    adicionar_inicio(&head,10);
    adicionar_inicio(&head,20);
    adicionar_inicio(&head,30);
    adicionar_inicio(&head,40);

    node *res = buscar(head,20);

    listar(head);
    printf("%p\n", *res);
    printf("%d", res->valor);

}

void adicionar_inicio(node **head, int valor){
    node* novo = criar_no(valor);

    novo->next = *head;
    *head = novo;
}

node* criar_no(int valor){
    node* novo = malloc(sizeof(node));

    novo->valor = valor;
    novo->next = NULL;

}

node* buscar(node *head, int valor){
    node *aux = head;

    while(aux!= NULL){

        if (aux->valor == valor){
            return aux;
        }else{
            aux = aux->next;
        }
    }
    return NULL;
}

void listar(node *head){
    node *aux = head;

    while(aux != NULL){
        printf("%p\n",*aux);
        printf("%d",aux->valor);
        printf("\n");
        aux =aux ->next;
    }
}

