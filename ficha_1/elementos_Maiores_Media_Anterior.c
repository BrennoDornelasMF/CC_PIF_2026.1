#include <stdio.h>

int contaMaioresMediaAnterior(int A[], int tamanho);

int main(){

    int V[4] = {4, 7, 3, 10};

    contaMaioresMediaAnterior(V,4);

    return 0;
}

int contaMaioresMediaAnterior(int A[], int tamanho){

    double soma = A[0];
    double media = 0.0;
    int maiorQueMedia = 0;

    if(tamanho < 2){
        return 0;
    }

    for(int i = 1; i < tamanho; i++){
      ;
        media = soma / i;

        if(A[i] > media){
            maiorQueMedia++;
        }

        soma += A[i];
    }

    printf("%d\n",maiorQueMedia);
    return maiorQueMedia;

}