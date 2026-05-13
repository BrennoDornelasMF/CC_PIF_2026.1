#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int valor;
    struct node *next;
}node;

void adiciona_final(node **head,int valor);
node* criar_no(int valor);
void listar(node *head);


int main(){
    node *head = NULL;

    adiciona_final(&head,10);
    adiciona_final(&head,20);
    adiciona_final(&head,30);
    adiciona_final(&head,40);

    listar(head);


}

void adiciona_final(node **head,int valor){
    
    node* aux = *head;
    node* novo = criar_no(valor);
    if(*head == NULL){
        *head = novo;
    }else{

        while (aux->next != NULL)
        {
            aux = aux->next;
        }
        aux->next = novo;
    }
}

node* criar_no(int valor){
    node* novo = malloc(sizeof(node));

    novo->valor = valor;
    novo->next = NULL;

    return novo;
}

void listar(node *head){
    node *aux = head;

    while (aux != NULL)
    {
        printf("%p\n", aux);
        printf("%d\n", aux->valor);
        aux = aux->next;
    }
    
}
