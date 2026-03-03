#include <stdio.h>

int somaDiagonalSuperior(int N, int M[N][N]);

int main(){

    int N = 3;
    int M[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int soma = somaDiagonalSuperior(N,M);
    printf("%d", soma);

    return 0;
}

int somaDiagonalSuperior(int N, int M[N][N]){

    int soma = 0;
    int i,j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){

            if(i + j == N - 1){
                soma += M[i][j];
            }
        }
    }

    return soma;
}