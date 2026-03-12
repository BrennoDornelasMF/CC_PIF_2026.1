#include<stdio.h>

/*
void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int a =10;
    int b = 5;
    
    troca(&a,&b);

    printf("A: %d B: %d", a, b);
}
    */

    void imprime (int *V, int *N){

        for(int i = 0; i < *N;i++){

            printf("%d, ", *(V+i));
        }

    }

    int main(){
        int V[5] = {1,2,3,4,5};
        int m = 5;

        imprime(&V,&m);
    }