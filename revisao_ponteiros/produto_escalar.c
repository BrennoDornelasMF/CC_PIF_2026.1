#include <stdio.h>

int produtoEscalar(int* p1, int* p2,int n);

int main(){
    int V1[5] = {1,3,5,7,9};
    int V2[5] = {2,4,6,8,10};
    int N = 5;

    int resultado = produtoEscalar(V1, V2, N);

    printf("resultado %d", resultado);

}

int produtoEscalar(int* p1, int* p2,int n){

    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += *(p1 + i) * *(p2 + i);
    }
    return soma;
}
