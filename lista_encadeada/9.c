#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int valor;
    struct node *next;

}node;

void adiciona_inicio(node **head, int valor);
void listar(node *head);
int maior_valor(node *head);

int main(){
    node *head = NULL;

    adiciona_inicio(&head, 10);
    adiciona_inicio(&head, 20);
    adiciona_inicio(&head, 30);
    adiciona_inicio(&head, 40);
    adiciona_inicio(&head, 50);

    listar(head);

    int maior = maior_valor(head);
    printf("%d\n",maior);


}

int maior_valor(node *head){

    int maior_valor = -9999999;
    node *aux = head;

    if (head == NULL){
        return maior_valor;
    }
    maior_valor = aux->valor;

    while(aux != NULL){
        if(aux->valor > maior_valor){
            maior_valor = aux->valor;
        }
        aux = aux->next;
    }

    return maior_valor;

}


void adiciona_inicio(node **head, int valor){
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
